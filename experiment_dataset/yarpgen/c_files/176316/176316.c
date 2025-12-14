/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [7] [i_0] = (90316755 >> 0);
                arr_8 [i_0] = (min((arr_1 [i_0 - 1] [i_0 + 1]), (((arr_4 [i_0 - 1]) ? (((min((arr_3 [i_0] [7]), 2747)))) : ((0 ? 4204650540 : 9068622537266212405))))));
                var_12 = (31 / 4204650540);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_21 [i_2 - 1] [i_2 - 1] [i_4] [i_2 - 1] [i_2 - 1] = ((((((-(arr_17 [i_4 + 1] [i_5]))))) ? var_7 : (arr_15 [i_4] [12] [i_4])));
                            arr_22 [i_2] [i_2] [i_3] [i_2] [i_4] [i_2] = ((0 ? 207 : ((18446744073709551615 ? 1 : -492175809824434593))));
                        }
                    }
                }
                arr_23 [21] = ((-((var_8 ? 28596 : -63))));
            }
        }
    }
    var_13 = 63;
    #pragma endscop
}
