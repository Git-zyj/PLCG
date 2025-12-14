/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_9, 624690904));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((min((((arr_2 [i_0 - 1]) != (arr_2 [i_0 - 2]))), (arr_5 [i_1] [i_1] [2]))))));
                arr_6 [0] [i_1] [i_0] = ((((133 ^ (((arr_5 [i_0] [i_0] [i_0]) + var_10)))) >> ((((((((arr_0 [i_0]) ? 139 : 141))) & (max(var_5, (arr_0 [i_0]))))) - 117))));
                var_13 = (((((var_0 ? var_5 : var_4))) ? (((var_9 ? var_6 : var_6))) : (min((arr_3 [i_0 - 1] [i_0 - 1]), (arr_3 [i_0 - 2] [i_0 - 2])))));
                var_14 = (min(var_14, ((((((var_7 ? (arr_5 [i_0 + 1] [i_0] [i_0 - 2]) : 147))) ? var_10 : (max(((((arr_5 [i_0] [i_0] [i_0]) <= var_4))), var_7)))))));
            }
        }
    }
    #pragma endscop
}
