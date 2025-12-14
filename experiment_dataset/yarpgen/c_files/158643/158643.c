/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (((var_3 >= ((max(var_7, 15426))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (arr_1 [i_0 + 2]);

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    arr_9 [i_2] = (max(-511, 179));
                    arr_10 [i_0] [i_2] [i_2] = (max(var_3, (((var_9 && (arr_2 [i_2 - 2]))))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_15 = (max(((min((((var_6 <= (arr_7 [i_3] [i_1] [i_3] [i_1])))), var_1))), (min(((min(var_7, var_12))), (arr_0 [i_0 + 1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [1] [1] [1] [i_5] = ((15426 ? var_9 : (((0 + ((var_3 - (arr_7 [i_5] [i_3] [i_3] [i_5]))))))));
                                var_16 = ((~(min(1, ((1 ? 1 : 0))))));
                            }
                        }
                    }
                    arr_21 [i_0] = (((((((1 ? 1 : 0)) & (!var_12)))) && ((max(var_12, var_8)))));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    arr_24 [i_6] = (((arr_23 [i_6]) ? (arr_23 [i_6]) : (arr_23 [i_6])));
                    var_17 = (((arr_18 [i_0] [i_0 + 2] [i_6] [i_6 - 1] [i_0 - 2]) == (arr_15 [i_0 - 2] [i_6 + 1] [i_0 - 2] [i_6])));
                    arr_25 [9] [i_6] [i_6] [i_6] = -6154500465024356508;
                    var_18 = (min(var_18, (((((var_11 && (arr_8 [i_1] [i_1] [i_0 - 3] [i_1]))) ? (((arr_12 [i_0] [i_1] [i_1] [i_6 - 1]) | (arr_6 [i_0 + 2] [i_1] [i_6 - 1]))) : var_11)))));
                }
            }
        }
    }
    var_19 = ((((min(var_7, var_10))) ? var_0 : var_8));
    #pragma endscop
}
