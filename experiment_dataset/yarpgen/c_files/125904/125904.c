/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (min((min((var_4 & var_13), ((max(var_8, var_9))))), ((max((var_10 == var_10), (max(var_11, var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = (max((((((((((arr_2 [i_1] [19]) + 2147483647)) >> (var_12 - 3733326081)))) ? (max(var_8, var_7)) : var_8))), (((((arr_14 [i_3] [i_1]) ? (arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] [i_1] [i_3]) : var_1)) + (var_3 + var_1)))));
                                var_16 = -var_8;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_17 = var_6;
                                var_18 = var_11;
                                var_19 = (min((max(((max(var_2, var_7))), ((var_0 | (arr_9 [i_0] [i_1]))))), (((((var_8 ? var_12 : var_11)) + ((((arr_13 [i_0] [i_0] [22] [i_5] [i_0]) - var_1))))))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_20 = (arr_23 [14] [i_1] [i_7] [i_8]);
                        arr_26 [i_1] [i_1] [i_1] = ((((-var_2 + ((max((arr_7 [5] [13] [i_8]), (arr_10 [i_1])))))) == (((((((arr_8 [i_8] [i_7] [i_1] [i_0]) + 2147483647)) >> (var_7 - 1246847462))) >> ((((-(arr_12 [18] [3] [i_0]))) - 4586345626203222043))))));
                    }
                    arr_27 [i_0] [i_0] [i_7] [i_1] = (min(var_4, (((var_10 | var_4) | var_4))));
                    var_21 = (max(var_12, (((((((var_6 == (arr_0 [i_7]))))) >= var_13)))));
                }
                arr_28 [i_1] [i_0] [i_1] = ((((var_12 && (arr_8 [i_1] [i_0] [i_1] [9]))) && ((min((arr_8 [i_0] [6] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_1] [0]))))));
            }
        }
    }
    #pragma endscop
}
