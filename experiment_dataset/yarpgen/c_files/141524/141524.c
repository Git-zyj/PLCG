/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max((1 * 0), (((arr_0 [i_0]) | var_17))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 ^= ((((var_1 ? (arr_9 [i_2] [i_1] [i_0]) : 4)) >= ((((arr_9 [i_0] [i_0] [i_2 - 1]) <= (arr_9 [i_2 + 1] [i_1] [i_0]))))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_2] = (((((((var_7 ? var_2 : var_10))) ? (((max(var_17, var_8)))) : (min(140737488093184, var_4)))) ^ 1));
                        var_19 -= (9371 < 4294967295);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_20 = var_1;
                        var_21 *= ((4294967287 <= (min((arr_4 [i_2 + 1] [i_2 - 1] [i_2 - 1]), (arr_4 [i_0] [i_2 - 1] [i_2 - 1])))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [i_5] [i_5] [i_2] [i_1] [i_1] [i_0] = (max((min(var_11, (arr_0 [i_1]))), (arr_14 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2] [6] [i_2 - 1])));
                        var_22 = (max(var_22, var_14));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] &= var_6;
                            var_23 = ((1 ? ((((((arr_11 [i_0] [i_0] [i_0]) >> var_9))) ^ (3047908412 + 65535))) : ((min(((3432565478824979873 ? 25151 : 1)), (arr_7 [i_5] [i_2 - 1] [i_0]))))));
                            var_24 = (max(var_24, var_9));
                            var_25 = ((!(((var_6 + (((-(arr_13 [i_1] [i_1] [i_6] [i_5])))))))));
                        }

                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            var_26 = (min(var_26, (((var_12 | ((min(var_10, 1))))))));
                            arr_25 [i_7] [i_5] [i_2] [i_1] [i_0] = ((56 - ((18446744073709551596 ? var_3 : -1))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_27 = (11041 - 255);
                            var_28 = (min(var_28, (arr_10 [i_0] [i_2 + 1] [i_5] [i_8])));
                            var_29 ^= ((var_4 < ((((arr_11 [i_0] [i_1] [i_2 - 1]) * (arr_9 [i_5] [i_2 - 1] [i_0]))))));
                        }
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 23;i_11 += 1)
                {
                    {
                        var_30 ^= (min(var_8, (var_8 + 18446744073709551614)));
                        var_31 = (min(var_31, ((max(((((arr_3 [i_0] [i_9] [i_10]) <= (arr_19 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11 - 1])))), var_6)))));
                        var_32 ^= var_9;

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_43 [i_0] [i_12] [i_0] [i_0] [i_0] = (min((((arr_40 [i_11] [i_12] [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 - 1]) + var_3)), var_12));
                            var_33 = ((1 | ((((var_12 ? 22943 : 1))))));
                        }
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            arr_46 [i_0] [i_9] [i_10] [i_10] [i_11 - 1] [i_13] = ((((max((max(4294967295, (arr_20 [i_0] [i_9] [i_10] [i_11] [i_13]))), ((max(121, (arr_8 [i_0]))))))) ? (min(((1 ? var_10 : (arr_22 [i_0] [i_10] [i_11] [i_13]))), (arr_31 [i_11] [i_13]))) : (((arr_35 [i_9] [i_9] [i_11 - 1] [i_11]) ? (arr_35 [i_0] [i_9] [i_11 - 1] [i_11 + 1]) : (arr_26 [i_0] [i_9] [i_11 - 1] [i_13])))));
                            var_34 = (min(var_34, (var_13 - 60)));
                        }
                    }
                }
            }
            arr_47 [i_0] [i_9] [i_9] = (((((max(var_14, var_5)))) == (arr_26 [i_0] [i_0] [i_9] [i_9])));
            arr_48 [i_0] [i_9] [i_9] = ((~((~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_9] [i_9])))));
        }
    }

    for (int i_14 = 0; i_14 < 0;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 24;i_16 += 1)
            {
                {
                    arr_57 [i_15 - 1] = (max(((max((arr_55 [i_14 + 1] [i_15] [i_16 + 1] [i_16 + 1]), var_17))), (max(var_15, ((~(arr_52 [i_14 + 1] [i_14 + 1])))))));
                    var_35 = var_10;
                }
            }
        }
        arr_58 [i_14] = (arr_55 [i_14 + 1] [i_14] [i_14 + 1] [i_14 + 1]);
    }
    #pragma endscop
}
