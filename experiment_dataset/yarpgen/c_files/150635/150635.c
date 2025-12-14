/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = 18446744073709551596;
                    var_18 &= (((65513 * -16384) / ((((((max(var_0, var_14))) + 2147483647)) >> (((arr_6 [12] [i_2 + 3] [12]) + 4785872061867905296))))));
                    arr_9 [i_0] [i_1] [i_0] = var_11;
                    arr_10 [i_1] [i_1] [i_1] [i_1] = (~4);
                }
            }
        }
    }
    var_19 = -378249525;
    var_20 = (max(var_20, ((((var_6 * (var_15 / var_2)))))));
    #pragma endscop
}
