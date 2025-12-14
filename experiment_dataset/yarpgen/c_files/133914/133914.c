/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~var_0) ^ 0);
    var_16 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 *= (min(((123 >> ((((max(132, 63))) - 115)))), (((-(arr_11 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 1]))))));
                                arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4] = ((var_4 ? ((min(var_2, (arr_11 [i_0] [7] [i_2] [i_3] [i_4] [i_0 + 1] [i_4])))) : (min(((var_13 ? (arr_4 [i_0] [i_1] [i_2]) : (arr_0 [i_0]))), ((((arr_6 [i_0] [i_3] [i_3]) / var_1)))))));
                                var_18 -= var_10;
                            }
                        }
                    }
                    arr_13 [i_2] [i_0] [i_2] [3] = (((arr_0 [i_0]) && (arr_6 [i_0 + 2] [i_0 + 1] [i_0 - 1])));
                }
            }
        }
    }
    var_19 -= var_12;
    #pragma endscop
}
