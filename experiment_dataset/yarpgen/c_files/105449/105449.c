/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = ((((max(-var_10, (min((arr_1 [9]), (arr_4 [8] [i_0])))))) ? 24164 : (((!((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_5))))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_12 = var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_4, (arr_6 [i_3])));
                                var_14 = ((-29412 ? -29411 : (((32045 ? 29400 : 1)))));
                                arr_14 [i_0] [4] [i_2] [i_2] [i_3] [10] = ((min(var_8, (arr_13 [i_0] [i_1] [i_4 - 1] [i_3] [i_4]))));
                                var_15 = (max(var_15, (((~((((max((arr_6 [i_4]), -29400))) ? (var_2 != var_8) : ((max(var_7, var_7))))))))));
                                var_16 = (max(var_16, (((((((arr_13 [i_2] [i_1] [i_4 + 1] [i_1] [i_4 + 1]) ? ((10087 ? var_6 : var_0)) : var_1))) ? ((max((arr_2 [i_0] [i_1] [i_3]), (arr_9 [i_3])))) : (((arr_9 [i_3]) ? var_6 : (arr_8 [i_3]))))))));
                            }
                        }
                    }
                    arr_15 [i_2] [i_1] = (max((!var_5), ((var_8 ? var_5 : var_2))));
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_23 [1] [i_1] [1] [i_1] [i_5] [i_6 + 3] [i_7 + 1] = (((max(var_3, ((min((arr_18 [i_5] [i_1]), (arr_13 [i_0] [i_1] [i_5] [1] [i_7])))))) < (arr_12 [i_0] [i_0] [10])));
                                arr_24 [1] [1] [1] [i_6] [i_7 - 2] = ((((min(var_2, ((min(1, 26994)))))) ? ((((((var_0 ? (arr_19 [i_6] [i_6] [i_6]) : var_4))) ? ((max((arr_9 [i_7]), var_7))) : (((arr_1 [i_0]) ? var_2 : var_2))))) : ((((max((arr_20 [i_0] [i_0] [i_1] [i_5] [i_6] [i_7]), (arr_12 [i_6] [i_5] [i_1])))) ? 29373 : ((var_2 ? var_5 : (arr_20 [i_5] [i_6 - 2] [i_5] [i_5] [8] [7])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, ((max(((var_10 ? var_5 : var_8)), var_3)))));
    var_18 = (-2147483647 - 1);
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            arr_35 [i_10] [i_10] [i_10] = (((((((var_4 ? var_9 : (arr_32 [i_8] [i_8] [i_8] [i_10])))) || -var_4)) ? var_2 : (arr_30 [i_11] [i_10] [10] [10])));
                            var_19 = (max(var_19, 1));
                            var_20 = (max(var_20, ((!(arr_34 [i_8] [i_8] [i_9] [i_9] [6] [i_11])))));
                        }
                    }
                }
                var_21 = (min((min(6240301701625401437, 29387)), ((max((arr_30 [14] [i_9] [i_9] [i_9]), (arr_30 [7] [i_9] [i_9] [i_9]))))));
                var_22 = ((max(((-(arr_34 [i_8] [i_9] [i_9] [i_9] [i_9] [16])), (~var_0)))));
                var_23 = (min((arr_27 [i_8]), ((min((arr_33 [i_9] [i_9] [i_9] [i_8]), (arr_33 [1] [i_8] [i_9] [i_9]))))));
            }
        }
    }
    #pragma endscop
}
