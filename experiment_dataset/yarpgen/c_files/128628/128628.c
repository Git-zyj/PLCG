/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = (min(var_4, (max((~var_3), var_10))));
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = ((var_1 ? (min(((153 ? 82 : 100)), 58)) : -73));
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
        var_18 = ((~(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_11 [i_1] [i_1] [i_2] = ((-730766890 ? (arr_3 [i_2]) : ((var_8 ? 58 : var_4))));

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_16 [i_1] [i_1] = (var_12 & var_11);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_19 = ((-(arr_1 [i_2])));
                            arr_21 [i_2] [i_1] [i_2] = (!64);
                        }
                    }
                }
                arr_22 [i_3] [i_1] [i_1] [i_1] = ((((arr_1 [i_1]) ? (arr_18 [i_3] [i_2] [i_1]) : -4611686018427387904)));
                var_20 = (((arr_18 [i_1] [i_1] [i_1]) << var_9));
                var_21 = (var_5 & var_4);
            }
            var_22 = var_5;
            arr_23 [i_1] = (((arr_12 [i_1] [i_2] [i_2] [i_1]) | (arr_9 [5])));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            arr_27 [i_1] = ((((max(var_13, (((var_1 ? var_0 : 121)))))) ? ((((arr_25 [i_1]) / var_3))) : 3345783125));
            arr_28 [i_1] [i_6] = var_12;
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            var_23 = (min((min(((1 ? (arr_7 [7] [i_7] [i_7]) : var_9)), ((max(var_5, var_11))))), (min(((-61 ? var_13 : 1667998511)), (~var_11)))));
            var_24 = min(((((var_10 ? (arr_9 [i_1]) : var_13)) | ((((arr_5 [i_1]) ? var_11 : 16))))), (((var_12 < (arr_25 [i_1])))));
            var_25 = ((((77 ? (arr_8 [i_1] [i_1]) : var_3)) << (((65011712 & var_1) - 25165781))));
            var_26 = (((((arr_30 [i_1]) % (~var_1))) < (((-(((!(arr_19 [i_1] [i_1] [9] [9] [i_7] [6] [i_7])))))))));
            var_27 = ((~(~var_5)));
        }
        arr_33 [i_1] = ((!((((arr_8 [i_1] [i_1]) ? (arr_18 [i_1] [i_1] [i_1]) : ((min(var_8, (arr_3 [8])))))))));
    }

    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        arr_37 [9] = var_7;
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 11;i_10 += 1)
            {
                {
                    var_28 = ((((arr_38 [i_8] [i_9 - 2]) && (((var_10 ? var_1 : var_9))))));
                    var_29 = var_13;
                    arr_43 [i_8] [i_9] [i_10] [5] = var_2;
                }
            }
        }
        var_30 = var_8;
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_31 = (((((arr_42 [i_12] [i_13] [i_14]) ? (arr_42 [i_15] [i_14] [i_13]) : var_13)) | (var_5 / 730766889)));
                                arr_57 [i_14] [i_14] [7] [i_14] = (min((((730766873 >> (144115188075855871 - 144115188075855856)))), ((min(var_6, var_8)))));
                                arr_58 [i_14] [i_15] [3] = ((-(min((arr_47 [i_13] [1]), (arr_47 [i_12] [i_15])))));
                            }
                        }
                    }
                    var_32 = ((!((min(((min(-51, 1))), (arr_42 [1] [i_12] [i_11]))))));
                    var_33 = (max(((-(max(1152886320234758144, -53)))), (!var_3)));
                    arr_59 [i_12] = (((((max(90, (arr_1 [i_13]))))) ^ (((arr_1 [i_12]) ? var_2 : (arr_1 [i_12])))));
                }
            }
        }
        var_34 = (((min((arr_44 [i_11] [i_11]), 661756005)) << ((((100 << (((arr_55 [i_11] [10] [i_11] [i_11] [i_11]) + 6533591632833661129)))) - 3194))));
    }
    #pragma endscop
}
