/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [9] = (((((arr_0 [i_0] [6]) ? (var_10 | 9223372036854775799) : 9223372036854775777)) - var_4));
                arr_6 [i_0] [i_1] = (arr_0 [4] [11]);
                var_18 = ((!(arr_3 [i_0] [i_0] [i_0])));
                var_19 = 117;
                var_20 |= ((((arr_1 [i_1]) < (125 - 1536))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [i_2] = var_5;

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_20 [i_5] [i_4] [i_2] [i_2] [i_2] [i_2] = 14979088842210651001;
                        arr_21 [i_4] = ((var_8 < (arr_12 [i_2] [i_5] [i_4])));
                        arr_22 [i_5] [i_3] [i_3] [i_2] [i_2] = (((arr_14 [i_4] [i_5]) ? (min((((arr_12 [i_5] [i_2] [i_2]) ? 9223372036854775777 : 1)), (arr_19 [i_5] [i_4] [i_3] [i_2]))) : (arr_18 [i_5] [i_4] [i_4] [i_3] [i_2] [i_2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
