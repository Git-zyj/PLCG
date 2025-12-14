/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((22414 ? 115 : var_15))), var_3));
    var_18 ^= var_15;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_19 = -5959423565584452965;
                            arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = (arr_7 [i_0 + 1] [i_0 + 1] [i_3]);
                        }
                    }
                }
            }
            var_20 = (max(var_20, ((((arr_7 [i_0 - 2] [i_0] [i_0 - 1]) ? (arr_13 [5] [10] [i_0 + 1] [i_0 - 1]) : -50)))));

            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                arr_19 [7] [i_1] [i_0] = var_11;
                arr_20 [i_0] [i_1] [i_5] [i_5] = (arr_12 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_27 [i_0 - 2] [i_1] [i_5] [4] [1] |= ((((((-9223372036854775807 - 1) ? -3312 : (arr_26 [i_0] [12] [7] [i_5] [i_6] [i_7] [12])))) ? (((((arr_25 [i_0] [i_1] [i_1] [i_1] [i_7]) > var_13)))) : 2547998800558992470));
                            var_21 = (max(var_21, (((((~(-9223372036854775807 - 1))) + -116)))));
                            var_22 = (((arr_17 [8] [i_5 - 1]) & (arr_17 [i_0] [i_1])));
                            var_23 = (min(var_23, (arr_25 [i_0] [i_0] [i_0 + 1] [i_0] [i_0])));
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            var_24 = ((245 ? 24518 : 2547998800558992468));
            var_25 = (arr_26 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_8 + 3] [i_8]);
            arr_32 [i_0] = -4675471927126756155;
            var_26 = ((15898745273150559148 ? 1 : 68));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_27 = 5161532648705999175;
            arr_36 [i_9] = (arr_29 [i_0 - 1]);
        }
        var_28 = (max(var_28, var_13));
    }
    var_29 = 1;
    #pragma endscop
}
