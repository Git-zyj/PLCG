/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (arr_3 [4]);
                    var_14 = (arr_2 [3]);
                    arr_7 [i_0] [1] [16] [i_0] = (arr_4 [2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            {
                var_15 = arr_0 [i_3];
                arr_13 [i_3] [i_4] = (arr_0 [i_3]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_16 = 268435424;
                            var_17 = (arr_16 [21] [1] [11] [11] [i_3] [i_4]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_18 = (max(var_18, var_2));
                var_19 = var_9;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_20 = var_8;
                            var_21 = var_5;
                            var_22 |= (arr_4 [i_7]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
