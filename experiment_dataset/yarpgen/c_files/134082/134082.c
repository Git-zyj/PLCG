/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (arr_7 [i_1] [3] [i_1] [i_2]);
                    var_20 -= (((arr_4 [10] [i_1]) ? (((-(arr_3 [4])))) : var_17));
                }
            }
        }
    }
    var_21 = ((118 * ((((max(var_5, var_3))) ? (var_6 / var_15) : (var_5 * var_2)))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_22 [i_5] [i_5] [i_5] [i_7] = (arr_12 [i_3] [i_5] [i_7]);
                                arr_23 [i_5] = ((!((((var_3 >> (118 - 112)))))));
                            }
                        }
                    }
                    arr_24 [i_3] [i_5] [i_5] = (arr_18 [i_3] [i_4] [22] [i_4 + 3] [i_3]);
                    arr_25 [i_3] [i_4] [i_4] [i_5] = (max(((((arr_15 [i_5] [i_5] [i_5]) || (arr_15 [i_5] [i_4] [i_5])))), (arr_12 [i_3] [i_3] [17])));
                }
            }
        }
    }
    #pragma endscop
}
