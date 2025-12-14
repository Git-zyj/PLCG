/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_13 *= ((-32754 ? 0 : 32754));
        arr_2 [i_0] [i_0] = (max(((((-1 ? 2147483647 : (arr_1 [i_0] [i_0]))) >> (var_11 - 110))), (((((min((arr_0 [i_0]), (arr_1 [i_0] [i_0])))) ? 0 : var_5)))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (arr_5 [i_1] [i_1 + 1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_15 = (((0 ? (((arr_1 [i_2] [i_4]) ? 0 : 4)) : (((0 ? (arr_5 [i_1] [i_2]) : (arr_12 [i_3] [i_2] [i_3] [i_4])))))));
                        arr_13 [i_1] [12] [i_1] = -1636333503;
                    }
                }
            }
        }
        arr_14 [i_1] [i_1] = arr_5 [i_1] [i_1];
    }
    var_16 = (~var_0);
    var_17 = var_4;
    var_18 = var_2;
    #pragma endscop
}
