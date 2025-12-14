/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            var_13 = 2945268292;
                            arr_12 [i_3] [i_3] = ((3344434702 ? ((((arr_4 [i_0 + 1] [17] [i_0 + 1] [i_0 + 1]) || (arr_10 [i_0] [i_1] [i_0] [i_3])))) : var_4));
                            var_14 = (arr_1 [i_2 - 3]);
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_1] [i_5 + 3] = (min(64, -462813825));
                            arr_16 [i_0] [i_3] [17] [i_1] = ((~(((arr_11 [i_0] [i_1] [i_0] [i_3] [11]) ? (arr_7 [i_3] [i_3] [i_2] [i_2 + 1] [i_2] [i_2]) : (arr_0 [i_0])))));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_15 = ((0 ? -251286599 : 1));
                            arr_21 [i_0 - 1] [i_1] [i_3] [12] [i_6] = (arr_13 [8] [i_2 - 2] [i_2] [i_3] [i_2 - 1]);
                            var_16 -= max(var_7, (arr_9 [i_2] [i_2]));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_25 [i_0] [i_3] [i_3] [i_1] [i_0] = 92;
                            var_17 = 251286599;
                        }
                        var_18 ^= ((-((((arr_22 [i_0] [i_0 + 1] [i_2] [i_2]) || (((0 >> (arr_22 [i_3] [i_1] [i_1] [i_0])))))))));
                        arr_26 [i_3] [i_3] [i_3] [11] = (((((var_9 << (var_2 - 17628707023703728272)))) ? (max(((~(arr_6 [i_0] [i_0] [i_3] [i_0 - 1]))), 1)) : (arr_22 [i_3] [i_3] [i_3] [i_3])));

                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            var_19 = (min(var_19, -1));
                            var_20 = (max(var_20, (arr_1 [i_1])));
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            var_21 = arr_17 [i_0] [i_1] [i_0] [i_3] [i_0 - 1] [i_0];
                            var_22 = (min((max((max((arr_14 [1] [1] [i_2] [1] [6]), var_11)), (arr_1 [i_2]))), (((arr_14 [i_0] [i_1] [i_1] [i_2 - 4] [i_0 + 1]) * (arr_14 [i_0] [i_0] [i_0] [i_2 - 2] [i_0 - 1])))));
                            var_23 ^= ((((-251286599 ? 4294967295 : ((950532593 ? 1514076519 : 4755666521441973876)))) != (max((arr_30 [12] [i_0] [12] [i_2] [i_2] [12]), ((min(61, -251286590)))))));
                            var_24 = (arr_14 [i_9] [i_3] [i_2] [i_1] [i_0]);
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            arr_33 [4] [i_3] [i_3] [4] [11] = (min((max(var_8, ((max(1, -1))))), (((((((arr_13 [1] [1] [1] [i_3] [1]) == 0))) >> (((((arr_23 [i_10]) << var_5)) - 32076)))))));
                            var_25 |= (((var_1 + 2147483647) >> (var_3 - 229898269)));
                        }
                        var_26 *= (arr_30 [6] [6] [i_2] [i_3] [i_2] [6]);
                    }
                }
            }
        }
        arr_34 [i_0] = ((-(max((min((arr_14 [2] [i_0] [i_0] [1] [i_0]), (arr_4 [i_0] [i_0] [i_0] [i_0]))), ((((arr_1 [i_0]) ? var_11 : 104)))))));
        arr_35 [i_0] = (!64733);
        arr_36 [i_0 - 1] [i_0 - 1] |= (((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]) | (arr_17 [i_0 + 1] [9] [i_0] [i_0] [19] [6])));
        var_27 -= -var_2;
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                {
                    var_28 = (arr_24 [i_11] [i_11] [i_11] [7] [i_13]);
                    arr_45 [i_11] [i_11] [i_12] [i_13] = var_4;
                    arr_46 [i_11] [i_13] [5] [7] = arr_6 [20] [i_12 - 1] [i_13] [i_13];
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 16;i_16 += 1)
                {
                    {
                        arr_55 [i_11] [i_11] [i_15 + 1] [i_16] [i_16] = (arr_41 [i_11] [i_11]);
                        var_29 -= (var_2 ? 1 : 1);
                        var_30 = (max(var_30, (((((((((var_10 ? var_6 : 0))) > ((47641 ? (arr_42 [i_14] [i_14] [i_14] [i_14]) : 767457048))))) != var_12)))));
                    }
                }
            }
        }
        var_31 = arr_8 [9] [i_11] [i_11];
    }
    for (int i_17 = 0; i_17 < 22;i_17 += 1)
    {
        arr_58 [i_17] [i_17] = (arr_57 [i_17]);
        arr_59 [8] [18] = (min(2133883003, (max(((2097151 ? var_9 : (arr_56 [i_17] [i_17]))), (arr_57 [i_17])))));
    }
    var_32 = (min(var_32, var_4));
    #pragma endscop
}
