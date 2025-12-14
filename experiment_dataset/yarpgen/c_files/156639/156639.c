/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((var_8 ? (((-((5 ? 1881701384 : 4294967282))))) : (max((min(var_11, var_0)), ((var_11 ? var_2 : var_8))))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_14 += ((var_6 >> (var_11 - 11486026645143814704)));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_2] = var_6;
                var_15 = arr_5 [i_0] [i_1] [i_2];

                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    var_16 ^= -var_11;

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_17 = ((arr_3 [i_2 + 1] [i_2 - 1] [i_2]) ? var_10 : (arr_6 [i_0] [i_1] [i_1]));
                        arr_14 [i_0 - 1] [i_1] [i_2] [i_0] [i_3] [i_4] = ((var_3 == (arr_9 [i_0])));
                        var_18 = (min(var_18, var_8));
                        arr_15 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_0] = ((var_5 & (arr_2 [i_0 - 2])));
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_19 = var_10;
                        var_20 = ((~(((var_4 < (arr_7 [i_3] [i_3]))))));
                        arr_18 [i_0] [i_1] [i_2 + 2] [i_3 + 2] [i_0] = (((arr_7 [i_3] [i_5 - 1]) ? ((var_2 ? (arr_3 [i_2] [i_3 - 1] [i_5]) : var_10)) : var_2));
                        arr_19 [i_0] [i_0] [i_2] [i_1] [i_1] [i_0] [i_0] = (arr_4 [i_0 - 1] [i_0]);
                    }
                    for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_21 = (min(var_21, var_10));
                        var_22 = 756587349193946312;
                        arr_22 [i_0] [i_1] [i_2] [i_0] [i_6] = arr_7 [i_0] [i_0 - 3];
                        var_23 = (min(var_23, var_7));
                    }
                    for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        var_24 = ((((((arr_0 [i_0]) ? var_4 : (arr_21 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (var_8 - var_1) : var_10));
                        var_25 = ((var_3 | var_10) ? (var_1 ^ var_3) : 4294967291);
                        var_26 |= ((4294967286 ? ((var_11 ? var_6 : var_10)) : ((1099511496704 ? var_7 : (arr_17 [i_0] [i_1] [i_2] [8] [i_7])))));
                    }
                    arr_26 [i_0] [i_1] [i_3 + 1] = ((18446744073709551615 + ((var_12 ? 1 : var_12))));
                }
                for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    var_27 = (min(var_27, ((var_10 ? (arr_3 [i_0 - 1] [i_0 + 2] [i_0 - 3]) : (arr_6 [0] [i_2 - 1] [i_8 - 1])))));
                    arr_30 [i_0] = var_6;
                    arr_31 [i_0] [i_2] [i_1] [i_0] = (((arr_4 [i_8 - 2] [i_0 - 2]) < (arr_4 [i_8 - 1] [i_0 - 2])));
                }
                for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_28 = (var_10 / var_0);
                    arr_35 [i_0 - 1] [i_1] [i_2 + 2] [i_0] = ((-((4999734866321601558 ? (arr_2 [i_9]) : (arr_25 [i_9] [i_2] [i_1] [i_0] [i_0])))));
                }
                for (int i_10 = 2; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    arr_39 [i_0] [i_1] [i_2] [i_10 - 1] = ((var_5 ^ var_8) - (var_3 == var_6));
                    var_29 = (min(var_29, ((-1 ? (((arr_3 [i_0] [i_0] [i_10]) - var_11)) : (!var_8)))));

                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        var_30 = ((8110783584646222020 >> (4294967262 - 4294967209)));
                        arr_42 [i_0 - 3] [i_1] [i_2] [i_0] [i_11] [i_2] = ((5894834940623792494 ? 1 : 1));
                        var_31 = ((var_8 >> (var_8 - 3019963829402758826)));
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        var_32 = arr_43 [i_0] [i_2] [i_0];
                        var_33 = ((arr_32 [i_10 - 2]) ? (arr_36 [i_0] [i_0] [i_0 - 1] [i_0]) : ((var_6 ? var_11 : var_10)));
                    }
                    var_34 = (!7535480590393801649);
                }
            }
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 0;i_14 += 1)
                {
                    arr_52 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] = (arr_44 [i_0] [i_1] [i_13] [i_13] [i_14 + 1]);
                    arr_53 [i_0] [i_13] &= var_9;

                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_35 = ((arr_33 [i_1] [i_0] [i_14 + 1] [i_15]) ? var_7 : ((~(arr_36 [i_0] [i_0] [i_13] [i_14]))));
                        arr_56 [i_0] [i_14] = var_1;
                    }
                    arr_57 [i_13] [i_1] [i_13] [i_14] [i_0 + 2] [i_1] &= 4294967280;
                    arr_58 [i_0] = (((var_4 * 18446744073709551591) + ((-5412632433603095200 ? var_0 : var_3))));
                }
                var_36 = (arr_49 [i_0] [i_1] [i_1] [i_13]);
                var_37 = (max(var_37, (((((10911263483315749992 ? (arr_5 [i_13] [i_1] [i_0]) : 503316480)) | var_11)))));
            }
            var_38 = var_8;

            for (int i_16 = 4; i_16 < 21;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 0;i_17 += 1)
                {
                    var_39 = (max(var_39, (((arr_45 [i_16] [i_16] [i_16 - 2]) ? var_12 : (((var_6 ? var_7 : var_2)))))));
                    var_40 ^= (var_0 ? ((var_8 ? 1 : var_12)) : var_11);
                    arr_64 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0] = (arr_0 [i_17 + 1]);
                }
                for (int i_18 = 1; i_18 < 1;i_18 += 1) /* same iter space */
                {
                    var_41 = var_10;
                    arr_67 [i_0] [i_1] [i_16 - 1] [i_18 - 1] = (((~433758316) || var_0));
                    var_42 *= (arr_50 [i_16 - 2] [i_0] [i_16] [i_18]);
                }
                for (int i_19 = 1; i_19 < 1;i_19 += 1) /* same iter space */
                {
                    var_43 = arr_41 [i_19] [i_19 - 1] [i_19 - 1] [i_19];
                    var_44 = var_5;
                }
                for (int i_20 = 2; i_20 < 18;i_20 += 1)
                {
                    var_45 -= ((1 ? 4294967279 : 1));

                    for (int i_21 = 0; i_21 < 22;i_21 += 1)
                    {
                        var_46 = (~1);
                        arr_75 [i_1] [i_21] [i_0] [i_20] [i_21] = ((var_0 < (((1 ? 4294967295 : 1)))));
                    }
                    for (int i_22 = 1; i_22 < 21;i_22 += 1)
                    {
                        var_47 = var_9;
                        var_48 = ((arr_32 [i_0]) ? ((15 >> (884586509277148416 - 884586509277148402))) : var_9);
                        var_49 += (arr_74 [i_0] [i_20 - 2] [i_16] [i_16] [i_22 - 1] [i_0] [i_22 - 1]);
                    }
                }
                arr_79 [i_16 + 1] [i_0] [i_0] [i_0] = 8110783584646222027;
                var_50 = (var_9 < var_0);
            }
            /* LoopNest 2 */
            for (int i_23 = 1; i_23 < 21;i_23 += 1)
            {
                for (int i_24 = 3; i_24 < 19;i_24 += 1)
                {
                    {

                        for (int i_25 = 4; i_25 < 20;i_25 += 1) /* same iter space */
                        {
                            var_51 = var_12;
                            var_52 = -var_7;
                        }
                        for (int i_26 = 4; i_26 < 20;i_26 += 1) /* same iter space */
                        {
                            var_53 = (max(var_53, ((var_0 ? ((1 ? 14 : 8110783584646221996)) : var_10))));
                            arr_90 [i_0] [i_1] [i_23 - 1] [i_24] [i_26 + 1] = (((((var_1 ? var_2 : (arr_13 [i_0] [i_0])))) ? (884586509277148392 * var_3) : var_8));
                            var_54 = (((arr_24 [i_0 + 2] [i_1] [i_23] [i_24] [i_26] [i_24]) ? (!13) : (~var_2)));
                            var_55 = ((var_2 >> ((((arr_9 [i_0]) != var_6)))));
                        }
                        var_56 = ((!((((arr_85 [i_0] [i_0] [i_23] [i_24] [i_24] [i_23] [i_1]) ? var_5 : (arr_55 [i_0] [i_0] [i_23] [i_24]))))));
                        arr_91 [i_0] [i_1] [i_1] [i_0] [i_24] [i_0] = 1953126207403492737;
                        var_57 = (var_11 | var_9);
                        var_58 = ((+(((arr_9 [i_0]) ? var_6 : var_4))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 22;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 22;i_28 += 1)
            {
                for (int i_29 = 3; i_29 < 21;i_29 += 1)
                {
                    {

                        for (int i_30 = 0; i_30 < 0;i_30 += 1) /* same iter space */
                        {
                            var_59 = (((((var_9 * (arr_27 [i_0] [i_27] [i_27] [i_29] [i_0] [i_30])))) ? var_3 : (296947812 - var_10)));
                            var_60 = ((((var_6 ? var_7 : var_9)) != (~var_6)));
                            arr_102 [i_0] [i_0] [i_30] = (((arr_71 [i_0] [i_0] [i_27] [i_30 + 1] [i_30]) <= (arr_17 [i_0 + 2] [i_27] [i_27] [i_0] [i_30])));
                            arr_103 [i_0] [i_28] [i_28] [i_28] = (!var_5);
                            var_61 ^= ((var_2 ? var_5 : var_1));
                        }
                        for (int i_31 = 0; i_31 < 0;i_31 += 1) /* same iter space */
                        {
                            arr_106 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] = (((1744683085719917990 * var_1) ? ((((!(arr_0 [i_0 - 2]))))) : (arr_66 [i_0 - 3] [i_27] [i_0] [i_29 - 2] [i_31 + 1])));
                            var_62 = (((17 ? 1 : 2477765110)) != (arr_29 [i_0 - 1] [i_0] [i_29 - 2] [i_31 + 1]));
                        }
                        arr_107 [i_0] [i_0] [i_28] [i_29] [i_27] = (((arr_61 [i_29 - 1] [i_27] [i_0 - 3] [i_29]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 3])));
                    }
                }
            }
        }
    }
    for (int i_32 = 0; i_32 < 21;i_32 += 1)
    {
        arr_111 [i_32] = var_11;
        arr_112 [i_32] [i_32] = (((arr_81 [i_32]) ? var_7 : ((var_1 ? var_12 : (var_6 < var_8)))));
    }
    var_63 = (var_3 ? 1 : 4294967288);
    #pragma endscop
}
