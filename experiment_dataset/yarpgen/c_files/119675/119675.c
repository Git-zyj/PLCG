/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_3] [i_0] = (arr_3 [i_0]);
                        var_20 = (arr_8 [i_0] [14] [10]);
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_21 = (max(var_21, 18446744073709551615));
                        var_22 = (max((arr_10 [2] [i_2] [i_2] [i_4] [i_0]), (arr_5 [i_0] [i_0] [i_0] [i_0])));
                        var_23 -= (((((((((arr_7 [i_0] [i_0] [6] [i_4]) ? -34 : var_15)) + 2147483647)) >> (var_10 - 15109498171631631736)))) / ((var_4 | (arr_6 [i_4] [i_2] [i_0] [i_0]))));
                        var_24 = (max(var_24, (9187199489093163392 == -1904488040)));
                    }
                    var_25 = (min(var_25, ((min((((((arr_8 [i_0] [i_1] [i_0]) | (arr_0 [i_0] [i_1]))) | ((((arr_1 [i_0]) ? (arr_1 [i_1]) : (arr_4 [11] [i_0])))))), (arr_6 [i_0] [i_1] [20] [i_2]))))));
                    var_26 = (arr_6 [i_1 - 1] [i_1 + 2] [i_2 - 4] [i_2 - 3]);
                }
            }
        }
    }
    var_27 = (((((var_2 ? (max(-19227, var_1)) : var_15))) ? (~var_2) : var_12));
    #pragma endscop
}
