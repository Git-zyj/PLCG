/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (!0);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] = var_12;
                        var_14 = (min(var_14, ((min(((((var_13 == var_2) == ((var_3 ? var_11 : var_7))))), ((((min(var_8, var_3))) ? var_7 : (arr_7 [i_0] [i_2 - 1] [i_0]))))))));
                    }
                }
            }
        }
        var_15 = (min(var_15, (((((arr_10 [i_0] [i_0] [i_0] [i_0]) >> ((((max((arr_8 [i_0] [i_0] [4]), var_9))) - 1494))))))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (((((min(var_0, (((var_6 ? var_4 : var_3)))))) ? (arr_6 [i_4]) : ((min(var_5, (((~(arr_12 [i_4] [i_4] [i_4] [i_4]))))))))))));
        var_17 = (arr_10 [i_4] [i_4] [i_4] [i_4]);
        var_18 = (max(var_18, (((+(max((((arr_11 [i_4] [i_4] [i_4] [1] [2]) ? var_5 : var_12)), ((max(var_1, var_6))))))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_26 [i_4] [i_5] [i_6] [i_7] [i_8] = (((((var_9 >> (((arr_0 [i_4]) + 1769389786))))) != var_12));
                            arr_27 [i_4] [7] [i_6] [i_6] [i_7] [1] = (((arr_11 [i_4] [i_4] [i_4] [i_4] [i_4]) >> (((~var_13) - 3187019077))));
                        }
                        var_19 = (min(var_19, var_7));

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_20 = (min((min(((var_4 << (var_3 - 3856755316))), 9976)), ((((((arr_11 [1] [i_5] [i_5] [i_5] [i_5]) - var_13)) != var_7)))));
                            arr_30 [i_4] [i_5] [i_6] [i_7] [i_9] [i_5] [i_5] = (((~var_0) == ((171987515 ? var_2 : (arr_12 [i_6] [i_6 - 1] [8] [i_6 + 1])))));
                            var_21 = (min((max((!var_3), (min(14620, var_4)))), (((((min(var_13, var_7))) >= (min(var_11, var_7)))))));
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_22 = (min(((var_11 << (((var_8 + 8754905003255288992) - 1)))), ((max((arr_11 [i_4] [i_5] [i_5] [4] [i_6 - 2]), (arr_11 [1] [i_6 - 1] [i_6] [7] [i_6 - 2]))))));
                            var_23 = (max(var_23, var_3));
                            var_24 = (((((min((max(-749129652, 1182833942268229444)), (((var_0 ? (arr_15 [i_4] [i_4]) : var_7))))) + 9223372036854775807)) >> (((~var_10) - 5371920510535671667))));
                            arr_33 [i_4] [i_4] [i_4] [i_4] [i_4] = (((((var_5 + (max((arr_11 [i_10] [i_10] [i_10] [i_10] [i_10]), (arr_24 [i_4] [i_5] [i_6] [i_6 + 1] [4] [i_10])))))) - ((((min(var_3, var_3))) ? (max(var_10, (arr_8 [i_10] [i_6 - 2] [i_10]))) : var_4))));
                        }
                        var_25 = (min(var_25, ((((arr_2 [i_4] [i_4]) && ((((min(var_12, (arr_4 [i_4])))) && (var_1 ^ var_5))))))));
                    }
                }
            }
        }
        var_26 = (!var_3);
    }
    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
    {
        arr_37 [i_11] = ((-(((max(32747, var_10)) >> (-12 + 49)))));
        arr_38 [8] = (max(0, 915912975));
        var_27 = (max(((min((((arr_5 [i_11] [i_11] [i_11]) << (var_2 + 1292620770))), (!var_1)))), ((((((arr_6 [i_11]) ? var_5 : var_0))) ? (max(var_12, var_6)) : var_13))));
        var_28 = (arr_21 [i_11]);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
    {
        var_29 = ((var_13 >= (arr_15 [i_12] [i_12])));
        var_30 = (min(var_30, (-2147483647 - 1)));
        var_31 = (var_9 << (arr_35 [i_12] [i_12]));

        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            arr_45 [i_12] = ((((((((arr_21 [i_13]) + 2147483647)) >> (-749129652 + 749129681)))) ? (arr_43 [i_12] [i_13]) : (arr_31 [1] [1] [i_12] [i_12] [i_12] [i_12])));
            arr_46 [3] [i_13] = (arr_36 [i_13]);
            arr_47 [i_12] [i_12] [14] = (arr_20 [i_12] [i_12] [i_13] [i_13]);

            for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
            {
                var_32 = ((1 ? 11257339125829842497 : 797));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        {
                            var_33 = (((var_6 ? var_4 : var_3)));
                            arr_57 [i_12] [i_15] = (var_0 >= (var_0 != var_2));
                            var_34 = (max(var_34, ((~(arr_22 [i_12] [i_13] [i_14] [i_14])))));
                            arr_58 [i_12] [i_12] [i_12] [i_12] [i_12] = (var_7 - (arr_0 [i_15]));
                        }
                    }
                }
            }
            for (int i_17 = 0; i_17 < 16;i_17 += 1) /* same iter space */
            {
                var_35 = (max(var_35, var_9));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 16;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 12;i_19 += 1)
                    {
                        {
                            arr_65 [i_19] = ((-29065 != ((var_0 << (((arr_4 [i_12]) - 8104))))));
                            var_36 = (min(var_36, var_2));
                        }
                    }
                }

                for (int i_20 = 0; i_20 < 16;i_20 += 1)
                {
                    arr_69 [1] [i_13] [11] [11] [11] = (((arr_40 [i_17] [i_13]) >= (((arr_34 [0]) * var_8))));
                    var_37 = (((arr_5 [i_13] [i_12] [2]) < (var_10 < var_0)));
                    var_38 = (var_10 < var_5);
                }
                var_39 = (min(var_39, ((var_13 != (arr_6 [i_17])))));
            }
            for (int i_21 = 0; i_21 < 16;i_21 += 1)
            {
                var_40 = (min(var_40, (arr_9 [i_12] [i_13] [i_21])));
                var_41 = (min(var_41, var_8));
                var_42 = (((((2147483647 ? -32764 : 575087688))) ? var_4 : var_4));
            }
        }
        for (int i_22 = 0; i_22 < 16;i_22 += 1)
        {
            arr_75 [i_12] = (((arr_14 [i_12] [i_22]) < (var_8 == var_10)));
            var_43 = (((arr_16 [i_12] [i_12] [i_22]) ? (arr_51 [i_12] [i_12] [i_22]) : (var_1 ^ var_3)));

            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                var_44 = (min(var_44, (((-(arr_10 [i_12] [i_12] [i_22] [i_23]))))));
                var_45 = (min(var_45, (arr_77 [i_12] [i_22] [i_12] [i_12])));

                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    var_46 = (arr_5 [i_24] [i_12] [i_23]);
                    arr_80 [i_24] [i_24] = (arr_70 [i_12] [i_22] [10] [i_24]);
                    arr_81 [i_12] = ((var_2 - (arr_7 [1] [1] [i_22])));
                    var_47 = (max(var_47, (arr_12 [i_12] [i_12] [i_12] [i_12])));
                }
                for (int i_25 = 0; i_25 < 16;i_25 += 1)
                {
                    arr_86 [i_12] [i_22] [11] [i_25] [i_25] = (arr_28 [i_25] [i_25] [i_23] [10] [i_12]);
                    var_48 = (max(var_48, (((~((var_13 ? (arr_73 [i_12] [i_22] [i_23]) : 9223372036854775791)))))));
                    var_49 = (min(var_49, (((~((var_7 ? var_2 : var_11)))))));
                    var_50 = (max(var_50, var_1));
                    arr_87 [10] = var_4;
                }
            }
            for (int i_26 = 0; i_26 < 16;i_26 += 1)
            {
                var_51 = (var_7 ? ((var_2 / (arr_20 [i_12] [i_22] [i_26] [i_12]))) : ((1 ? var_0 : var_1)));
                arr_90 [i_12] [i_22] [i_26] = ((var_6 ? (-2 - var_0) : (arr_7 [i_12] [i_22] [i_26])));
                var_52 = (arr_77 [i_12] [i_22] [i_26] [i_26]);
            }
        }
    }
    var_53 = var_9;
    #pragma endscop
}
