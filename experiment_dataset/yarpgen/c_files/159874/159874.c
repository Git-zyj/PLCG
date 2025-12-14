/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((~(~-29390))));
    var_16 = 15800;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 *= ((212 + (~var_8)));
                var_18 = (max(var_18, (((32 & (-var_3 == 212))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_19 *= ((~(var_6 == var_10)));
                    var_20 = (max(var_20, (((4294967295 ? var_0 : var_14)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = var_5;
                                arr_15 [i_0] [i_1] [i_1] [23] [i_4] = ((212 >= (var_14 - var_8)));
                                var_22 |= ((((var_5 ? var_7 : -35066135363482733)) & (((768 ? 212 : -14371)))));
                                arr_16 [i_0] [i_1] [9] [i_0] [i_0] = (1 << 28);
                                var_23 |= 37;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_24 |= ((var_14 ? 63765 : 12368630247904015405));
                                var_25 += 64769;
                                arr_26 [i_0] [i_0] [i_1] [i_5] [i_6] [23] [i_7] = ((50 ? 31032 : (~6385979374979969442)));
                            }
                        }
                    }
                    var_26 += ((!(((187 << (5910 - 5897))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_27 = -var_9;
                                arr_34 [i_0] [i_0] [i_1] = (var_7 <= var_5);
                                var_28 += (!-22);
                                var_29 ^= (var_2 * 1);
                                arr_35 [1] [i_1] [i_1] [i_1] [i_1] [i_1] = -6385979374979969425;
                            }
                        }
                    }
                    var_30 = (~var_13);
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 3; i_11 < 22;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_31 = (~5718);
                            arr_43 [i_0] [i_0] [i_1] [i_1] [i_11] [i_1] [i_12] = (((44 / (~-30760))));
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 23;i_13 += 1)
                        {
                            var_32 = (121 / (64767 ^ 64235));
                            var_33 = 675299383;
                            var_34 *= 246;
                            arr_46 [i_0] [i_0] [i_1] [i_0] [i_0] [4] [i_0] = (var_11 && 2681510354353487010);
                        }
                        for (int i_14 = 2; i_14 < 22;i_14 += 1)
                        {
                            arr_50 [i_1] [i_1] [i_10] [i_10] [i_10] [5] = (64746 & 64751);
                            var_35 = (max(var_35, ((((((!8388607) ? (var_3 << var_5) : ((1783447962544266024 ? var_3 : 467000511113893066)))) ^ (3800431004 == 150))))));
                        }

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            arr_53 [i_0] [i_1] [i_1] [i_1] [i_15] = -16606;
                            var_36 = -35066135363482733;
                        }
                        for (int i_16 = 1; i_16 < 22;i_16 += 1)
                        {
                            var_37 |= (((~var_0) | 199));
                            var_38 = ((((((4286578687 >> (var_7 + 1314676412))) << (1783447962544266024 && var_9))) >= -var_9));
                            var_39 = (((((6376 % 4) ^ 32343)) << (((((((18021676059510800105 << (-1057671240 + 1057671244)))) ? ((138104564 << (var_14 - 38))) : (var_3 + var_6))) - 138104563))));
                            arr_58 [i_0] [9] [i_1] [i_0] = var_14;
                        }
                        var_40 = 16663296111165285591;
                    }
                    var_41 = (min(var_41, var_14));
                    arr_59 [i_0] [i_0] [i_1] [i_10] = ((64774 >> (-621578858899436110 - 17825165214810115484)));
                }
            }
        }
    }
    var_42 = ((var_0 ? var_6 : 8906788373390223706));
    #pragma endscop
}
