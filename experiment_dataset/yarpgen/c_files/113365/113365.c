/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((!(((var_16 ? (min(var_14, var_1)) : (var_4 % var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (!-2372986473932169255);
                var_19 = var_8;
                var_20 = (min(var_20, var_16));

                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    arr_10 [i_0] = (arr_9 [i_0 + 1] [i_1]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_0] [i_3] = -2372986473932169248;
                        var_21 = (!var_4);
                    }
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        var_22 = ((var_14 ? -var_5 : ((4294967295 ? 1615212193350361979 : 9223372036854775807))));
                        var_23 = ((((min((arr_16 [i_0] [i_4] [i_2 + 1] [i_1]), (arr_15 [i_0 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_4 + 1] [i_4])))) ? (arr_1 [i_0]) : (arr_4 [i_4 + 1] [i_4])));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_24 = (((((var_12 ? (arr_17 [i_0] [i_1] [i_2] [i_2] [i_5]) : (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1])))) * ((var_13 ? var_1 : var_16))));
                            var_25 |= var_9;
                        }
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            var_26 = ((((max((arr_11 [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 1] [i_2 - 2] [i_6 - 1]), (~1401570840)))) | (arr_12 [i_6] [i_2] [i_2] [i_4 - 1] [i_2] [i_6 - 2])));
                            var_27 = (((((arr_12 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0] [i_2 - 1] [i_6 - 2]) ? (arr_12 [i_0] [i_0 - 1] [i_1] [i_2] [i_2 - 3] [i_6 + 1]) : (arr_12 [i_0 - 2] [i_0 - 2] [i_2 - 3] [i_2 - 3] [i_2 - 1] [i_6 - 1]))) & ((min(-var_0, ((min(var_9, (arr_3 [i_0])))))))));
                            var_28 = ((!(((~((var_2 ? (arr_5 [i_0] [i_0] [i_0]) : var_14)))))));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_26 [i_0] [i_0] = (arr_11 [i_0] [i_1] [i_0] [i_4] [i_0] [i_7]);
                            var_29 = ((min(((min(var_1, var_1)), (min((arr_9 [i_7] [i_1]), var_5))))));
                            var_30 = var_1;
                        }
                        var_31 = (arr_22 [i_0 - 2] [i_1] [i_2] [i_2] [i_4]);
                        arr_27 [i_0] = ((min((arr_22 [i_1] [i_1] [i_1] [i_1] [i_1]), var_10)) % var_3);
                    }
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((((-1401570862 ? 2860788651 : 1401570838))) ? ((((min((arr_17 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_2]), (arr_1 [i_2])))) ? (arr_23 [i_0 - 1] [11] [i_0] [i_0] [i_2]) : ((4036869927910292775 ? var_3 : 12236)))) : var_2);
                }
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    var_32 += (arr_23 [i_0 - 1] [i_1] [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_33 = (min(((min(var_11, (arr_23 [i_0] [i_0] [i_8 - 1] [i_9] [i_10])))), (((~var_3) ? ((((arr_14 [i_0] [8] [i_0 - 1] [i_0] [i_0]) ? var_16 : var_4))) : (min((arr_11 [i_0] [4] [4] [i_8 + 1] [i_10 + 1] [i_8 + 1]), (arr_8 [i_10] [i_10 - 1])))))));
                                arr_37 [i_0] [i_1] [i_0] [i_8] [i_0] [i_0] [i_10] = var_1;
                                arr_38 [i_0] [i_9] [i_8] [i_8 + 1] [i_1] [i_0] [i_0] = (!4176208612);
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = (!var_3);
    var_35 |= var_16;
    var_36 = var_1;
    #pragma endscop
}
