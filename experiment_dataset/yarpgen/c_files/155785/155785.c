/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1 - 2] [i_1 + 1] [i_2] = ((65090 ? (((var_12 < ((((-24809 != (arr_2 [i_0])))))))) : var_11));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] = ((-((var_0 ? (arr_12 [i_1]) : var_16))));
                            arr_14 [i_0] [i_3] = (((((arr_11 [i_1] [i_1] [11] [i_1] [i_4] [i_2 - 2]) ? (arr_10 [i_0] [i_1] [i_0] [i_2] [i_3] [i_1] [i_4 - 2]) : 2228647302344256720)) >> ((((arr_8 [i_2] [i_2] [i_3] [i_4]) > (arr_11 [i_4 - 2] [i_3] [i_0] [i_1] [i_0] [i_0]))))));
                            arr_15 [i_1] = ((-((2737187460 ? (arr_0 [i_0] [i_1 - 3]) : var_0))));
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_0 - 1] [i_0] [i_3] = (arr_9 [i_0] [i_1] [i_2] [i_2] [i_4]);
                            arr_17 [i_0] [i_1 - 3] [i_1] [11] [i_4 + 1] [i_2 - 2] = (((-20144 + 2147483647) << (61 - 61)));
                        }
                        for (int i_5 = 3; i_5 < 15;i_5 += 1)
                        {
                            arr_20 [i_0 + 1] [i_3] [i_1 + 1] [i_2 - 1] [8] [14] [14] = var_13;
                            arr_21 [i_2] [i_1] [i_1] [i_3] [i_5] = (((var_13 ? var_14 : (arr_9 [i_3] [i_5] [i_2 - 1] [i_3] [i_3]))));
                            arr_22 [i_1] = ((((-2228647302344256721 ? -20488 : -5735217157833020262)) > (((((arr_2 [i_1]) > (arr_1 [10] [i_1 - 1])))))));
                            arr_23 [i_0 + 1] [i_0] [i_2] [i_3] [i_5] = ((~(((1485868786 >= (arr_12 [i_0]))))));
                            arr_24 [i_1] [i_1] [i_2] = (arr_10 [9] [i_1 - 1] [i_1] [i_0 + 2] [i_5] [i_2] [i_5 - 3]);
                        }
                        arr_25 [i_0] [i_1] [i_2 - 2] [i_1] = ((-61 ? 20487 : 0));
                        arr_26 [i_1] [i_1] [i_1] [i_0] = (((((var_10 >> (((arr_19 [i_0] [i_1] [i_0]) + 946547689))))) ? (arr_0 [i_0 + 2] [i_1]) : -6559991460811513077));
                        arr_27 [i_0] [i_1 - 1] [i_1] [i_3] = (((arr_0 [i_1 - 1] [i_1 - 3]) + (arr_0 [i_1 - 3] [i_1 - 3])));
                    }
                    arr_28 [i_1] [i_2] = ((~(var_8 - -6785268457574152613)));
                    arr_29 [i_0 + 2] [i_0 + 2] [i_2] &= (max(((var_12 ? ((max(var_5, (arr_2 [i_2])))) : (arr_3 [i_1 - 1] [i_1] [i_1]))), ((20488 + (max(157, 1485868767))))));
                }
            }
        }
    }
    var_17 = var_10;
    var_18 = (max(((var_13 ? ((min(0, var_4))) : ((0 ? 0 : 6610)))), (((var_9 / ((21 ? var_3 : -20488)))))));
    #pragma endscop
}
