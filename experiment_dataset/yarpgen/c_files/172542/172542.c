/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [3] = 4611686018427387904;
                arr_5 [i_0] = -2408184686;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] = (!18014261070528512);
                        var_20 = (max(var_20, var_7));
                        arr_14 [i_1] [9] = ((2147483647 << (((arr_2 [i_0] [6]) - 11))));
                        var_21 -= (var_3 & 18828307);
                        var_22 = (-2147483647 - 1);
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_23 = (4611686018427387904 != 36808103);
                            var_24 -= var_0;
                            arr_19 [i_5] [1] [7] [i_0] = (arr_2 [1] [1]);
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_25 = 9223372036854775807;
                            arr_23 [i_0] [i_0] [5] [i_0] [i_0] [i_0] = (((-2147483647 & var_14) << (((((arr_1 [i_1]) & (arr_8 [i_4]))) - 37))));
                            arr_24 [i_2] = (1320502638 || -8192);
                        }
                        arr_25 [i_1] = 124;
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        var_26 = var_6;
                        arr_30 [i_0] [6] [i_1] [i_2] [i_7] = (arr_2 [i_0] [i_7]);
                        arr_31 [i_7] [i_2] [i_2] [0] [i_0] = -18828308;
                        arr_32 [i_2] [i_1] [i_0] = (arr_1 [i_0]);
                        arr_33 [i_7] [i_2] [i_1] [i_0] = (arr_22 [2] [5] [9] [i_2] [i_7]);
                    }
                    var_27 = 4611686018427387896;
                    var_28 -= (arr_15 [5] [i_0] [i_1] [i_2] [i_2] [8]);
                }
                var_29 = 9223372036854775807;
            }
        }
    }
    #pragma endscop
}
