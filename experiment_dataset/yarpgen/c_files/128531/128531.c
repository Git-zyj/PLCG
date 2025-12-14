/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_3] [i_1] [i_1] [i_0 - 1] = (max((arr_3 [i_1 - 1] [i_3]), (((~(!var_9))))));
                        var_13 = ((max(((var_5 ? var_6 : (arr_1 [i_2]))), 32245)) << ((((((((arr_1 [i_3]) ? var_11 : 49872))) ? var_6 : (((var_4 ? (arr_6 [i_1] [i_1] [i_3]) : 29624))))) - 47783)));
                        var_14 = (max(49872, 15664));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_4] [i_1] [i_1] = var_10;

                        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_0 - 2] [i_0] [i_1] [i_0] = ((!(arr_18 [i_1])));
                            var_15 = (min(var_15, (arr_13 [i_0] [i_0 - 1] [i_0] [i_0])));
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_1] = ((var_2 ? (arr_0 [i_4]) : (arr_0 [i_0 - 2])));
                            var_16 += ((18325 && (arr_5 [i_2] [i_2] [i_6 + 1])));
                            var_17 = (max(var_17, (arr_17 [i_0] [i_1] [i_1] [i_2] [i_1] [i_6] [i_6 - 1])));
                            var_18 = var_10;
                        }
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_19 = (min(var_19, (arr_4 [i_1 - 1] [i_1 - 1] [i_0 - 2])));
                        var_20 = ((((((((-(arr_7 [i_0])))) % var_3))) ? ((((arr_2 [i_2]) && (arr_1 [i_0])))) : (arr_3 [i_1] [i_7])));
                    }

                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        var_21 = (max(var_21, ((((((arr_26 [i_0] [i_1] [i_2] [i_1]) / ((max((arr_23 [i_0]), (arr_7 [i_2])))))) * (arr_12 [i_2]))))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_22 = var_3;
                            var_23 = (arr_2 [i_8]);
                        }
                        for (int i_10 = 4; i_10 < 13;i_10 += 1)
                        {
                            var_24 = var_1;
                            var_25 = (arr_31 [i_0 - 1] [i_1] [i_2] [i_8 + 1]);
                        }
                        var_26 = (max(((-1 ? 0 : ((6490 ? 53747 : (arr_7 [i_8]))))), 0));
                        arr_32 [i_1] [i_1] [i_1] = (((((((-13763 ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2]) : var_8))) || ((max((arr_6 [i_0] [i_1 - 1] [i_0]), 49869))))) ? (arr_12 [i_1]) : -4));

                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            var_27 = (min(var_27, ((((((((-21 ? 41 : 48956))) || (arr_1 [i_1]))) ? ((var_2 + (arr_25 [i_2] [i_2]))) : ((((((var_10 ? (arr_5 [i_2] [i_1] [i_1]) : var_10))) && (arr_20 [i_0 - 2] [i_0 - 2] [i_2])))))))));
                            arr_35 [i_0] [i_2] [i_2] [i_1] = (((max((arr_31 [i_0] [i_0] [i_2] [i_8 - 1]), (arr_31 [i_11 - 1] [i_8 - 2] [i_2] [i_0 + 1]))) ? var_11 : ((((arr_12 [i_1]) ? (arr_31 [i_0] [i_1] [i_2] [i_8 + 1]) : (arr_12 [i_1]))))));
                            var_28 = (arr_6 [i_11 + 1] [i_8 - 2] [i_0]);
                            var_29 = (max(var_29, (((((max(-7, 0))) ? (max(((max((arr_24 [i_2] [i_1] [i_1] [i_8]), var_5))), 7)) : ((((((max(-9228, (arr_30 [i_0 + 1] [1] [1] [2] [i_0 + 1])))) > 49869)))))))));
                        }
                        for (int i_12 = 0; i_12 < 0;i_12 += 1)
                        {
                            var_30 = (arr_12 [i_1]);
                            var_31 -= ((max(2147483634, -81)));
                            var_32 = ((!(arr_25 [i_1] [i_2])));
                        }
                    }
                    for (int i_13 = 4; i_13 < 12;i_13 += 1)
                    {

                        for (int i_14 = 3; i_14 < 12;i_14 += 1)
                        {
                            arr_44 [i_0] [i_1] [i_2] [i_2] [i_1] = arr_26 [i_0] [i_0] [i_13] [3];
                            var_33 = (min(var_33, var_12));
                            var_34 = (min(var_34, (arr_39 [4] [i_1])));
                            var_35 ^= (((arr_37 [i_13 + 2] [i_13 + 1] [i_13 - 4] [i_13 + 3] [i_13 + 2] [i_13 + 2] [i_13 + 3]) ? ((max((arr_9 [i_0] [i_1] [i_2] [i_13 - 2]), (arr_14 [i_13])))) : (arr_24 [i_13] [i_14 + 1] [i_14] [i_14])));
                        }
                        var_36 = (max(var_36, (((((arr_2 [i_1 + 1]) ? (arr_16 [i_13 + 3] [i_13 - 1] [i_13] [i_13]) : (arr_38 [i_13 - 1] [i_13 - 2] [i_13 + 3] [i_2])))))));
                        arr_45 [i_1] [i_2] [i_1] &= var_10;
                        var_37 = (max(((((((arr_7 [i_0 + 1]) ? var_7 : (arr_16 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])))) ? var_1 : ((max(-1, 67))))), var_8));
                        var_38 = (max(var_38, (arr_6 [i_1] [i_2] [i_13])));
                    }
                    var_39 = (((arr_25 [i_1] [i_1 + 1]) ? ((-(~-6))) : 0));
                    var_40 = (0 == 36);
                }
            }
        }
    }
    var_41 &= var_9;

    for (int i_15 = 1; i_15 < 17;i_15 += 1) /* same iter space */
    {
        var_42 = (min(var_42, 127));

        /* vectorizable */
        for (int i_16 = 4; i_16 < 20;i_16 += 1)
        {
            arr_50 [i_15] [i_15] = (((((arr_49 [i_15] [i_15]) ? -32740 : (arr_49 [i_15] [i_15])))) && (((arr_47 [i_16]) == 65533)));
            arr_51 [10] [i_16 - 3] &= (arr_47 [i_15 + 3]);
            var_43 = (max(var_43, (arr_48 [i_15] [i_15 + 2] [i_16])));
        }
        for (int i_17 = 3; i_17 < 19;i_17 += 1)
        {
            var_44 = (max(var_8, (var_3 < var_10)));
            var_45 = (arr_54 [i_15]);
        }
        /* vectorizable */
        for (int i_18 = 2; i_18 < 19;i_18 += 1)
        {
            var_46 = (arr_52 [i_15] [i_15]);

            for (int i_19 = 3; i_19 < 18;i_19 += 1)
            {
                var_47 = (arr_59 [i_15] [i_15 + 2] [i_15 - 1] [i_15 - 1]);
                var_48 = var_10;
                var_49 ^= (!1);
                var_50 ^= var_1;
            }
            var_51 = (!(9 && -15));
            var_52 |= var_12;
            var_53 ^= (31970 + 30735);
        }
        for (int i_20 = 2; i_20 < 20;i_20 += 1)
        {
            var_54 = (((((var_11 ? 10 : -48956))) ? var_0 : ((-((var_1 ? (arr_61 [i_15] [i_20]) : -4178049442458337842))))));
            var_55 = (((~var_10) ? ((max(-11071, var_8))) : (32751 <= -1121780483)));
        }
        var_56 = (((arr_54 [i_15]) ? ((((((5108 ? (arr_47 [i_15 + 1]) : (arr_61 [i_15] [i_15])))) ? ((max(var_2, (arr_63 [i_15] [i_15])))) : (arr_46 [i_15 + 2] [i_15])))) : (max(((max(var_8, -5119))), var_9))));
        arr_65 [i_15] = (29280 == 115);
        var_57 = ((((max(((var_1 ? (arr_63 [i_15 + 1] [i_15 + 4]) : var_8)), 2851221832420872394))) ? var_1 : ((((arr_54 [i_15 - 1]) ? ((var_5 ? var_5 : (arr_49 [i_15] [i_15]))) : (arr_52 [i_15 + 1] [i_15]))))));
    }
    for (int i_21 = 1; i_21 < 17;i_21 += 1) /* same iter space */
    {
        arr_69 [i_21] [i_21] = (arr_47 [i_21]);
        var_58 &= (max(-11082, 1));
        var_59 = ((var_1 ? -var_6 : (((arr_61 [i_21] [i_21]) ? (arr_62 [i_21 + 4] [i_21 + 3] [i_21]) : (((-2147483647 - 1) ? (-9223372036854775807 - 1) : 18914))))));
        var_60 = (arr_58 [i_21] [i_21]);
    }
    #pragma endscop
}
