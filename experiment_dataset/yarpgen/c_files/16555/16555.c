/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = ((!(((~(((arr_1 [i_1]) << (-1 + 17))))))));
                var_22 = max((arr_2 [i_0]), (((-6 * 0) + (-9223372036854775807 - 1))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_23 = (arr_10 [i_2] [i_3] [i_2 + 1]);
                                var_24 = ((~(var_6 && 6838)));
                                var_25 = (((arr_13 [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1]) >> (((arr_13 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 - 1]) - 112082357418171959))));
                            }
                        }
                    }
                    var_26 = (arr_2 [i_2]);
                    var_27 = var_7;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_28 = ((!(arr_20 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_8])));
                                var_29 = ((((1 ? var_0 : var_18)) / 435332678));
                                var_30 = (max(var_30, (arr_4 [i_7])));
                                var_31 = (max(var_31, var_19));
                                var_32 = var_18;
                            }
                        }
                    }
                }
            }
        }
        var_33 = 19945;
        var_34 ^= var_3;
        var_35 = ((+((((arr_3 [i_2] [i_2]) < 1)))));
        var_36 |= var_7;
    }
    for (int i_9 = 1; i_9 < 9;i_9 += 1)
    {
        var_37 &= (((6 && ((max(45587, -999922128))))));
        var_38 = ((-((((max((arr_8 [i_9 - 1] [i_9]), (arr_10 [12] [i_9 + 1] [12])))) | -999922128))));
    }
    var_39 = (((((max(var_4, var_16)) % ((var_14 ? var_17 : 1991088493)))) / var_17));
    var_40 = -999922117;
    #pragma endscop
}
