/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [5] [i_1] = ((-(max(-8856594387157615772, 2147483646))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 = (((((var_1 ? var_7 : (arr_8 [i_0] [i_1])))) ? var_0 : (arr_8 [i_0] [i_1])));
                            var_21 = (min(((~((0 << (-32763 + 32780))))), -32763));
                        }
                    }
                }
            }
        }
    }
    var_22 *= 16384;

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_23 = (arr_15 [i_4] [6]);
        var_24 = ((-1066588128 ? 16383 : -16379));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                {
                    var_25 ^= ((var_5 > ((((var_18 ? 16384 : (arr_21 [i_4] [i_5] [14] [i_6]))) ^ var_1))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_26 ^= ((-var_17 ? (!var_13) : ((var_14 ? var_7 : var_4))));
                        var_27 = (arr_23 [i_4] [i_4] [i_4] [i_4] [i_4]);
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        var_28 = ((((!(((var_8 / (arr_22 [11] [i_4])))))) ? (arr_23 [i_6 - 1] [12] [13] [i_8] [i_4]) : ((max((((arr_15 [i_5] [11]) ? var_12 : var_1)), (arr_17 [i_6 + 1] [i_6 + 2] [i_6 + 2]))))));
                        var_29 = (((((-7467 - (var_17 + var_15)))) ? (((((max((arr_21 [1] [4] [i_6] [i_8]), (arr_15 [i_4] [i_4])))) - var_17))) : ((((max(var_6, 2712079832))) ? -16375 : ((-(arr_22 [11] [i_4])))))));
                        arr_27 [i_4] [i_4] [16] [0] [3] [0] = (max(((-((~(arr_22 [i_8] [i_5]))))), (((((((arr_24 [i_6 - 1]) ? var_11 : var_9))) ? (arr_20 [i_4] [i_5]) : ((var_5 + (arr_16 [i_4]))))))));
                        var_30 = ((max((arr_24 [i_6 - 1]), (arr_24 [i_6 - 1]))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                arr_33 [i_4] [i_5] [i_4] [i_4] [i_9] [i_9] = (((max((max((arr_22 [i_4] [i_4]), (arr_21 [i_4] [i_6] [i_9] [i_9]))), (arr_24 [i_6 + 2]))) << (((((arr_25 [i_5] [i_5] [i_4] [14]) ? 100 : var_5)) - 99))));
                                var_31 = var_7;
                                var_32 = (16383 <= 65);
                            }
                        }
                    }
                    arr_34 [i_4] [i_4] [i_6 + 1] = ((((((((arr_18 [i_6]) & (arr_20 [i_4] [0]))) >> ((((var_2 ? var_7 : (arr_28 [i_4] [i_5] [i_6 + 2] [0] [i_6]))) + 25767))))) ? (max(((var_1 ? (arr_30 [i_4] [i_4] [i_6] [10] [i_5]) : var_11)), (((arr_29 [17] [i_4] [17] [i_6]) ? (arr_21 [i_4] [i_4] [i_4] [i_4]) : var_17)))) : (max(((max(var_4, -16384))), ((var_13 ? -16384 : var_18))))));
                }
            }
        }
        arr_35 [14] &= ((((var_11 ^ (arr_23 [i_4] [i_4] [i_4] [i_4] [5]))) + (max(var_19, (arr_23 [i_4] [6] [i_4] [i_4] [i_4])))));
    }
    #pragma endscop
}
