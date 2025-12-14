/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 9910443629729854661;
        var_16 |= ((((((arr_1 [i_0]) || (arr_2 [i_0] [i_0])))) << (((((arr_1 [i_0]) - (arr_2 [i_0] [i_0]))) - 71))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_17 = (min(var_17, 1));
                        var_18 = (((((~((97 ? (arr_6 [i_1]) : -1))))) ? ((~((-2147483630 ? (arr_11 [i_0] [i_1] [i_2] [3] [i_3]) : (arr_2 [i_2] [i_2]))))) : ((~(arr_7 [i_1])))));
                        var_19 = (min(((((arr_11 [i_0] [i_1] [i_2] [i_0] [i_3]) && (((0 ? 27314 : (arr_8 [i_2]))))))), ((-(arr_4 [i_0])))));
                        var_20 = (max(var_20, ((max(-1, (~9910443629729854650))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_21 = (min(var_21, (arr_5 [i_0] [i_4])));
                            arr_14 [i_2] [i_1] [i_2] [i_1] [i_2] = ((18446744073709551615 ? 1424193137 : (arr_9 [13] [3] [i_1] [i_3])));
                            var_22 = (arr_7 [i_1]);
                            var_23 *= ((-((1180490807 ? 12971 : 15))));
                            arr_15 [i_0] [i_1] [i_2] [i_2] = (--2693257990541720583);
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_24 = (min(var_24, ((((arr_1 [i_0]) ? 0 : (1 && 11))))));
                            var_25 = (!54242);
                            arr_18 [i_0] [i_1] [i_2] [i_2] [i_2] = ((((~(arr_2 [i_0] [i_0])))) ? 9910443629729854661 : (((min((arr_2 [i_0] [i_1]), 56256)))));
                        }
                    }
                }
            }
            var_26 = 161;
            var_27 = (arr_8 [i_0]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_28 = (((arr_13 [i_0] [i_6]) ? (arr_13 [i_0] [i_6]) : (arr_13 [i_6] [i_0])));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 24;i_8 += 1)
                {
                    {
                        var_29 = ((~(arr_26 [i_8 + 1])));
                        var_30 = (min(var_30, (((-6773863573556284473 ? 46 : (arr_2 [i_7] [i_0]))))));

                        for (int i_9 = 3; i_9 < 24;i_9 += 1)
                        {
                            arr_29 [i_0] [i_9] [8] [i_8] [i_8 + 1] [i_9] = (arr_27 [i_9] [7] [i_9] [i_9] [i_9 - 2] [i_9] [i_9 - 1]);
                            var_31 = (~441224052636961838);
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_32 = (arr_27 [i_10] [i_10] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_7] [i_7]);
                            var_33 = (arr_9 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]);
                            var_34 = (max(var_34, (arr_6 [i_6])));
                        }
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            var_35 = (((arr_26 [i_8 + 1]) ? -295690113 : (arr_26 [i_8 - 1])));
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_26 [i_7]);
                            var_36 = (((-127 - 1) / (arr_35 [i_6] [i_8 + 1] [0] [i_11] [14])));
                            var_37 |= (285818827 && 8536300443979696953);
                        }
                    }
                }
            }
            arr_38 [i_6] [i_6] = -1;
        }
    }
    var_38 = (max((((var_10 != ((1 ? var_8 : var_12))))), var_5));
    var_39 = var_4;
    #pragma endscop
}
