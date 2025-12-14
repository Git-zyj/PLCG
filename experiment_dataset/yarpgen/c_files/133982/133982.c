/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_9, var_10));
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_7 [i_2] = (~var_9);
                    arr_8 [i_2] [i_2] [i_2] [i_0] = 1040187392;
                    var_15 = (min(var_15, (((!((max((min(17027667386291390275, var_12)), (~var_2)))))))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_21 [i_0] [i_4] [i_0] [i_4] [0] [i_3] [i_0] = ((var_10 ? 1419076687418161340 : var_12));
                                arr_22 [i_0] [i_3] = (var_12 || 5475836727514307965);
                                var_16 &= ((var_12 * (!1)));
                                var_17 = (max(var_17, var_5));
                            }
                        }
                    }
                    arr_23 [6] [i_0] |= (((1 <= var_0) ? 1 : 10));
                    var_18 = ((var_1 ? var_0 : var_7));
                    arr_24 [i_3] = var_7;
                }
                for (int i_6 = 3; i_6 < 11;i_6 += 1)
                {
                    var_19 ^= ((-11 ? ((((((max(var_11, var_10))) && ((min(var_0, 3))))))) : (min(1099510579200, var_0))));
                    var_20 = (min(var_20, (-10 | 8523110042545364123)));
                    var_21 += (min((min(32767, ((-1314365808 ? var_2 : var_7)))), ((max((var_9 <= var_5), ((0 ? -5477091774934104488 : 1)))))));
                }
                var_22 = -0;
            }
        }
    }

    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 22;i_10 += 1)
                {
                    {
                        arr_42 [i_7] [i_8] [i_8] [i_10] = -167;

                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            var_23 = (min(var_23, (((-var_6 ? (min(-var_8, 1010376233437860261)) : 223)))));
                            arr_45 [14] [i_8] = (~1);
                        }
                        for (int i_12 = 2; i_12 < 22;i_12 += 1) /* same iter space */
                        {
                            var_24 -= min(((min(var_4, ((var_4 ? var_0 : -24012))))), (((~var_6) ? var_12 : (((var_8 ? var_10 : var_7))))));
                            var_25 = (max(var_25, (((!(((1 ? 2558593142892162007 : var_11))))))));
                            arr_49 [i_7] [9] [i_9] [i_7] [i_12] = (max(253, ((1 ? 1153786234 : 24035))));
                            arr_50 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = (min(((((min(var_7, var_2))) ? ((max(var_4, var_6))) : (1 + var_2))), var_3));
                            var_26 -= ((((max(((max(226, 223))), 24047))) ? (min(var_4, ((7475891893026118639 ? 1 : 24063)))) : (~33)));
                        }
                        for (int i_13 = 2; i_13 < 22;i_13 += 1) /* same iter space */
                        {
                            arr_53 [i_7] [i_9] [i_13] [i_10] [i_13] [i_7] = (max(-10970852180683432976, ((min((-23983 <= 7560647147953331899), 6)))));
                            arr_54 [i_7] [2] [i_13] = ((23983 ? 1 : 64));
                        }

                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            arr_59 [i_7 + 2] [16] = var_0;
                            var_27 = (max((~1242149590), (max(1, var_12))));
                        }
                        for (int i_15 = 3; i_15 < 22;i_15 += 1)
                        {
                            arr_63 [i_15] [i_10] [i_15] = 20;
                            arr_64 [i_7 + 2] [i_10 + 2] [i_7 + 2] [i_7 + 2] [i_10 + 2] [i_15] [i_7 + 2] = (((1301761927 || 0) ? (!var_10) : ((min(var_7, 33)))));
                            var_28 += var_1;
                            arr_65 [i_15] [i_8] = (24039 % 1);
                            arr_66 [i_7] [i_7] [i_7] [i_10] [i_15] &= ((min(var_10, var_3)));
                        }
                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            arr_69 [i_7] [i_7] [i_7] [i_7] [i_7] = var_7;
                            arr_70 [i_7] [i_10] [i_7] [i_10] = (182519561 - var_9);
                            arr_71 [i_8] [i_7] &= 4;
                        }
                    }
                }
            }
        }
        arr_72 [i_7] = (((((!(~var_9))))) * ((-24012 ? 12077766970187757123 : 1618747939)));
    }
    for (int i_17 = 0; i_17 < 22;i_17 += 1)
    {

        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            var_29 = 4819279701142840441;
            arr_77 [i_18] [i_17] [i_18] = ((~((min(var_4, var_4)))));
        }
        var_30 = (min(((max((min(var_9, 17453)), (-30896 != var_2)))), ((1618747939 ? -23983 : (min(1, 14593111292191548774))))));
    }
    #pragma endscop
}
