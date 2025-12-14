/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = ((var_6 ? var_10 : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((!(((-(arr_0 [i_0] [i_1 - 1]))))));
                var_17 &= (min(var_8, ((var_8 << (((min(9152577533950521934, (arr_2 [i_0]))) - 55595))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    var_18 = (arr_1 [4] [i_4]);
                    var_19 += ((!((max(9152577533950521924, (min(10805, 9294166539759029692)))))));
                }
            }
        }
    }
    var_20 = (max(var_20, (((-((((1 ? 12703401330338141803 : var_1)) * 1)))))));
    #pragma endscop
}
