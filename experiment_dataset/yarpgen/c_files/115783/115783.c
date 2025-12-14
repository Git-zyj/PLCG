/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, ((((((arr_4 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2 + 2]) >> (((arr_4 [i_2 - 1] [i_2 - 2] [i_2 + 1] [i_2 + 1]) - 24271))))) ? (min(var_2, (arr_5 [i_0] [i_1]))) : ((((((arr_4 [i_0] [i_0] [i_1] [i_0]) ? var_7 : (arr_0 [i_2])))) ? var_15 : (((var_9 ? (arr_1 [i_1]) : var_8)))))))));
                    arr_6 [i_0] [i_1] [1] [i_2] |= ((1351633162 ? (~18446744073709551615) : (((arr_5 [i_2 + 2] [i_2 + 2]) ? (arr_5 [i_2 - 1] [i_2 - 1]) : (arr_5 [i_2 + 1] [i_2 + 1])))));
                }
                for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_19 ^= ((((min(var_11, (arr_9 [i_3 - 2] [i_3])))) ? (((arr_9 [i_0] [i_0]) ? (arr_5 [i_0] [i_3 + 1]) : var_3)) : ((((!(arr_5 [i_1] [i_3 + 1])))))));
                    var_20 -= (((((max(var_13, var_0)) ? (min(var_5, (arr_5 [i_1] [i_1]))) : var_10))));
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_21 = (max(((((arr_9 [i_0] [i_1]) + var_10))), (((arr_5 [i_1] [i_4 - 1]) + (min((arr_0 [i_1]), (arr_8 [i_1] [i_1] [i_5] [i_1])))))));
                            arr_17 [i_0] [i_4] [i_4] [i_0] = ((((min(((min(var_0, var_5))), ((var_5 ? var_7 : (arr_15 [i_5] [i_4] [10] [10])))))) ? (max((arr_10 [i_0] [i_1] [i_5]), var_8)) : (((-(max(1351633162, -1351633181)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                arr_22 [i_7] = (((((arr_1 [i_6]) ? ((var_15 ? (arr_5 [i_6] [i_6]) : (arr_8 [i_6] [i_6] [i_7] [i_7]))) : ((max(var_14, (arr_9 [i_7] [i_7])))))) | (max(((var_12 | (arr_3 [i_7]))), ((max((arr_12 [i_6] [i_6] [i_6] [i_7]), var_8)))))));

                for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    arr_27 [i_6] [i_7] [i_6] [5] = (((min(1, 16320))));
                    var_22 = 4850247684233353859;
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    var_23 = arr_24 [i_6] [i_7] [i_9] [21];
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_24 = ((((((arr_20 [i_6] [i_7]) ? var_11 : var_3))) ? (arr_8 [i_10 - 2] [i_10] [i_10 - 1] [i_10 + 2]) : (arr_31 [i_6] [i_7] [i_10 - 1] [i_10] [i_11] [i_7])));
                                arr_35 [i_6] [i_7] [7] [i_10] [i_6] = var_14;
                                arr_36 [i_11] [i_7] [i_7] = ((18412747506949054347 ? 0 : 0));
                            }
                        }
                    }
                    var_25 = ((!(arr_20 [i_6] [i_7])));
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                {
                    var_26 = (max(((((arr_14 [i_6] [i_12] [i_6] [9]) ? (arr_14 [i_6] [i_7] [i_12] [i_12]) : (arr_14 [i_6] [20] [i_12] [i_7])))), (((arr_14 [i_12] [i_6] [i_12] [i_6]) ? var_15 : (arr_14 [i_6] [i_6] [i_12] [i_12])))));
                    arr_39 [i_7] [i_7] = (min(var_1, ((((((var_9 ? (arr_26 [i_6] [i_6]) : (arr_8 [i_6] [i_6] [i_6] [i_6])))) && (arr_4 [i_6] [i_7] [i_12] [i_12]))))));
                }
                arr_40 [i_7] = ((-((((((arr_13 [i_7] [i_7] [i_7] [i_7]) ? var_11 : var_6))) ? (arr_25 [i_6] [i_7] [i_7] [i_7]) : (arr_11 [i_6] [i_6] [i_7])))));
            }
        }
    }
    #pragma endscop
}
