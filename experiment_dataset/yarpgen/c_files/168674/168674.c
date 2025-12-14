/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_18 ^= (((((~((~(arr_2 [i_0] [6])))))) ? (((((((arr_1 [2]) ? (arr_2 [i_0] [i_0]) : var_15)) < ((var_7 ? var_15 : var_6)))))) : ((~((var_15 ? var_10 : (arr_0 [8])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (min((min(var_14, var_9)), var_3));
                    var_20 = (min((min((((~(arr_0 [i_0])))), (var_7 & var_0))), ((min(var_8, (arr_3 [i_0 - 1] [i_0] [6]))))));
                    arr_7 [i_0] [i_0] [i_1] [8] = (min((((-6517236528933093477 ? -186731663 : 1))), (max(((max(var_12, var_11))), (min(var_0, (arr_1 [i_0])))))));
                }
            }
        }
        var_21 = (min(((max(34201, 1)), (min(var_8, var_10)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_17 [i_0] = (max((min((arr_1 [i_0]), var_8)), (max(var_7, ((var_5 ? var_4 : (arr_3 [i_5] [i_0] [i_0])))))));
                        var_22 += var_3;
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        arr_20 [4] [i_3] [i_0] [i_4] [i_6] = ((var_4 && (((var_14 ? var_17 : var_4)))));
                        var_23 = (min(var_23, var_9));
                        var_24 = ((var_13 ? (!var_5) : (arr_11 [i_0 - 1])));
                    }
                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_26 [i_0] [i_7] [i_4] [i_7] [i_8] [i_3] [i_7] = var_0;
                            arr_27 [i_0 + 2] [i_0] [i_4] [i_4] [i_7] [i_8] [i_8] = var_1;
                        }
                        arr_28 [2] [i_0] [i_4] [i_7] = var_15;
                        arr_29 [i_0] [i_3] [i_4] [1] [i_0] [i_7 - 1] = var_9;
                    }
                    var_25 -= var_9;

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 8;i_10 += 1)
                        {
                            arr_38 [i_0] [i_10] [i_9] [i_4] [9] [i_3] [i_0] = ((var_10 + (!var_10)));
                            var_26 = (max(var_26, (((-(!703549825))))));
                            var_27 ^= (((arr_0 [i_3]) ? (var_3 && var_13) : var_4));
                            arr_39 [i_0] [i_3] [i_0] [i_0] [i_10] = ((!(arr_1 [i_0])));
                        }
                        for (int i_11 = 3; i_11 < 9;i_11 += 1)
                        {
                            arr_42 [3] [9] [i_0] [i_11] = (var_16 < var_11);
                            var_28 = (!-var_14);
                            arr_43 [i_4] [i_0] [i_4] [i_4] [i_3] [i_0] [i_0] = var_12;
                            var_29 = var_3;
                        }
                        arr_44 [i_0] = ((var_15 ? (!var_0) : (arr_36 [i_0 + 3] [i_0 + 3] [i_0] [i_0])));
                    }
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        var_30 -= (((max((arr_4 [i_0 + 1] [i_12 - 1] [i_12]), (arr_31 [i_0 + 1] [i_12 - 1] [i_12 - 1] [i_12 - 1])))) && (((var_11 ? var_12 : var_2))));
                        var_31 = (min((((((((arr_21 [i_0] [7] [i_4] [i_4] [i_12]) ? var_14 : (arr_18 [i_0 - 1] [1] [i_4] [i_12] [i_12] [i_4])))) < (min((arr_22 [i_0] [0] [i_4] [i_4] [0]), (arr_46 [i_3])))))), ((~(((arr_4 [i_0] [0] [i_4]) ? var_0 : var_4))))));
                        var_32 = (min(var_7, (((((((arr_32 [4] [i_3] [1] [9]) ? (arr_37 [i_0] [i_3] [i_3] [9] [2]) : var_9))) && (((var_13 ? var_8 : var_16))))))));
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 9;i_13 += 1) /* same iter space */
                    {
                        arr_50 [i_0 + 2] [i_3] [8] |= (((56374 ? 3380936003 : 9162)));
                        arr_51 [i_0] [i_0] [i_4] [9] [i_13] [2] = ((~(arr_33 [i_0 + 2] [i_0] [i_0] [1] [i_0 + 2] [i_0])));
                    }
                    for (int i_14 = 2; i_14 < 9;i_14 += 1) /* same iter space */
                    {
                        var_33 = (min(var_33, ((((min(var_16, ((var_13 ? var_9 : var_10)))) * (((min(var_13, (!var_8))))))))));
                        var_34 = (~(min((((arr_34 [i_0 - 1] [i_3] [i_0 - 1] [i_0] [8]) ? var_7 : var_12)), (~var_3))));
                    }
                    arr_56 [i_0] [i_0] = var_11;
                }
            }
        }
    }
    var_35 = ((var_1 ? (((!(((var_10 ? var_4 : var_11)))))) : var_7));
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 10;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            {
                var_36 &= (((((!(~var_1)))) >= (((!((min(var_2, var_11))))))));

                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 0;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            {
                                var_37 = (max(var_37, var_11));
                                var_38 = ((var_10 ? ((-((var_14 ? var_7 : var_8)))) : ((((max(var_9, var_17)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 1; i_20 < 8;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            {
                                var_39 = (max(((((max(var_14, (arr_66 [i_15] [i_15] [i_17])))) * var_1)), ((((((!(arr_66 [i_15] [i_20] [i_15])))) < (!var_12))))));
                                var_40 = var_16;
                                var_41 &= (arr_5 [i_15]);
                            }
                        }
                    }
                    arr_72 [i_15] [i_16] [i_15] = (arr_2 [9] [i_16]);
                }
                arr_73 [i_15] = (min((((((var_3 ? (arr_46 [i_15]) : var_0))) ? (arr_21 [i_15] [i_15] [7] [i_16] [i_16]) : (~var_9))), (arr_68 [1] [i_15] [i_15] [i_15] [i_16] [2])));
            }
        }
    }
    var_42 *= (min((~var_1), (((var_10 && var_7) ? var_6 : (min(var_12, var_11))))));
    #pragma endscop
}
