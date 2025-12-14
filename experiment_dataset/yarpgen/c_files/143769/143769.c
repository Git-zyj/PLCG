/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 -= var_1;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = ((((var_12 ? 2352767409 : var_2)) > var_5));
        arr_3 [i_0] = var_4;
        var_18 -= (((var_6 ? 0 : var_8)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_0 + 2] [1] [1] [5] = (~var_1);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_19 *= ((var_13 ? var_13 : (~var_6)));
                            arr_16 [i_1] [i_1] [11] [2] [i_1] [0] [i_1] = ((-94 ? (~var_7) : ((var_10 ? var_9 : var_8))));
                            var_20 = var_9;
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_21 *= (-var_3 != -1516272916329834713);
                            arr_19 [i_5] [i_1] [i_5] = var_8;
                            var_22 -= var_4;
                        }
                        for (int i_6 = 4; i_6 < 12;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1] [5] [i_3] [i_6] = var_11;
                            arr_25 [i_6] [i_3] [4] [1] [1] [7] = ((var_13 ? var_7 : var_3));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_28 [i_0 + 2] [i_0] [i_0 - 1] [9] [i_0 - 1] = var_11;
                            var_23 = (max(var_23, var_3));
                            arr_29 [i_0] [i_0] [i_0 + 1] [i_0 + 1] = 1670200267846657144;
                            arr_30 [i_2] = (((0 > var_7) ? var_4 : var_2));
                        }
                    }
                }
            }
            var_24 = (!var_14);

            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                var_25 = var_9;
                arr_33 [i_8] [i_0] = (-127 - 1);
                var_26 = var_9;
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_27 = (((((var_8 ? var_7 : var_0))) ? var_1 : (~var_13)));
                            var_28 ^= var_11;
                            arr_43 [i_10] [i_10] [i_9] [i_10] [i_10] [i_10] [i_10] = (!-52);
                        }
                    }
                }
                var_29 = (max(var_29, (127 / var_8)));
            }
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                arr_46 [i_0] |= var_2;
                arr_47 [2] [i_1] [i_0 + 1] = (!var_13);
                arr_48 [i_1] [i_1] = 211106232532992;
            }
        }
        for (int i_13 = 2; i_13 < 13;i_13 += 1) /* same iter space */
        {
            var_30 = ((!(((var_2 ? var_2 : var_8)))));

            for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
            {
                var_31 = -var_1;
                var_32 += ((!((!(var_9 * var_13)))));
                arr_55 [i_0] [i_0] [i_0] [i_14] = ((var_9 ? ((var_10 ? var_7 : (((3932160 ? var_0 : var_11))))) : ((((!(((var_5 ? 8408592193125006696 : var_0)))))))));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
            {

                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    var_33 = (var_6 < var_4);

                    for (int i_17 = 4; i_17 < 13;i_17 += 1)
                    {
                        var_34 = (min(var_34, (((1 ? (!var_6) : ((0 ? 133693440 : var_14)))))));
                        arr_63 [i_17] [i_17] [i_15] [0] [i_15] [i_15] = (~var_9);
                        var_35 = ((((var_6 ? 6651965704741449927 : var_13))) ? ((var_0 ? var_7 : var_10)) : ((var_2 ? 71590510 : var_12)));
                    }
                    for (int i_18 = 4; i_18 < 12;i_18 += 1)
                    {
                        arr_66 [i_15] [i_13 - 2] [12] [i_15] [i_18] = var_0;
                        var_36 += (((((var_3 ? 8408592193125006696 : var_7))) && (((var_5 ? var_2 : var_6)))));
                    }
                    for (int i_19 = 2; i_19 < 12;i_19 += 1)
                    {
                        arr_70 [i_0] [11] [i_15] [4] [11] = var_13;
                        arr_71 [i_15] [i_13] [i_15] [i_16] [i_16] [i_19] = var_8;
                        arr_72 [i_0] [i_15] [i_15] [i_15] [i_15] [i_16] [i_19 + 1] = -var_0;
                        var_37 = (~31534);
                    }
                    for (int i_20 = 0; i_20 < 14;i_20 += 1)
                    {
                        var_38 *= ((!var_9) == var_6);
                        var_39 = (var_12 - var_2);
                        var_40 = -var_2;
                    }
                    var_41 = (~22);
                    arr_76 [i_15] [12] [0] [i_15] = -8796093022207;
                }
                for (int i_21 = 4; i_21 < 13;i_21 += 1)
                {

                    for (int i_22 = 0; i_22 < 14;i_22 += 1)
                    {
                        var_42 += 1;
                        var_43 = (~var_13);
                        arr_81 [i_15] [10] [i_13] [13] [i_21] [i_22] = var_8;
                        var_44 = (((((var_4 ? var_2 : var_5))) ? 2876196617 : var_6));
                        arr_82 [i_0] [i_13] [i_15] [i_21] [i_15] = -var_12;
                    }
                    for (int i_23 = 4; i_23 < 13;i_23 += 1)
                    {
                        arr_85 [i_15] [i_15] [i_15] [i_21] = (!var_7);
                        var_45 = ((-(!var_10)));
                        var_46 -= ((-var_7 ? -var_13 : var_9));
                        var_47 = (~-0);
                        arr_86 [6] [i_0 + 1] [6] [i_15] [i_0 + 1] = (1 + var_4);
                    }
                    arr_87 [7] [i_13 - 2] [i_15] [11] = var_11;
                }
                arr_88 [i_15] [i_13] [i_15] = -var_1;
                var_48 = ((var_11 ? var_13 : var_12));
            }
            var_49 = (var_6 >= var_13);
        }
        for (int i_24 = 2; i_24 < 13;i_24 += 1) /* same iter space */
        {
            arr_91 [i_0 + 2] [i_0 + 2] = (~var_2);

            for (int i_25 = 0; i_25 < 14;i_25 += 1) /* same iter space */
            {
                arr_95 [i_0] [i_24 + 1] [i_25] [1] = ((((!(((var_0 ? var_7 : var_1)))))) == var_1);
                var_50 = ((((((var_12 ? var_7 : var_10)))) ? (~-var_2) : (((var_5 ? var_11 : var_10)))));
            }
            for (int i_26 = 0; i_26 < 14;i_26 += 1) /* same iter space */
            {
                var_51 = (((((var_11 ? var_2 : var_8))) ? ((23050 ? 0 : 65504)) : (~var_10)));
                var_52 = (max(var_52, ((-0 ? (var_7 * var_9) : (~var_13)))));
                var_53 -= ((!(((var_3 ? var_0 : var_3)))));
                var_54 = ((var_10 ? (!var_14) : (!var_0)));
            }
        }
        arr_98 [i_0] [3] |= ((~(var_12 * var_3)));
    }
    var_55 = ((!((((~var_3) ? ((var_8 ? 432345564227567616 : 18446744073709551613)) : -var_11)))));
    #pragma endscop
}
