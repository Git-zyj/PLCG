/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_1] = var_5;

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_12 = max(12723231745924436440, (max(6, ((5723512327785115175 ? 57 : 18446744073709551594)))));

                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_2] = (((max(17044474465319092605, (max(0, 18)))) < 5723512327785115184));
                        arr_13 [i_2] [i_1] [i_1] [i_1] = max(4294967292, (min((max(199, 17044474465319092619)), 0)));
                        var_13 = -18;
                    }
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    var_14 = (~0);
                    var_15 = ((~(arr_0 [i_4 + 1])));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_16 += (arr_9 [6] [i_1] [i_6]);
                                var_17 = 181661455;
                                var_18 = 173;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 &= ((((((18 ? 0 : 46)))) ? var_8 : (max(46, ((4588688808756873062 ? 16 : var_7))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 23;i_8 += 1)
        {
            {
                var_20 = max((((arr_24 [i_8 + 1]) ? (~39778) : 0)), (!52681));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((79 ? (--0) : (min((min((arr_32 [i_7]), 12127070161864406064)), (199 * 70)))))));
                                var_22 = (((((max(3250, 17)))) | 3837760180));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_12 = 3; i_12 < 10;i_12 += 1)
    {
        var_23 = (min((((!(((5723512327785115176 ? (arr_11 [i_12] [i_12 + 1] [i_12 - 3] [i_12] [i_12]) : 4277009474)))))), ((-75 ? (max(129, (arr_25 [19] [19]))) : (arr_25 [i_12 - 3] [1])))));
        var_24 = (-(max((199 % var_8), 11)));
        var_25 = 3523839890;
    }
    #pragma endscop
}
