/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (!var_7)));
    var_15 ^= (min(((((~var_7) ? var_0 : var_7))), (((var_8 && var_8) ? ((var_4 ? var_4 : var_4)) : var_3))));
    var_16 = (((((((max(var_10, var_12))) ? ((var_2 ? var_13 : var_7)) : var_2))) ? var_10 : ((~(~var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = var_10;
                var_17 = var_0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 ^= (arr_2 [i_2] [1]);
                            arr_13 [i_1] [i_1] [i_2] = -var_11;
                            var_19 = ((((-((var_3 ? (arr_9 [i_3] [i_2] [7] [i_0 + 1] [i_0]) : (arr_6 [i_0]))))) >= (arr_1 [i_0])));
                            arr_14 [8] [i_1] [i_0 + 1] = var_2;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_21 [i_1] [i_1] [i_4] [i_5] = ((min(13, 55)));
                            var_20 = (2096160144 - 4256241397766300416);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
