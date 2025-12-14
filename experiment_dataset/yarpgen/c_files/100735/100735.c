/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = (-(((arr_1 [i_0] [i_1]) ? (arr_0 [i_1]) : 82441980198803825)));

                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 &= (arr_15 [i_4]);
                                arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] |= (((((+(((arr_8 [i_0]) ? var_1 : 82441980198803825))))) ? (0 ^ var_12) : ((((26408 != (((!(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                                arr_17 [i_0] [i_0] [i_0] = (0 ? ((-(arr_0 [i_3]))) : (arr_0 [i_0]));
                                arr_18 [i_3] = var_6;
                                arr_19 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] = (+(((((-406018731 ? (arr_3 [i_0] [i_0]) : 97))) ? var_9 : var_10)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_22 [3] [i_2] [i_1] [i_0] = ((((min((arr_13 [7] [i_1] [i_1] [i_5] [i_2]), (min(3059231553, var_4))))) ? (((max((arr_8 [i_1]), (arr_8 [i_5]))))) : (min((((1332361761 ? var_8 : (arr_1 [i_1] [i_5])))), (max(var_2, (arr_20 [10] [i_2] [10] [i_0])))))));
                        var_16 = (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (min(var_9, (arr_7 [i_5] [i_2] [i_1] [i_0]))) : ((max((arr_10 [i_0] [11] [i_1] [i_1] [i_2] [i_5]), (arr_7 [i_0] [i_1] [i_2] [i_5]))))));
                        var_17 &= ((105 ? 157 : var_8));
                        var_18 = (((arr_11 [i_5] [i_0] [i_0]) >= ((min((arr_14 [i_1] [i_0]), (arr_14 [i_1] [i_2]))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_2] [i_6] = -var_10;
                        var_19 = (max(var_19, (((var_2 ? (arr_10 [i_1] [i_0] [i_6] [i_2] [0] [i_1]) : var_3)))));
                        arr_26 [i_2] [8] [i_0] [i_6] [8] [i_6] = (arr_13 [i_0] [i_1] [i_2] [i_6] [i_2]);
                    }
                    var_20 = (arr_0 [i_0]);
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    arr_29 [i_0] = (max(149, var_7));
                    var_21 = (min(var_21, (arr_0 [i_1])));
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_22 = (((~((var_8 ? var_9 : (arr_9 [1] [1] [i_9]))))));
                                arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_23 [i_0] [i_1] [16] [i_8] [i_9] [i_10]) ? (arr_23 [i_0] [i_1] [i_1] [i_8] [i_9] [i_10]) : ((min((arr_23 [i_0] [i_1] [i_8] [i_9] [i_9] [i_10]), (arr_23 [i_0] [i_1] [i_8] [i_9] [i_10] [i_9]))))));
                            }
                        }
                    }
                    var_23 |= arr_15 [13];

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {

                        for (int i_12 = 4; i_12 < 16;i_12 += 1)
                        {
                            arr_45 [i_0] [i_11] [i_8] [i_11] [0] = ((!var_5) < (var_14 * 32159));
                            var_24 -= ((((((arr_2 [i_8]) ? var_11 : var_3))) ? (arr_8 [3]) : 1));
                        }
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            var_25 -= arr_31 [i_0] [i_1] [i_11] [i_13];
                            arr_48 [i_13] [i_11] [i_8] [i_11] [i_0] = ((var_5 > (arr_43 [i_1] [i_11] [i_13])));
                            var_26 = (-(arr_32 [i_0] [i_11] [i_0] [i_0]));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_27 = (max(var_27, (arr_11 [i_14] [i_1] [i_0])));
                            var_28 = var_7;
                            arr_51 [i_0] [i_11] [i_11] [i_11] [i_0] = ((!(arr_24 [i_0] [i_0] [i_0] [i_0])));
                            arr_52 [i_11] [i_1] [i_1] = (((arr_44 [i_0] [i_1] [i_0] [i_11] [i_11] [1]) == (arr_44 [i_0] [i_0] [i_8] [i_0] [i_14] [i_8])));
                        }
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            arr_56 [i_15] [i_11] [i_1] [i_11] [i_15] = (((arr_40 [i_0] [i_1] [i_8]) ^ (arr_40 [i_11] [i_8] [i_1])));
                            var_29 = arr_41 [i_11] [i_1] [i_11] [i_15];
                            arr_57 [i_0] [i_1] [i_8] [i_11] [i_0] = (((arr_50 [i_11] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ^ (arr_21 [i_15] [i_11] [i_8] [i_1])));
                        }
                        var_30 = (max(var_30, var_1));
                        var_31 = (((arr_43 [i_0] [i_1] [i_8]) ? 1332361742 : (arr_43 [i_1] [i_8] [i_8])));
                    }
                    var_32 = (max(var_32, ((((~(!var_12)))))));
                }
                var_33 = (max(var_33, ((((((var_12 ? (0 % 2147483647) : (arr_7 [i_0] [10] [i_1] [i_1])))) ? (((~82441980198803803) ? (((var_9 ? (arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_3))) : (arr_1 [i_0] [i_0]))) : (((-1994700985 ? (~var_4) : (~28826)))))))));
                var_34 = ((((var_5 ? (arr_3 [3] [i_1]) : (arr_33 [11] [i_1] [i_0] [i_0] [i_0] [i_0]))) < ((min(((((arr_28 [i_1] [i_0] [i_0] [i_0]) ? (arr_4 [i_1]) : 43445))), var_8)))));
                var_35 = ((((((((!(arr_21 [i_0] [i_1] [i_0] [i_0]))))) / ((-(arr_43 [i_0] [i_0] [i_0])))))) ? var_11 : var_10);
            }
        }
    }
    var_36 = var_4;

    /* vectorizable */
    for (int i_16 = 0; i_16 < 0;i_16 += 1)
    {
        var_37 = (min(var_37, var_14));
        arr_61 [8] |= var_10;
    }
    var_38 = ((!(((~(var_5 - var_11))))));
    #pragma endscop
}
