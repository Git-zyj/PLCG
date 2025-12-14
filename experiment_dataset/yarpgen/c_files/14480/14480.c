/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (max(((var_0 ? var_13 : var_10)), 67108863));
    var_18 = (((((var_16 ? var_0 : (-67108863 == var_7)))) ? var_9 : var_1));
    var_19 = ((((max(65535, (max(var_3, 1722674342))))) >= -5117063591319392595));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (524287 > 1869488825);

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_1 - 1] [i_2] [i_1] [i_4] = (((~(arr_3 [i_1 - 1]))));
                                arr_13 [i_0] [13] [i_2] [i_3] [i_1] = (max((arr_1 [0]), (arr_6 [i_1 - 1] [i_1])));
                                var_21 = 1334241071;
                                arr_14 [i_1] [3] [i_3] [i_2] [i_1] [i_1 + 1] [i_1] = (max(2572292953, (((((max(100, (arr_5 [i_0] [i_0] [7])))) ? (arr_2 [4]) : 1719002509)))));
                                var_22 = (min(var_22, (((((max((((arr_5 [0] [i_3] [0]) / 1682245632)), ((max(0, -1)))))) ? 12268 : (~12636255999606639333))))));
                            }
                        }
                    }
                    var_23 = arr_4 [i_1] [i_2];
                }
                arr_15 [i_1] [i_1] = (arr_10 [i_0] [i_0] [i_0] [9] [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
