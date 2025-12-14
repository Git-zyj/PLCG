/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_11 = 27097;
                        arr_11 [i_0] [i_1] [i_0] [i_0] = (((arr_0 [i_2]) ? (!21071) : var_8));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_12 = (min(var_12, (!var_10)));
                        var_13 = ((19879 ? (var_5 / 44464) : (arr_9 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4])));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            var_14 = ((~(~203)));
                            var_15 = (var_5 < -27082);
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_16 = ((-(arr_21 [i_0] [i_1] [i_5] [7])));
                            var_17 = 23012;
                            var_18 = ((21071 ? var_1 : (arr_16 [i_7] [3] [i_2] [i_1] [i_0])));
                            var_19 = (((((19892 ? (arr_8 [i_0]) : 61))) ? 183 : var_8));
                        }
                        for (int i_8 = 2; i_8 < 7;i_8 += 1)
                        {
                            var_20 = (((((2147483647 ? 44465 : var_1))) ? ((210 ? var_1 : 179)) : (22 > -26)));
                            var_21 = 3659474922;
                        }
                        arr_25 [i_0] [10] [i_2] [i_5] [i_5] [i_5] = (((arr_19 [i_0] [i_5]) ? 0 : var_7));
                        arr_26 [i_0] [i_1] [i_1] [i_5] [9] = 216;
                    }
                    var_22 = ((-((144115188075855808 ? -6942339566409724459 : 48))));
                }
            }
        }
        arr_27 [i_0] = ((~(arr_5 [i_0] [i_0])));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_23 = (((max(var_7, -746489893))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    arr_38 [i_9] [i_10] [i_11] = ((((((-1702562642 ? var_9 : 13126846340535027415))) ? (arr_14 [3]) : 32768)) << (((arr_16 [i_11] [i_10] [i_11] [i_9] [i_10]) - 71)));
                    var_24 = (min(var_24, (((((min(0, var_10))) | ((max(var_3, (arr_17 [i_11] [i_10] [i_9])))))))));
                    var_25 = (min(((((-9223372036854775807 - 1) ? -18063 : 1))), 3011882267));
                }
            }
        }
        var_26 = ((max(32505856, (arr_37 [0] [10] [i_9]))));
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
    {
        arr_42 [i_12] = (max(((((max(3011882248, 33672))) ? var_3 : (arr_17 [i_12] [i_12] [i_12]))), ((-89 | (arr_29 [i_12])))));
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 8;i_14 += 1)
            {
                {
                    var_27 ^= ((((min((arr_13 [i_12] [i_13 - 2] [9]), 31))) && ((9995786591971164550 > (32505868 >= -14750)))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            {
                                var_28 = (524287 > -1011674759);
                                var_29 -= (max(((~((var_0 % (arr_17 [6] [i_13 - 1] [6]))))), ((-((var_6 ? var_2 : (arr_51 [i_12] [i_12] [i_12] [1] [i_12] [3] [i_12])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 11;i_18 += 1)
                        {
                            {
                                var_30 = ((((arr_53 [i_13 - 2] [10] [1] [i_14 - 2] [i_14]) ? -0 : var_9)));
                                arr_60 [i_12] [i_17] [i_18] [i_13] [i_12] = ((max((arr_2 [i_14 - 2] [i_14 - 1]), 1)));
                            }
                        }
                    }
                }
            }
        }
        var_31 = (arr_5 [7] [i_12]);
        var_32 = ((var_1 >= ((~(1283085058 != var_1)))));
    }
    var_33 = (-(var_4 / var_1));
    #pragma endscop
}
