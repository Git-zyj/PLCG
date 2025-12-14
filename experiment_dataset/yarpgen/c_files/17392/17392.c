/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((((((var_9 ? var_12 : var_7)) | var_3))) ? ((3063758477 ? 1 : 3063758477)) : ((((!(((-9 ? var_9 : var_10))))))));
    var_16 = ((var_11 ? var_1 : var_12));
    var_17 = (min(var_17, (((!((((3063758452 & -2) ? 206 : (3400011411 + 70)))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_18 = (((arr_1 [1] [i_0 + 1]) ? ((-19 ? 7082843648621167035 : var_1)) : (~0)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = ((2 ? (arr_3 [i_1] [i_0 + 2] [i_1 + 1]) : -255));
                    var_20 = var_5;

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_21 = var_8;
                        var_22 = (arr_3 [i_1] [i_2 - 1] [i_3 + 1]);
                        arr_12 [i_0] [i_0] [i_1] [0] [i_0] [1] = ((209 ? 19 : 4192598568));

                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            var_23 = 65535;
                            var_24 = (max(var_24, (((!(var_10 / 7082843648621167054))))));
                            arr_16 [i_0] [6] [i_1] [i_0] [0] = (((1 + 0) ? ((65527 ? 4294967273 : -7)) : (arr_13 [i_2 - 1] [i_0 + 1])));
                        }
                        for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_2] [1] [i_2] |= (((arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 3] [i_3]) ? ((var_9 ? 2681878722 : var_13)) : (arr_7 [i_0] [i_2] [i_2] [i_5 - 1])));
                            arr_22 [i_1] [i_1] [10] [i_3] [i_5] = (((arr_6 [12] [i_1]) >= 1));
                        }
                        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_25 = (min(var_25, ((((~1) ? (arr_7 [i_0] [i_0] [i_2] [14]) : ((12267 ? 3063758484 : 2714105420)))))));
                            var_26 += (((((0 ? 4139559181458044260 : 105))) ? 62947 : (arr_24 [8] [i_3 + 2] [i_2] [i_3] [i_0] [i_2 + 1] [14])));
                            var_27 = (max(var_27, var_12));
                            var_28 += ((1264777096 ? (arr_18 [i_0 + 1] [i_1 - 2] [i_2 + 2] [i_2 + 2] [i_3 - 1] [i_3 + 1] [i_6 - 1]) : var_2));
                        }
                        arr_26 [i_0] [i_0] [i_2] [i_1] = ((!4389715242656004025) ? (-5 / var_4) : var_2);
                    }
                }
            }
        }
        var_29 = ((var_14 ? var_13 : (((var_1 ? -18941 : 1)))));
        var_30 *= ((16742 ? (var_5 + var_5) : ((var_2 ? (arr_5 [i_0] [14] [14]) : 40))));
    }
    for (int i_7 = 3; i_7 < 21;i_7 += 1)
    {
        arr_29 [i_7 + 1] [i_7 + 1] = (((arr_28 [i_7]) * (((((2110003942 - (arr_28 [i_7 - 1])))) ? (!19) : (arr_27 [i_7] [7])))));
        var_31 = (min(0, -4464354527792909061));
        var_32 ^= max(((((arr_28 [i_7 + 1]) - (arr_28 [i_7 + 1])))), ((-20 % (arr_28 [i_7 + 1]))));
        var_33 = (max(((var_10 ? 1 : (arr_27 [i_7 - 2] [i_7 + 1]))), (arr_28 [i_7 - 2])));
    }
    var_34 = (max((89 * 2462490945), var_11));
    #pragma endscop
}
