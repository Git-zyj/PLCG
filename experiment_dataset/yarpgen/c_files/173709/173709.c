/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(-14674, var_0)))));
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (((-(arr_3 [i_0 - 1]))));
                var_16 = 1;
                var_17 = (((arr_1 [23] [1]) ? ((~(!-87))) : 0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 *= ((~(~var_7)));
                            arr_12 [2] [0] [1] [3] [3] = (arr_11 [4] [4] [1] [2]);
                        }
                    }
                }
                arr_13 [18] = ((-(min((max((arr_8 [21] [7] [2] [16]), 0)), (!65523)))));
            }
        }
    }
    #pragma endscop
}
