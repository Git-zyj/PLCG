/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 0;
        arr_4 [i_0] [i_0] = var_8;

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_8 [i_1] [i_0] = var_9;
            arr_9 [i_0] = max((min((arr_1 [i_1 + 2] [i_1]), var_7)), (arr_1 [i_1 - 1] [i_1]));
            var_14 = (((-var_2 ? var_12 : (!3132462068))));
            arr_10 [i_0] [i_1] [i_1] = ((((((var_12 <= (min(0, 3132462081)))))) - (((((arr_7 [i_1]) ? var_1 : var_11)) - 171))));
            arr_11 [i_0] [i_0] [i_1] = var_6;
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_15 = (max(var_15, ((max((max(1, (arr_1 [i_2] [i_0]))), ((((arr_0 [i_2]) <= (1 + -6077292948956373654)))))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    {
                        var_16 *= (-350638481343453902 ? ((max(var_4, (min((arr_13 [i_0]), (arr_2 [i_4])))))) : ((6077292948956373645 ? (((arr_6 [i_0]) ? 1 : 3571729197843324459)) : 24)));
                        arr_20 [i_4] [i_3] [i_3] [i_0] = (max(((((max(var_9, var_6))) ? ((18446744073709551608 ? var_1 : 1)) : (((((arr_16 [i_4] [i_4] [i_3] [i_4]) && 3161758041)))))), -24));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            arr_25 [i_5] = ((-(max((min(var_6, (arr_22 [i_0] [i_0] [i_5]))), (min(var_2, var_7))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        arr_32 [i_7] [i_6] [i_0] [i_0] [i_0] [i_0] |= ((1 ? (((var_11 || (arr_0 [i_0])))) : 0));
                        arr_33 [i_0] [i_5] [i_5] [i_5] [i_7] = (min((min((((arr_19 [i_0]) & var_9)), (var_8 & var_8))), (arr_21 [i_5])));
                        var_17 = (min(var_17, 1152358554653425664));
                    }
                }
            }

            /* vectorizable */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_18 = (min(var_18, (arr_16 [i_5] [i_8] [i_0] [i_10])));
                            arr_42 [i_5] [i_5] = (((var_12 ? var_11 : 1)));
                        }
                    }
                }

                for (int i_11 = 2; i_11 < 11;i_11 += 1)
                {
                    var_19 |= var_10;

                    for (int i_12 = 3; i_12 < 11;i_12 += 1)
                    {
                        arr_47 [i_5] [i_8] [i_11] [i_5] = (((arr_1 [i_11 - 1] [i_11 - 1]) ? ((-(arr_22 [i_0] [i_5] [i_11 - 1]))) : ((((!(arr_7 [i_0])))))));
                        var_20 = (((arr_21 [i_0]) ? ((var_9 ? var_6 : 38)) : (arr_7 [i_11 + 1])));
                        arr_48 [i_12 - 2] [i_5] [i_8] [i_11] [i_12] [i_12] = (((arr_17 [i_12 - 2] [i_11 - 1] [i_8] [i_11] [i_12] [i_8]) ? var_11 : (arr_27 [i_12 + 1] [i_11 - 1] [i_0] [i_11])));
                    }
                }
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    arr_52 [i_0] [i_0] [i_0] [i_5] [i_0] = 845441354;
                    var_21 = (arr_15 [i_13] [i_5]);
                }
            }
            var_22 = arr_51 [i_5] [i_5] [i_0];
        }
    }
    var_23 = ((((min((max(var_6, var_5)), ((max(1685796684, 9223372036854775807)))))) ? ((max(var_2, var_10))) : var_8));
    #pragma endscop
}
