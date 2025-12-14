/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (1 ^ 190);
                    var_19 = ((105 ? (((arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]) >> (arr_3 [i_0 - 1] [i_2 + 2]))) : ((((arr_5 [i_0 + 1] [i_2 + 3]) <= (arr_5 [i_0 - 1] [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, 20));
                                var_21 ^= ((((3 ? (arr_9 [i_3 + 1] [i_4] [i_3 + 1] [i_4]) : (arr_9 [i_3 - 1] [i_4 - 1] [i_4 - 1] [5]))) / (arr_9 [i_0] [i_1] [i_2] [i_1])));
                                arr_13 [i_1] [i_1] [i_2] [i_3] [i_4] = 3;
                                arr_14 [i_0 - 1] [5] [12] [i_3 - 2] [9] [i_4] [12] = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (((((var_7 ? 3 : ((var_1 ? 182 : var_4))))) ? var_13 : ((((var_14 ? var_5 : var_8)) / var_9))));
    var_23 = var_11;
    #pragma endscop
}
