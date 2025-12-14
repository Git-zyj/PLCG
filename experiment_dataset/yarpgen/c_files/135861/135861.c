/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((1 ? ((1 ? 1237593809 : var_11)) : 1));
                    arr_7 [i_0] [i_1] = ((-((~((1 ? (arr_0 [i_0]) : var_7))))));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_21 = 61524;
                        var_22 = (arr_0 [i_3]);
                        var_23 = (min((arr_4 [i_0] [i_1] [i_0]), (max((arr_3 [i_3 + 1] [i_0]), (arr_3 [i_3] [i_1 + 1])))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_24 = (~10410024209810570100);
                        arr_12 [i_2] [i_1 + 1] [i_0] = (min(var_4, (arr_2 [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_25 *= (((((arr_5 [i_1 - 4] [i_1] [i_1]) || 1237593797)) && (arr_9 [i_0] [i_0] [i_0] [i_1 - 2] [i_1] [i_5])));
                        var_26 = (((!var_6) - ((~(arr_5 [i_0] [i_1] [i_2])))));

                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            var_27 = 232;
                            var_28 ^= ((~((((min(3057373487, 1237593807))) ? var_0 : ((4884957253190565331 ? -2147483639 : 1))))));
                            var_29 = (arr_6 [i_0] [i_0] [i_0]);
                            var_30 = (((((arr_15 [i_1 - 2] [i_5] [i_1 - 2] [i_5] [i_6 - 1] [1] [i_6 + 2]) / (arr_5 [i_1 + 1] [i_1 - 2] [i_1 - 4]))) > (arr_15 [i_1 - 2] [i_1] [i_5] [i_5] [i_1] [i_1] [i_6 - 1])));
                        }

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_31 -= var_17;
                            arr_22 [i_0] [i_1 - 4] [i_2] [i_5] [i_7] [i_5] [i_2] = ((-((1237593784 ? 1 : 181085126))));
                            var_32 = (((1237593809 - 3057373487) + (arr_18 [i_1 - 3] [i_1] [i_1 - 3] [i_5] [i_1])));
                            arr_23 [i_0] [i_1] [i_5] = -var_1;
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            var_33 = (!(1237593807 & 0));
                            var_34 = (9108173751636315253 < 1237593809);
                            var_35 = (min(var_35, var_6));
                            var_36 = (((!19555) || (2673587726121600885 || 9108173751636315253)));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_37 = (((arr_6 [i_1 - 1] [i_1 - 3] [i_1 - 1]) && (arr_27 [i_0] [6] [i_0] [i_2] [i_9])));
                        arr_29 [i_9] [i_0] [i_0] = (!9108173751636315266);
                        arr_30 [10] [i_1 - 2] [i_1 - 3] [i_1] = (arr_5 [2] [i_1 - 4] [i_1]);
                        var_38 *= (arr_16 [i_0] [i_1 - 3] [i_2] [i_9] [i_0]);
                    }
                }
            }
        }
    }
    var_39 = (~-4884957253190565325);
    var_40 = 19555;
    var_41 = (((var_1 - -var_18) + (min(8745095363636498115, var_8))));
    #pragma endscop
}
