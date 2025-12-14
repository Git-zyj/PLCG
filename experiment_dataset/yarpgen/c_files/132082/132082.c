/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = (arr_10 [18] [i_1] [i_2] [1] [i_4] [i_2]);
                                var_20 = ((((min((min(136, 198)), ((((arr_4 [i_0] [1] [i_3] [i_4]) && 198)))))) ? (var_6 / 18) : 219));
                                var_21 = (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3]);
                                var_22 = ((((~(arr_5 [i_1] [i_1] [i_1] [10])))) <= (((min((arr_8 [i_4]), (arr_8 [i_0]))))));
                                var_23 = (max(var_23, ((((-35 != var_16) ^ (min((arr_8 [i_2]), (arr_3 [i_0]))))))));
                            }
                        }
                    }
                    var_24 = (min(1, (min((((1 ? (arr_10 [i_0] [5] [i_2] [i_1] [i_1] [8]) : 219))), (((arr_9 [10] [i_1] [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) : var_5))))));
                    var_25 = (((((var_10 ? (var_12 / var_1) : var_14))) ? var_10 : (arr_2 [i_0] [i_0])));
                    var_26 = ((((((-(arr_1 [9] [i_1])))) ? (arr_9 [i_2] [i_1] [i_1] [i_0] [i_0]) : (((arr_9 [i_2] [i_2] [i_2] [1] [i_2]) ? var_13 : var_12)))));
                    var_27 = (min(var_27, ((min((arr_3 [i_0]), ((-(min((arr_10 [i_0] [i_1] [i_2] [i_0] [7] [i_0]), var_3)))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_28 ^= var_4;

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_29 = (((((0 ? var_7 : (arr_1 [i_5] [1])))) ? 1 : ((-7390611478050413383 ? 1 : var_1))));
                        var_30 -= ((~(arr_19 [i_5])));
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_31 = var_3;
                        var_32 -= ((0 & (~77)));
                    }
                    var_33 = (arr_5 [i_6] [i_6] [i_5] [i_5]);
                }
                var_34 = (min((((arr_21 [12] [i_6] [1] [i_6] [i_6] [i_6]) | (arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))), (arr_14 [i_5] [i_5])));
            }
        }
    }
    #pragma endscop
}
