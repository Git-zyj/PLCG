/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((((max(19490, var_0)) ^ (((max(var_9, var_9))))))) != (max(var_9, (var_4 / var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = (arr_2 [i_1]);
                    arr_8 [i_2] [i_1] [i_0] |= var_5;
                    var_12 = (((var_2 ? 19490 : 166)));
                }
            }
        }
    }
    var_13 &= ((19490 ? (((((var_2 ? var_0 : var_8)) > var_1))) : ((var_3 ? 256 : 19490))));
    var_14 = (max(var_14, (max(var_0, var_7))));
    var_15 = var_4;
    #pragma endscop
}
