/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((102 / (~127))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((((((((47 ? 13045 : var_8))) ? (arr_1 [i_0] [i_0]) : (!1152921504606846975)))) ? (((min(21, 4221894563)) + 511)) : ((min((arr_2 [i_0]), 5473182773084733686))))))));
        var_20 = (max(var_20, ((max((max((min(-2147483640, (arr_1 [i_0] [i_0]))), ((max(-9, 477776498))))), ((((arr_0 [i_0] [i_0]) ? (~var_16) : (max(var_11, var_11))))))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_21 |= (((((-(arr_2 [i_1])))) ? ((var_8 ? (arr_2 [i_1]) : var_13)) : (((!(arr_2 [i_1]))))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_22 = ((((((arr_2 [i_1]) ? ((min(var_1, (arr_3 [i_2])))) : -var_11))) ? (((var_9 ? var_11 : ((max((arr_2 [i_1]), var_14)))))) : -var_5));
            arr_8 [i_2] = var_10;
            arr_9 [11] [i_2] [i_2] = (~(arr_1 [i_2] [i_2]));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_23 = (arr_11 [i_1] [i_1] [i_3]);
            var_24 = (min((~var_5), ((((arr_2 [i_1]) ? (arr_3 [i_3]) : (min(19797, 4221894553)))))));
            var_25 = ((((var_17 ? var_14 : var_16)) == ((min((arr_10 [i_3] [i_3]), (arr_10 [i_3] [i_3]))))));
        }
        var_26 ^= (arr_0 [i_1] [i_1]);

        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            arr_16 [i_1] [i_4] = ((arr_15 [i_1]) ? (((136 ? ((((arr_5 [i_1] [i_4 - 1]) >= var_5))) : (!var_13)))) : (min((arr_13 [i_4 + 2] [i_4 + 1] [i_4 - 1]), (arr_13 [i_4 + 2] [i_4 + 1] [i_4 - 1]))));
            arr_17 [i_1] [i_4] = ((((arr_3 [i_1]) ? (min((arr_5 [i_1] [i_1]), var_8)) : var_7)));
            var_27 = max(var_1, (((!((min(-72, (arr_6 [i_4] [i_4] [i_4 + 1]))))))));
            arr_18 [i_1] [i_1] [i_1] |= (min((((arr_15 [i_4 - 2]) / (arr_10 [i_4] [i_4 + 2]))), ((((((arr_15 [8]) ? (arr_2 [i_1]) : var_3))) ? ((var_2 ? var_2 : (arr_0 [i_4 + 2] [10]))) : (~var_2)))));
            var_28 ^= ((((((arr_4 [i_4 + 1] [i_4 + 1]) ? (arr_5 [i_4 + 2] [i_4]) : (arr_5 [i_4 + 2] [i_4])))) ? ((-(arr_4 [i_4 - 1] [i_4 - 1]))) : (!23)));
        }
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            arr_21 [i_1] = (max(-var_17, (max((arr_5 [i_5] [i_5 + 2]), (!var_5)))));
            arr_22 [i_1] = (((arr_20 [i_1] [i_1]) ? (max((arr_1 [i_5 + 2] [i_5 + 2]), (arr_1 [i_5 - 1] [i_5 + 2]))) : (!2036005535)));
        }
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        arr_25 [8] [i_6] = ((-(arr_3 [i_6])));

        for (int i_7 = 4; i_7 < 13;i_7 += 1)
        {
            var_29 = (min(var_29, (((~((-1639574335 ? (arr_24 [i_7 - 1]) : 1990299557)))))));
            var_30 = (max(var_30, (((max(1, 89782298))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_32 [i_8] = ((-(arr_13 [i_6] [i_8] [i_8])));
            arr_33 [i_8] = (((arr_28 [i_6] [i_6] [i_6]) ? (arr_29 [i_8]) : ((477776478 ? (arr_31 [i_8]) : var_0))));
        }

        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_38 [11] = (arr_28 [i_6] [i_9] [i_9]);
            var_31 = (max(var_31, 14));
            var_32 = (max(var_32, ((((max(73072713, 4294967294)) == ((min((arr_29 [i_6]), (~132)))))))));
        }
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 15;i_10 += 1)
    {
        arr_41 [i_10 + 1] = (((arr_40 [i_10 - 2]) ? (((arr_40 [i_10]) ? 27561 : (arr_40 [i_10]))) : (arr_40 [i_10 - 2])));

        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            arr_45 [i_10] [i_10 + 2] [i_10] = ((-(arr_44 [i_10 + 2] [i_10] [i_10 - 2])));
            arr_46 [i_10] = ((-var_16 ? (arr_42 [i_10]) : ((31 ? (arr_39 [i_10 - 1]) : var_10))));
            var_33 = ((5 ? 8388607 : 15027));
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            var_34 = (min(var_34, ((((arr_43 [i_10] [i_10]) && (((-5123031820183406628 ? -1756062962 : 1073741823))))))));
            var_35 += (arr_49 [i_10 + 2] [i_10 + 3]);
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        {
                            arr_57 [i_10] [7] [i_13 + 2] [i_14] [i_14] [i_14] |= (((arr_53 [i_10] [i_13 + 1] [i_14] [i_10 + 1] [i_15]) ? (arr_53 [i_10 + 1] [i_13 + 1] [i_13] [i_10 + 1] [i_15]) : (arr_53 [i_10] [i_13 + 1] [i_13] [i_10 + 1] [i_15])));
                            arr_58 [i_10 - 1] [i_10 - 1] [i_10] &= (arr_52 [15] [i_10 + 3] [i_15] [i_15]);
                            var_36 = (((((var_0 ? var_11 : 909426263))) ? var_17 : 14));
                        }
                    }
                }
            }
        }
        var_37 = (arr_44 [i_10 + 2] [i_10 - 2] [i_10]);
    }
    var_38 = (min((((((min(var_13, var_13))) || (!var_14)))), (((((-905058025 ? 150 : 58896))) ? (var_11 << var_2) : ((var_6 ? var_12 : 244))))));

    for (int i_16 = 4; i_16 < 13;i_16 += 1)
    {
        var_39 = 4221894569;
        arr_61 [i_16] &= (!909426250);
    }
    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        arr_65 [i_17] [i_17] = ((((max((arr_54 [i_17] [i_17]), var_14))) ? ((((max(var_14, (arr_51 [i_17] [i_17] [i_17] [1])))) + 3727597329012197460)) : (((var_6 + 2147483647) << (var_11 - 471406408)))));
        var_40 |= 110;
    }
    #pragma endscop
}
