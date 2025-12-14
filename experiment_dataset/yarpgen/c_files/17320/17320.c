/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_4 ? var_7 : -166391985)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (((((min(31, (arr_3 [i_0])))) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_12 [i_2] [i_2] [i_1] [i_2] = (~0);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_2] [1] = var_9;
                        var_12 = (arr_1 [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_2] [i_2] [i_4] = (((((+(((arr_19 [i_2] [i_2] [i_1] [i_2]) + 8))))) ? ((((-4881164476153603637 > (arr_14 [i_0] [i_0] [i_2] [15] [i_0]))))) : var_5));
                        var_13 = 93216699;
                        var_14 = (((~0) >= (((1 ? var_7 : (arr_10 [i_4]))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_15 = ((-(arr_20 [i_0] [i_1] [i_1] [i_2] [i_4] [i_5])));
                            arr_24 [3] [i_1] [i_2] [i_2] [i_5] [i_2] = (((arr_5 [i_1] [i_2]) ? (arr_20 [i_5] [i_4] [i_2] [i_0] [i_1] [i_0]) : 3898703557));
                            var_16 = ((0 == (((arr_10 [i_2]) / var_10))));
                            arr_25 [i_2] = -var_0;
                            var_17 = ((-(arr_11 [i_0] [i_1] [i_5])));
                        }
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_2] [i_2] [2] = (min(72, (arr_20 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6])));
                        var_18 = (((((((max(9559295871034225903, var_9))) ? -22301 : (arr_18 [i_2] [i_1] [i_2] [i_6])))) ? ((((((arr_26 [i_0] [i_6] [i_2] [i_6]) + (arr_9 [8] [i_0] [i_0])))) ? ((16777215 ? 104 : 654133941)) : (arr_10 [5]))) : ((((arr_11 [i_0] [i_1] [i_1]) || 47361)))));
                    }
                }
            }
        }

        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            arr_33 [i_7] = (arr_11 [i_0] [18] [i_7]);
            var_19 = ((((max(((13 ? var_9 : (arr_3 [i_0]))), -1))) ? (max(((732066497 * (arr_0 [i_0] [i_7 - 1]))), ((80 ? (arr_18 [i_0] [i_0] [i_7] [i_7]) : var_9)))) : (((((-9080201556399404782 ? (arr_18 [i_0] [i_7 + 3] [i_0] [i_0]) : var_8))) ? var_4 : 22300))));
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_38 [i_8] = ((arr_34 [i_8]) ? 654133936 : ((((arr_36 [i_8]) ? var_8 : 4294967272))));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_20 = (i_8 % 2 == zero) ? ((((((var_3 ? (arr_37 [i_9] [i_9]) : (arr_39 [i_8] [i_9]))) + 2147483647)) >> (((((arr_40 [i_8]) ? (arr_39 [i_8] [i_8]) : (arr_40 [i_9]))) + 931)))) : ((((((var_3 ? (arr_37 [i_9] [i_9]) : (arr_39 [i_8] [i_9]))) + 2147483647)) >> (((((((arr_40 [i_8]) ? (arr_39 [i_8] [i_8]) : (arr_40 [i_9]))) + 931)) + 7132))));
            var_21 = (((255 ? (arr_39 [i_8] [i_9]) : (arr_34 [i_8]))));
            var_22 = (((arr_40 [i_8]) > (arr_37 [i_8] [6])));
        }
        arr_41 [i_8] = ((((12 ? 31 : (~28949))) - (((24576 ? 2097152 : var_2)))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_23 = (min((((~(((arr_0 [i_10] [i_10]) | 12482))))), (((arr_40 [i_10]) ? -9080201556399404782 : var_5))));
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        arr_50 [i_11 + 1] [i_11 + 1] [i_13] = ((-12483 ^ (max((arr_8 [i_11] [i_11]), 24))));
                        arr_51 [i_13] [i_10] [i_12] [i_10] [i_10] = (arr_5 [i_10] [i_10]);
                        var_24 = ((var_3 ? (((max((arr_22 [i_10] [i_10] [i_12] [i_13] [i_13] [i_13] [i_13]), 40971)))) : ((4294967286 + (max(202, 3249587592))))));
                    }
                }
            }
        }
        var_25 = (arr_27 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        var_26 = 1;
        var_27 = 225336050;
    }
    #pragma endscop
}
