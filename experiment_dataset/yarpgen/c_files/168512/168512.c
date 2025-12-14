/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = var_2;
                    var_17 = var_3;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = var_10;
                        arr_11 [i_0] [i_1] = var_1;
                    }
                }
            }
        }
    }
    var_19 = var_8;

    /* vectorizable */
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        var_20 = var_2;
        var_21 |= var_6;
        var_22 |= var_2;
        var_23 = (max(var_23, var_10));
    }
    #pragma endscop
}
