/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((!(~127)));
    var_21 = -var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 7;
        arr_4 [i_0] = (((((0 ? 3 : 3201700378749633694))) ? ((var_11 ? var_7 : -2143052434)) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
            {
                arr_11 [i_2] [i_2] [i_3] = ((~((min(var_13, (!var_16))))));
                arr_12 [i_2] [i_2] [i_3] = ((!((max((arr_1 [i_1]), 1)))));
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
            {
                arr_15 [i_4] [i_2] [i_2] [i_2] |= (arr_13 [i_4] [i_2] [2]);
                var_22 = 51;
            }
            for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
            {
                arr_18 [i_1] [2] [i_2] [i_2] = arr_2 [i_1];
                arr_19 [i_2] [i_5] = ((-2824540240541927906 ? var_11 : 3201700378749633694));
            }
            for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_28 [i_1] [i_2] [i_1] [i_2] [i_8] = (!var_2);
                            var_23 |= 0;
                        }
                    }
                }
                var_24 = var_2;
                var_25 |= var_9;
            }
            arr_29 [10] [i_2] &= ((-(max((max(var_11, (arr_8 [20] [i_1] [i_1]))), var_2))));
            var_26 = var_1;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
            {
                arr_35 [i_10] = ((~(arr_0 [i_10])));
                var_27 = 20;
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 19;i_13 += 1)
                    {
                        {
                            arr_43 [i_11] [i_11] [19] [i_12] [i_13 + 1] [i_13 + 1] = (((arr_16 [i_1] [i_12] [i_11] [i_12]) ? 8044538363788244989 : (arr_16 [i_1] [i_9] [i_11] [6])));
                            var_28 = -24;
                        }
                    }
                }
                var_29 = var_0;
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        {
                            arr_48 [i_11] [i_11] [i_11] [0] [i_15] = (arr_7 [i_1]);
                            var_30 &= ((!(arr_34 [15] [15])));
                        }
                    }
                }
                var_31 = -var_2;
            }
            for (int i_16 = 1; i_16 < 1;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 20;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            var_32 &= (!-0);
                            var_33 = ((0 ? ((var_2 ? 3201700378749633706 : (arr_37 [i_17] [i_16] [i_17] [i_16]))) : (var_15 | var_14)));
                            arr_56 [i_1] [i_1] [i_9] [i_9] [i_16] [i_1] [i_18] &= (!11373981025511563612);
                            arr_57 [i_9] [i_9] &= 835347480;
                        }
                    }
                }
                var_34 = ((-((17631123474392205220 ? var_10 : var_10))));
                arr_58 [i_1] [i_9] [i_16 - 1] |= -3201700378749633695;
                arr_59 [i_1] [i_9] [i_16 - 1] = (arr_14 [i_1] [1] [i_1]);
            }
            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {
                var_35 = -52;
                arr_63 [i_9] [i_9] [i_19] = ((((arr_23 [i_1] [i_1] [i_19]) == var_12)) ? ((-(arr_33 [i_1] [14] [i_9] [i_19]))) : -32758);
            }
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 20;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 21;i_21 += 1)
                {
                    {
                        var_36 = -var_15;

                        for (int i_22 = 3; i_22 < 20;i_22 += 1)
                        {
                            arr_73 [i_20] = ((-(((arr_42 [i_20] [i_9] [i_20 + 1] [i_21] [i_9]) ? var_13 : 77))));
                            var_37 = -var_13;
                        }
                        for (int i_23 = 2; i_23 < 20;i_23 += 1)
                        {
                            arr_76 [i_20] = var_19;
                            arr_77 [i_23] [i_23] [i_23] [i_20] = (var_19 != var_8);
                        }
                        for (int i_24 = 0; i_24 < 21;i_24 += 1)
                        {
                            var_38 = ((~(((arr_33 [i_9] [i_20] [i_21] [i_21]) ? -3272731302482452759 : var_6))));
                            arr_81 [i_1] [i_9] [i_20] [i_20] [1] [18] = var_10;
                            arr_82 [i_20] = 879053881204197442;
                            var_39 = -224;
                        }
                    }
                }
            }
            var_40 |= (0 ? (arr_60 [i_1] [i_9] [i_1] [i_1]) : (arr_70 [i_1] [i_1] [i_9]));
        }
        for (int i_25 = 0; i_25 < 21;i_25 += 1)
        {
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 21;i_26 += 1)
            {
                for (int i_27 = 2; i_27 < 18;i_27 += 1)
                {
                    {
                        arr_89 [i_1] [i_25] [i_26] [i_27] = (arr_16 [i_1] [i_1] [i_26] [i_1]);
                        var_41 = 0;
                        var_42 = var_10;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_28 = 1; i_28 < 18;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 21;i_29 += 1)
                {
                    {
                        arr_94 [i_25] = var_13;

                        /* vectorizable */
                        for (int i_30 = 0; i_30 < 21;i_30 += 1)
                        {
                            var_43 = ((((!(arr_69 [i_1] [i_25] [i_28] [i_29] [i_29] [i_30]))) ? ((2022327572 ? var_0 : 127)) : var_19));
                            var_44 = (arr_84 [i_1] [i_1] [i_1]);
                        }
                        var_45 = (min(var_45, (((var_18 || (((var_13 / (max(var_11, var_14))))))))));
                    }
                }
            }
        }
        for (int i_31 = 0; i_31 < 21;i_31 += 1)
        {

            /* vectorizable */
            for (int i_32 = 0; i_32 < 21;i_32 += 1)
            {
                var_46 = (((arr_88 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) * 0));
                var_47 = ((-14542 ? (arr_33 [i_1] [i_32] [i_31] [i_31]) : ((var_3 ? -1 : 1))));
                var_48 = ((26937 << (var_4 - 17745)));
                var_49 = (((((var_5 << (-96 + 116)))) ? var_10 : (-44 < var_2)));
            }
            arr_104 [i_1] [i_31] [i_31] |= (((arr_8 [i_31] [i_31] [i_31]) % var_4));
            arr_105 [i_1] [i_1] [i_31] = ((var_2 << (var_17 - 20688)));
            var_50 = (((~((2272639724 ? var_14 : 1)))));
            var_51 = var_1;
        }
        var_52 |= 2272639724;
    }
    #pragma endscop
}
