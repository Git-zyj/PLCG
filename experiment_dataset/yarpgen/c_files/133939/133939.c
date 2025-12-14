/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 |= (!var_2);
        arr_2 [i_0] = ((((((arr_0 [i_0]) && var_9))) < ((var_3 ? var_4 : (arr_1 [i_0])))));
        arr_3 [i_0] = ((((!(arr_1 [i_0])))) + (((var_2 || (var_0 || var_5)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_17 = (max(var_17, var_1));
        arr_6 [i_1] = ((!(arr_5 [i_1])));

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_18 = (1243815594 / ((var_3 ? -1243815595 : var_14)));
                        var_19 = (4294967295 ? (arr_13 [i_1] [9] [i_2] [i_3] [i_3] [i_4]) : (arr_13 [5] [i_2] [14] [i_2] [i_3] [i_4]));
                        arr_17 [i_2] [i_2] &= (((arr_11 [2] [i_1] [i_1 + 1]) - (arr_11 [i_2] [i_2] [i_1 + 2])));
                        var_20 = (((var_12 ? var_11 : var_12)));
                        var_21 = ((((((arr_12 [i_4]) ? var_4 : (arr_12 [i_1])))) ? (-6215 ^ 18368) : (arr_16 [2] [i_1] [i_2] [i_3] [i_1] [i_4])));
                    }
                }
            }
            arr_18 [i_1] [i_1] = (var_8 ? (arr_7 [i_1 + 1] [i_1]) : var_5);
            var_22 = var_10;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_23 += (((arr_15 [i_1 + 2] [i_1 + 1] [i_1]) | var_7));
            arr_22 [i_1] = (-(arr_8 [i_1] [i_5] [i_1]));
        }

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_27 [i_1 - 1] [i_1] [i_6] = ((!(~-16239)));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 16;i_8 += 1)
                {
                    {

                        for (int i_9 = 3; i_9 < 16;i_9 += 1)
                        {
                            var_24 = (min(var_24, (((var_7 ? (!var_6) : ((var_0 * (arr_7 [i_1] [i_1]))))))));
                            var_25 = (!var_12);
                            var_26 = var_14;
                        }
                        var_27 -= (arr_4 [i_1] [i_6]);
                        arr_36 [i_1] [i_1] [i_6] [i_7] [i_8] = (i_1 % 2 == 0) ? ((((arr_8 [i_1] [i_1 + 1] [i_8 + 1]) >> (((arr_34 [12] [i_6] [12] [i_6] [i_6]) - 1126))))) : ((((((arr_8 [i_1] [i_1 + 1] [i_8 + 1]) + 2147483647)) >> (((arr_34 [12] [i_6] [12] [i_6] [i_6]) - 1126)))));
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
        {
            arr_39 [i_1] [i_1] [1] = (((var_8 ? var_5 : var_1)) ^ (((var_5 ? (-32767 - 1) : (arr_19 [1] [i_1] [i_10])))));
            var_28 &= (!4136888358);

            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                arr_42 [i_1] [i_1] [i_1] = (((arr_37 [i_1] [i_10]) ? 32767 : (arr_37 [i_1] [i_1])));
                var_29 *= var_4;
                var_30 = (var_11 == 2790848606);
            }
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                arr_46 [16] &= var_10;

                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    var_31 = ((!((var_15 || (arr_43 [i_1] [i_10] [i_1])))));
                    arr_50 [16] [16] &= var_11;
                    arr_51 [i_10] [i_1] [i_1] [i_1] = (~var_5);
                }
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    var_32 = arr_52 [i_1] [14] [14] [i_14];
                    var_33 = (min(var_33, (arr_15 [12] [12] [i_12])));
                    var_34 = ((((var_13 ? var_12 : (arr_15 [i_1] [i_10] [i_12]))) | (-1 & var_7)));
                    var_35 = var_8;
                }
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    var_36 &= ((742537241 ^ (127 != var_4)));
                    arr_58 [i_1] [i_1] [i_1] [i_15] [i_1] &= (((arr_45 [i_1 + 1] [i_1 + 2] [9]) ^ 4294967295));
                }
                var_37 ^= ((((((arr_34 [5] [i_1] [i_10] [5] [i_12]) ? var_13 : var_10))) && (~var_6)));
                var_38 *= -1123123255;
                var_39 -= ((var_10 ? var_5 : (((arr_21 [i_1]) ? var_13 : -394413470))));
            }
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                var_40 = (!2443);
                var_41 *= 24566;

                for (int i_17 = 2; i_17 < 15;i_17 += 1)
                {
                    var_42 = (min(var_42, (((!(arr_28 [i_16] [i_1 + 2] [i_1 - 1] [i_1]))))));
                    var_43 = (var_5 << 2);
                    var_44 = ((((((arr_20 [i_16] [8]) ? (arr_13 [4] [i_10] [i_10] [i_16] [i_17] [0]) : var_13))) ? -3108 : ((-19633 ? 0 : 4294967295))));
                }
            }
            var_45 = (max(var_45, ((-512 ? 1792 : (var_5 != var_15)))));
        }
        for (int i_18 = 1; i_18 < 15;i_18 += 1) /* same iter space */
        {
            var_46 &= ((var_10 ? var_8 : -9958));
            var_47 = (min(var_47, (((var_7 ? (arr_37 [14] [i_18]) : -1978671027)))));
        }
    }
    /* LoopNest 2 */
    for (int i_19 = 3; i_19 < 9;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 10;i_20 += 1)
        {
            {

                for (int i_21 = 0; i_21 < 10;i_21 += 1)
                {
                    var_48 *= -1243815595;
                    arr_76 [3] [i_21] [2] = ((-(((!var_3) ? (!1243815594) : ((-(arr_7 [i_21] [i_20])))))));
                    arr_77 [i_19] [i_21] = (((!(arr_28 [i_21] [i_21] [i_20] [i_21]))) ? ((var_11 ? var_2 : (arr_28 [i_21] [i_19] [i_21] [i_21]))) : (((((arr_28 [i_21] [i_20] [i_21] [i_21]) > (arr_28 [i_21] [i_21] [i_19 + 1] [13]))))));
                }
                for (int i_22 = 0; i_22 < 10;i_22 += 1)
                {
                    var_49 = (min(var_49, (~-1779725595)));
                    /* LoopNest 2 */
                    for (int i_23 = 4; i_23 < 9;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 10;i_24 += 1)
                        {
                            {
                                var_50 = var_0;
                                arr_86 [i_19] [i_20] [i_20] [i_22] [4] [i_23] [i_24] &= min((arr_38 [i_19] [i_20] [i_19]), (((var_6 || (((-2147483647 - 1) || var_4))))));
                            }
                        }
                    }

                    for (int i_25 = 2; i_25 < 9;i_25 += 1)
                    {
                        var_51 = (max((((!(arr_69 [i_19] [i_20])))), var_5));
                        arr_89 [i_25] [i_20] = var_11;
                        var_52 = var_11;
                    }
                }
                for (int i_26 = 0; i_26 < 10;i_26 += 1)
                {
                    var_53 = (((max(2790848618, (arr_71 [i_19] [i_20] [i_26]))) ^ ((((arr_4 [i_19] [i_19]) ? (arr_81 [i_19] [i_26]) : (-32767 - 1))))));
                    arr_92 [i_19] = (max(var_3, (((~var_15) >> (-var_11 - 3319560112)))));
                    var_54 = (min(var_54, (((((!(arr_0 [i_20]))) ? ((((~var_0) > (arr_29 [i_19] [i_19] [i_20] [i_26])))) : ((-((-(arr_19 [i_26] [i_19] [i_19]))))))))));
                }
                var_55 = var_11;
                var_56 = arr_90 [i_19 - 2] [i_20];
            }
        }
    }
    var_57 = (~(var_3 ^ -var_12));
    #pragma endscop
}
