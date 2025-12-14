/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [2] = ((688374016 ? 13041929910272024989 : 64));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_7 [i_1] [i_1] [i_1] [i_1] = (arr_5 [i_0] [i_1]);
                arr_8 [i_0] [i_1] [i_1] = ((+(max((arr_0 [8] [i_0]), ((var_10 ? var_16 : (arr_4 [i_0] [i_0] [i_2])))))));
            }
            for (int i_3 = 4; i_3 < 12;i_3 += 1)
            {
                arr_12 [i_0 - 1] [i_1] [i_3] [i_3] = var_3;
                var_17 = (min(var_15, (((((var_2 ? (arr_6 [i_0] [i_0]) : (arr_4 [i_0] [i_1] [3])))) ? var_15 : (((!(arr_4 [i_3] [i_3] [i_3]))))))));
            }
            arr_13 [i_1] = (((arr_1 [i_0] [i_0]) ? -6356908022961265559 : (((~var_3) ? var_14 : (min((arr_5 [i_0] [i_0]), var_2))))));
            var_18 ^= (arr_11 [i_0] [10]);
            arr_14 [i_1] [i_1] [i_1] = (arr_3 [i_0] [i_0] [i_1]);
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_17 [4] [i_4] = (((arr_1 [i_0 + 2] [i_4]) ? (arr_16 [i_0 - 2] [i_0 + 2] [i_0 - 1]) : ((~(min(var_8, var_12))))));
            arr_18 [i_0] [i_4] = ((((!(arr_3 [5] [i_0 - 1] [i_0 + 2]))) ? (((~(arr_15 [i_0 + 2] [i_0 - 1])))) : ((var_2 ? (((min((arr_10 [i_4]), var_6)))) : ((var_5 ? var_10 : var_12))))));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_21 [i_5] = (var_13 != var_5);
            var_19 = (min(var_16, ((((arr_3 [i_0] [i_5] [i_0]) ? var_10 : (arr_20 [i_0] [i_5]))))));
            arr_22 [i_5] [i_5] = (((((-(var_14 % var_8)))) ? (arr_20 [i_5] [i_0]) : (arr_19 [3])));
            var_20 += min(((!(arr_20 [i_0] [i_0 - 1]))), 0);
        }
        var_21 = var_12;
        arr_23 [i_0 - 1] = var_4;
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = var_12;
        arr_27 [i_6] = arr_5 [i_6] [i_6 + 2];
        arr_28 [i_6] [10] &= (-(arr_3 [i_6 + 1] [i_6 + 1] [i_6 - 3]));
    }
    for (int i_7 = 3; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((0 ? -56 : -10)))));
        var_23 = ((!((((arr_0 [i_7 - 2] [i_7 + 1]) ? var_10 : (arr_0 [i_7 - 1] [i_7 + 1]))))));
        arr_31 [i_7] [i_7] = (arr_4 [i_7] [i_7] [i_7]);
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {

        for (int i_9 = 3; i_9 < 10;i_9 += 1)
        {
            var_24 = (min(var_24, (((0 ? ((~(arr_35 [i_8] [i_9 - 1]))) : (((!(arr_35 [i_8] [i_9 - 3])))))))));
            var_25 = (arr_33 [i_8] [i_9 - 3]);
            arr_38 [i_8] [i_9] = -688374016;
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
        {
            arr_41 [4] = ((min(var_11, (min(var_6, (arr_3 [i_8] [i_10] [i_10]))))));
            var_26 ^= (((max(var_14, 940550820113660677)) & -64));

            /* vectorizable */
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                var_27 = (min(var_27, ((((arr_42 [i_11] [i_11 - 1] [i_11 - 1] [i_8]) ? (arr_42 [i_11 - 1] [i_11 - 1] [i_11 - 1] [7]) : var_10)))));
                arr_45 [i_10] = -64;
                var_28 = ((((~(arr_40 [i_8])))) ? var_14 : var_12);
                var_29 = (((((0 ? 64 : 2))) ? (arr_40 [10]) : var_4));
                var_30 ^= (((arr_20 [i_10] [i_11]) ? (arr_9 [i_8] [i_11 - 1]) : (arr_16 [i_8] [i_11] [i_11 - 1])));
            }
            for (int i_12 = 2; i_12 < 7;i_12 += 1)
            {
                var_31 = (min(var_31, (((((max(var_16, (arr_20 [i_8] [i_8])))) ? (min((((arr_15 [i_8] [i_8]) ? var_1 : var_8)), (arr_46 [i_12 + 4] [i_12 - 2] [i_12 + 4]))) : var_9)))));
                arr_50 [i_10] [i_10] [i_10] [i_12] = -8300442057175114462;
                arr_51 [i_8] [i_8] [i_8] [i_8] = ((~((((var_12 ? (arr_9 [i_12] [i_8]) : (arr_33 [i_12] [5])))))));
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                var_32 += (-((~((min(var_1, 24938))))));
                arr_54 [i_13] = (((((-(arr_30 [i_13])))) ? (arr_30 [i_10]) : (min(940550820113660677, -24962))));
                arr_55 [i_13] [i_13] [5] [i_13] = ((var_10 ? (min((arr_52 [i_8]), var_0)) : (arr_39 [i_8])));
                var_33 = ((~((var_14 ? var_11 : var_16))));
            }
        }
        for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                arr_61 [7] [i_14] [i_8] = var_3;
                var_34 ^= var_12;
            }
            for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
            {
                arr_64 [i_8] [i_8] [i_16] = var_8;
                arr_65 [i_16] [i_14] [i_14] [i_8] = (((-2147483647 - 1) ? -1478382928 : -1570374246));
                var_35 = (arr_59 [i_8]);
                var_36 ^= 10176;
                var_37 = ((var_15 ? (min(var_2, ((~(arr_44 [1] [i_14]))))) : (~1)));
            }
            for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
            {
                arr_68 [i_14] [i_8] = (min((((!(arr_44 [i_8] [i_17])))), var_7));

                for (int i_18 = 2; i_18 < 9;i_18 += 1)
                {
                    arr_71 [i_18] [i_14] [i_17] [i_18] = var_13;
                    arr_72 [i_18] [i_17] [i_14] [i_8] = (arr_57 [i_18 + 1] [i_18] [1]);
                    var_38 = (arr_24 [i_18]);
                    var_39 = (max(var_39, (((!((((arr_48 [i_8] [i_14] [i_17] [i_18 - 1]) ? (arr_48 [i_8] [i_14] [i_17] [i_18 - 1]) : (arr_48 [i_8] [i_18 - 2] [i_14] [i_18 + 2])))))))));
                    arr_73 [i_14] [i_14] [i_14] [1] [i_14] [1] = (arr_34 [i_18]);
                }
            }

            for (int i_19 = 0; i_19 < 11;i_19 += 1)
            {
                arr_76 [i_8] &= (min((~1570374245), -var_16));
                arr_77 [i_8] = var_3;
            }
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                arr_81 [i_8] [i_14] [i_20] [i_14] = -677868944;
                var_40 = min(var_2, var_11);
                var_41 = (min(var_41, ((min((min((((-(arr_74 [i_8] [i_14] [i_20])))), var_2)), (arr_1 [i_8] [i_14]))))));
                arr_82 [i_8] = ((200 ? -383519092 : 8445197319367420108));
            }
            var_42 ^= ((((arr_59 [i_8]) * (arr_43 [i_8] [i_14] [i_8] [i_8]))));
            arr_83 [0] [i_14] = (~var_7);
            var_43 = ((+(((arr_62 [i_8] [4] [i_8]) ? 248 : var_5))));
        }
        for (int i_21 = 1; i_21 < 9;i_21 += 1)
        {
            arr_86 [i_21] = ((!(((0 ? 253 : 940550820113660677)))));
            var_44 = (min(var_44, var_3));
            arr_87 [i_21] = (!((max(-var_8, (arr_24 [i_8])))));
        }
        arr_88 [i_8] = var_12;
        arr_89 [2] [i_8] = (~var_14);
        arr_90 [i_8] &= (max((((!((min(var_6, var_15)))))), (((~var_15) ? (max(var_2, (arr_10 [i_8]))) : ((((arr_66 [i_8] [i_8] [i_8]) ? var_6 : var_11)))))));
    }
    var_45 = ((var_16 ? ((21249 ? 8445197319367420123 : 1)) : var_10));
    #pragma endscop
}
