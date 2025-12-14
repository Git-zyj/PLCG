/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 152;
    var_17 = (max(var_17, 7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_18 |= var_13;
                            arr_10 [i_0 - 1] [i_1] [i_0 + 1] [i_1] = var_1;
                            arr_11 [0] [i_1] [i_2] [i_1] = (arr_9 [i_1] [i_2] [i_1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_19 = (max(var_19, 8078781502425048100));
                            arr_18 [i_1] = (arr_0 [i_0]);
                            arr_19 [i_1] [i_1] = var_3;
                            arr_20 [i_0 - 2] [i_1] [i_0] [i_0 + 1] = (arr_15 [i_5] [i_4] [i_1] [i_0]);
                        }
                    }
                }
                arr_21 [i_0 + 1] [i_1] = 4095;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_20 ^= 21;
                            var_21 = 1;
                            arr_26 [i_0] [i_1] [i_1] [i_7] = var_2;
                            arr_27 [i_1] [i_0 - 2] [i_7] [i_7] [i_0] &= 8078781502425048108;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
