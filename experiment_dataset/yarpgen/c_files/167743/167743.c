/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = (((16907804864232296534 ? var_10 : var_9)));
            arr_6 [i_1] [i_1] = (~var_8);
        }
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                var_13 = ((((((min(var_4, var_3))) ? -14231 : -27))) ? ((max(var_6, ((var_7 ? var_5 : -733317348))))) : ((((var_12 ? var_7 : 33776997205278720)) - var_11)));
                arr_12 [i_0] [i_0] = (min(((14 ? (!var_8) : var_7)), (((((max(var_5, var_5))) ? var_12 : (-733317348 % var_0))))));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 20;i_5 += 1)
                    {
                        arr_19 [i_0] [16] [i_3] [i_3] [i_5] = var_2;
                        arr_20 [i_0] [i_2] [i_3] [i_3 - 2] [i_4] [i_5] = ((!(!-14231)));
                        arr_21 [i_0] [i_2] [i_3] [i_0] [i_5 - 3] = ((var_6 ? -733317353 : var_2));
                        var_14 = (((((-733317348 ? 14251 : 17922))) ? 26154 : ((var_5 ? var_7 : var_10))));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_3] [i_0] [i_3] [i_2 - 1] [i_0] = (((((var_2 ? var_8 : 70368744177663))) ? ((~(var_6 - 0))) : var_8));
                        arr_26 [i_0] [i_2] [i_3] [3] [i_0] = (max(var_4, (((min(var_2, var_2))))));
                        arr_27 [i_0] [i_0] [13] = (!var_2);
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [19] [10] [i_4] [i_7] [i_4] = ((~((~((-733317348 ? 2147483633 : 9223372036854775807))))));
                        var_15 = var_4;
                    }
                    arr_31 [i_4] [i_3 + 3] [i_0] = 4294967287;
                }

                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_38 [i_0] [i_2] [i_3] = (~var_11);
                        arr_39 [i_0] [i_0] [i_3] [i_3] [4] [i_9] = var_3;
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        var_16 = ((+(min((~var_2), ((var_5 ? var_9 : var_12))))));
                        arr_43 [i_0] [i_0] [i_2 - 1] [i_0] [i_8] [i_0] = ((32767 < (2 - var_9)));
                        arr_44 [i_0] [i_2] [i_0] = (var_5 + var_11);
                        var_17 = (((((var_12 ? -32767 : var_1) * ((4294967286 ? var_8 : 14))))));
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        var_18 = (min((((~(var_0 ^ -31604)))), ((-var_12 ? (var_2 - var_2) : ((var_2 ? var_3 : var_1))))));
                        arr_48 [i_0] [12] [i_0] [i_0] [12] [12] = (min((((var_9 + var_8) + var_1)), (max((((var_3 ? var_10 : var_10))), -var_1))));
                        arr_49 [i_11] = -var_4;
                    }
                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        arr_52 [i_0] [i_12] [i_2] [i_8] [i_0] = 50773;
                        arr_53 [i_12] [i_2] [i_3 - 2] [i_2] [i_12 - 2] = (!var_6);
                        arr_54 [i_12] [i_8] [1] [i_12] = ((((max(var_12, var_2)))));
                        arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_12] = (var_3 < -var_12);
                    }
                    arr_56 [20] = var_1;
                }
            }
            var_19 = ((-((((18446744073709551615 ? 14763 : var_2))))));

            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {

                for (int i_14 = 2; i_14 < 19;i_14 += 1) /* same iter space */
                {
                    arr_61 [i_0] [i_14] [i_0] [8] [i_14] [i_0] = ((((min(var_11, (~var_4)))) ? (((((var_3 ? 733317347 : var_5))))) : ((18446744073709551613 ? 15 : ((var_9 ? 1623234849 : var_12))))));
                    arr_62 [0] [i_2 - 2] [i_14] [1] [i_14 - 2] = var_1;
                }
                for (int i_15 = 2; i_15 < 19;i_15 += 1) /* same iter space */
                {

                    for (int i_16 = 2; i_16 < 19;i_16 += 1)
                    {
                        arr_71 [8] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] = (((~((var_12 ? var_1 : 15140)))));
                        arr_72 [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                        arr_73 [i_0] [i_0] = (((((max(var_7, var_4)) << (((min(var_7, var_5)) - 10635)))) <= ((((!var_4) ? ((20 ? var_10 : var_6)) : ((var_1 ? var_10 : var_11)))))));
                    }
                    for (int i_17 = 1; i_17 < 19;i_17 += 1)
                    {
                        var_20 = (((((var_7 ? 127 : var_5))) ? ((((!(18446744073709551615 <= var_12))))) : var_3));
                        arr_77 [i_0] [11] [i_0] [i_0] [i_0] [i_0] [i_0] = var_5;
                    }
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        var_21 = (((~((max(-21, var_2))))));
                        arr_81 [i_0] = ((-(-2147483647 - 1)));
                        var_22 = ((var_11 ? var_6 : var_9));
                        arr_82 [i_0] [i_2 - 1] [i_2] [i_13] [1] [15] [i_18] = (max(630953477, (1424315838619665456 + 13)));
                    }
                    var_23 = (((((-30 ? ((var_9 ? -1701301792 : var_12)) : 1))) ? ((~((var_1 ? var_9 : var_12)))) : (var_0 < var_9)));
                    arr_83 [i_0] [i_2] [i_13] [18] = var_1;
                }

                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {
                    arr_87 [i_0] [i_0] [i_13] [i_19] = ((~((var_4 ? -21 : ((min(var_4, var_5)))))));
                    var_24 = var_8;
                }
                var_25 = var_7;
                var_26 = (var_2 | 5963276914891326884);
            }
        }

        for (int i_20 = 0; i_20 < 21;i_20 += 1)
        {

            for (int i_21 = 0; i_21 < 21;i_21 += 1)
            {

                /* vectorizable */
                for (int i_22 = 1; i_22 < 19;i_22 += 1)
                {

                    for (int i_23 = 3; i_23 < 18;i_23 += 1)
                    {
                        arr_99 [12] [12] [2] [11] [i_23 + 1] [14] = ((var_6 ? var_8 : ((var_9 ? var_8 : 16537))));
                        arr_100 [i_23 - 2] [i_22] [i_21] [i_20] [1] = ((var_6 ? var_7 : var_5));
                    }
                    for (int i_24 = 0; i_24 < 21;i_24 += 1)
                    {
                        var_27 = (~var_4);
                        arr_103 [i_0] [i_0] [13] [i_21] [i_21] [3] = var_9;
                        arr_104 [i_0] [i_20] [i_21] [1] [i_24] [5] = (((var_4 ? var_8 : var_11)) ^ var_12);
                        var_28 = (!5963276914891326884);
                    }
                    for (int i_25 = 2; i_25 < 20;i_25 += 1)
                    {
                        arr_108 [1] [i_25] = (((!5171) || var_8));
                        var_29 = ((var_0 ? 0 : var_2));
                    }

                    for (int i_26 = 0; i_26 < 21;i_26 += 1)
                    {
                        arr_111 [i_0] [i_0] = (~var_1);
                        var_30 = ((var_2 ? (!var_11) : (var_0 != var_8)));
                        arr_112 [i_0] [i_20] [i_21] [i_21] = ((var_8 ? var_1 : var_9));
                    }
                }
                var_31 = (min(var_0, ((6 ? 14376664508076202490 : -16538))));
            }
            arr_113 [i_0] = var_6;
        }
    }
    var_32 = (min(var_3, var_12));
    var_33 = ((~(((!var_10) ? var_12 : ((var_12 ? var_9 : var_3))))));
    #pragma endscop
}
