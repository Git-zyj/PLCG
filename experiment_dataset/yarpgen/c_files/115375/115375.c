/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_0 [i_0]);
                arr_6 [i_0] [i_1] = ((((125 ? 406053964 : 3417402544)) >= (((((((arr_0 [i_0]) && var_0))) / var_9)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [1] [i_1] [i_3] [i_2] [i_1] [i_1] = ((min((arr_8 [i_0] [i_1 + 2] [i_2] [i_3]), ((max((arr_13 [5] [i_1] [0] [i_3]), 13354))))));
                                var_16 = (((((arr_0 [i_2 + 1]) ? (arr_1 [i_0] [i_0 - 1]) : 175))) ? ((((13351 >= (arr_14 [i_4] [i_1] [i_3] [i_0] [i_4 - 2]))) ? (arr_10 [i_2 + 3] [i_1] [i_4 - 2]) : (2580884605 >= var_3))) : ((((var_8 <= (var_5 % -539331791))))));
                            }
                        }
                    }
                }
                var_17 = (36523 ? 13351 : (((((var_1 ? (arr_10 [i_0 + 1] [i_1] [i_1]) : var_8))) ? (((arr_3 [i_1 - 2] [i_0 - 1]) | (arr_10 [7] [i_1] [1]))) : (arr_8 [i_0] [i_0] [i_0 + 1] [i_1 - 2]))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_18 = var_12;
                            arr_22 [i_1] [i_1] [i_1] [i_6] = (arr_18 [i_0 - 1] [i_0 - 1]);
                            arr_23 [i_6] [i_1] [i_1] = ((((((arr_12 [4] [i_0 - 1] [2] [i_1] [i_5] [i_6]) || ((max(var_6, var_14))))))) - (arr_12 [i_1 - 1] [i_1 + 2] [i_6] [i_6] [i_5] [i_0 + 1]));
                        }
                    }
                }
            }
        }
    }
    var_19 = ((var_12 + (((((var_4 ? 1 : var_1))) ? (var_5 || var_2) : var_5))));
    var_20 = var_11;
    var_21 = var_6;
    #pragma endscop
}
