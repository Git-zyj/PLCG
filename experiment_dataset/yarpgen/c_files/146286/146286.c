/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_3;
        var_11 = var_8;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_5 [13] = (((((arr_1 [i_1]) ? (arr_1 [i_1]) : var_7))) ? ((min((arr_1 [i_1]), (arr_1 [i_1])))) : ((((arr_1 [i_1]) <= (arr_1 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    var_12 ^= (arr_3 [i_3 - 1]);
                    var_13 = ((((min((min(var_9, var_2)), (arr_4 [i_1] [i_2])))) ? 1 : (((0 == (((arr_3 [i_2]) ? var_3 : -9)))))));
                }
            }
        }
        arr_11 [i_1] = (min(((~((var_9 ? (arr_3 [i_1]) : var_3)))), ((((arr_3 [i_1]) ? (arr_6 [i_1]) : var_2)))));
        arr_12 [i_1] = var_8;
    }
    var_14 -= ((~(min(var_4, (var_3 & var_5)))));
    var_15 = ((((((var_7 ? var_7 : var_4)))) >= 1662805213));
    #pragma endscop
}
