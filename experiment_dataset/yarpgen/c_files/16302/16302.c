/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = (((((arr_5 [20] [i_3 + 2]) ? var_2 : (arr_5 [i_2] [i_3 - 1])))) ? (arr_2 [i_0] [9]) : (((arr_11 [i_2] [i_2]) ? (~var_4) : var_3)));
                                arr_13 [i_3] [i_1] [i_2] [i_3] [i_4] = (min((((arr_7 [i_0] [i_1] [i_2] [i_1] [i_3]) ? 1 : var_9)), ((((arr_7 [i_0 - 4] [i_0 + 1] [i_0] [i_0] [i_0 - 1]) == (arr_7 [16] [i_1] [i_2] [i_2] [i_2]))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_0] = (((arr_0 [i_0 - 1]) / (arr_0 [i_0 + 1])));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_14 = -32;
                                var_15 = (max(var_15, (((((((arr_21 [i_5 - 1] [i_7] [i_6]) ? (max(var_1, var_0)) : (arr_20 [i_6])))) ? var_0 : ((0 % (((arr_23 [i_0] [i_1] [i_1] [i_5] [i_0] [i_1]) & -1854481017)))))))));
                                var_16 ^= (((((((arr_3 [i_1] [i_1]) ? var_3 : 1493160324))) + ((var_3 ? (arr_23 [i_0] [i_0] [i_1] [i_5 + 1] [i_1] [i_0]) : var_1)))));
                                var_17 ^= (((!(arr_12 [9] [9] [i_5] [i_5] [i_5] [i_5 - 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
