/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((!((((arr_2 [i_1 + 2] [i_1 + 1]) ? 3089182842 : (arr_2 [i_1 + 2] [16]))))));
                arr_6 [i_1] [i_1] = (arr_2 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [16] [i_3] [i_1] [i_3] = (arr_3 [i_2 + 1] [i_2] [i_2 + 1]);
                            arr_14 [i_0] [i_1] [1] [i_1] [11] = (((arr_0 [i_0]) && ((((arr_0 [i_0]) ? 3089182817 : 3089182842)))));
                            arr_15 [i_0] [i_1] [i_2 + 1] [i_1] = 1205784478;
                            arr_16 [4] [i_1] [4] [i_1] [i_0] = (max(((((((var_13 ? 3089182842 : (arr_9 [i_0] [i_1])))) || ((max(var_8, var_1)))))), (arr_4 [i_1 + 2])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_24 [i_5] [i_0] [i_0] [i_0] &= var_7;
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((((arr_18 [i_0] [i_1 + 1] [i_4 + 1]) ? (arr_18 [10] [i_1 - 1] [i_0]) : var_2)) | (((3089182804 ? (arr_18 [i_4 + 1] [i_1] [i_0]) : 74))));
                            arr_26 [i_0] [i_1] [i_0] [11] = var_11;
                            arr_27 [i_0] [i_1] [i_1] [i_1] = ((-(((!(((-(arr_23 [i_0] [i_1 - 1] [i_5] [i_5])))))))));
                        }
                    }
                }
            }
        }
    }
    var_15 = (!var_11);
    #pragma endscop
}
