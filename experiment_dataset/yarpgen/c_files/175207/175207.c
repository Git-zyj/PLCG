/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_4));
    var_18 = var_10;
    var_19 = (max(var_0, 227));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = var_3;
                    var_21 = ((min(2651246305, 1643720990)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_22 = (((((max(var_11, (arr_3 [2] [2] [2]))) ^ ((min(var_9, (arr_8 [i_0] [2] [i_0] [2] [2]))))))));
                                var_23 = var_1;
                                arr_15 [i_0] [i_0] [i_0] [3] [1] [1] [i_0] = var_6;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_24 = (((arr_16 [i_0]) != 1529526238));
                        var_25 &= var_1;
                        var_26 = (((arr_17 [0] [0] [0] [0] [i_2]) / (((-4880 + (arr_10 [4]))))));
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        var_27 = 23;
                        arr_21 [i_1] [i_1] = ((((min(1643720992, -83))) ? 9223372036854775801 : (arr_14 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2])));
                        arr_22 [i_0] [i_0] = ((+(((!-9223372036854775792) / (arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2] [11])))));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_28 = ((+((((arr_9 [5]) >= (((arr_5 [i_0 - 2]) >> (((arr_1 [i_7]) - 24544)))))))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] = (min(((((var_12 != (arr_7 [i_0]))))), var_5));

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_29 += (((((((max((arr_2 [i_8] [i_1]), (arr_7 [i_0])))) ? ((-(arr_9 [i_0]))) : 2651246304))) ? ((((2651246303 > (((arr_19 [2] [1] [1] [2]) ? (arr_10 [i_0]) : 389696475)))))) : (max(2651246296, (arr_26 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2] [i_1])))));
                            var_30 = (max(var_30, (var_7 - var_7)));
                        }
                        arr_30 [i_0 - 1] [i_0 + 1] [1] [i_0 - 1] [13] [1] = ((+(min((arr_8 [5] [i_2] [i_2] [i_1] [i_0]), ((((arr_16 [1]) - var_8)))))));

                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            arr_33 [i_9] = (max(4879, (arr_1 [i_0 + 1])));
                            var_31 = (min(((((arr_24 [i_0 + 2] [i_0 + 2] [i_2] [i_0 + 2] [i_0 + 2]) < (arr_11 [i_0 - 1] [i_1] [i_2] [i_2] [i_9 + 1])))), var_12));
                        }
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_32 = (max(var_32, (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max((1 > 55), (min((arr_9 [i_1]), (arr_32 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0])))))) * (min((arr_32 [i_10] [1] [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1]), (((arr_14 [i_0] [i_0] [10] [i_0] [i_0]) ? 2147482624 : var_9))))));
                        var_33 = var_16;
                    }
                }
            }
        }
    }
    #pragma endscop
}
