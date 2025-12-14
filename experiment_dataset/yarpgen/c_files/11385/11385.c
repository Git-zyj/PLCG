/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((-61 ? var_1 : var_15)))) ? -61 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] = (((arr_5 [i_0]) > (arr_4 [i_1 - 1] [i_2 - 2])));
                    arr_8 [i_0] [i_1 + 1] [i_1 - 1] [i_2] = ((3840 ? (((arr_5 [i_1 + 1]) + (arr_5 [i_1 + 1]))) : (arr_5 [i_1 + 1])));
                    var_20 = 15265;
                }
                /* vectorizable */
                for (int i_3 = 4; i_3 < 13;i_3 += 1)
                {
                    var_21 *= ((((var_8 || (arr_4 [i_1] [i_0]))) ? var_17 : 3820));
                    var_22 += (6 || var_10);
                    arr_13 [10] [i_1] [i_0] [i_3] = (((arr_5 [i_1 - 1]) ? -542261867 : var_0));

                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        arr_16 [i_3] [i_0] [i_3] = var_18;
                        arr_17 [i_0] [i_0] [11] [i_0] = var_0;
                        arr_18 [0] [0] [i_0] [i_4] = (((arr_3 [i_0] [i_3 + 3] [i_4 - 2]) ? (arr_0 [i_0]) : 14));
                        var_23 = (((((arr_3 [i_0] [7] [i_3]) ? var_14 : var_16)) > var_16));
                    }
                    arr_19 [i_0] [i_0] [i_0] = var_17;
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    arr_22 [i_0] [i_0] [i_5] [i_1] = (((arr_1 [i_1]) ? 61714 : (arr_15 [i_0] [i_1] [i_0] [i_0])));
                    arr_23 [i_0] = (arr_1 [i_0]);
                    arr_24 [i_0] [i_0] [i_5] [i_5 + 3] = -2507826744840963752;
                    arr_25 [12] [i_1] [i_5] [4] &= 65523;
                    arr_26 [i_5] [i_0] [i_0] = (((2006 | -5275224868556089831) ? (-9223372036854775807 - 1) : (((var_14 ? 0 : -14445)))));
                }
                arr_27 [0] [0] &= ((-1628138197 ? 2022 : 100));
            }
        }
    }
    var_24 = var_5;
    #pragma endscop
}
