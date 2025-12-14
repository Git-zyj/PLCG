/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_12 ^= var_5;
                        var_13 = (max(var_13, ((((var_3 && var_2) / var_8)))));
                    }
                    var_14 = var_7;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                {
                    arr_13 [i_4] [1] [1] [0] = var_10;
                    var_15 &= var_6;
                }
            }
        }
        var_16 = (max(var_16, (((((arr_8 [i_0] [13] [i_0] [i_0] [1] [0]) * var_4))))));
    }
    #pragma endscop
}
