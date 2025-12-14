/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_5;
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] &= var_4;
                arr_6 [i_0] = ((((min(((min(1, var_16))), (var_5 & 101)))) & (arr_1 [i_0])));
                arr_7 [i_0] [i_0] [i_0] = arr_4 [i_0] [i_0] [i_0];
                arr_8 [i_0] [i_0] = 1;
            }
        }
    }
    var_19 = ((var_15 != var_10) >> ((((190 ? 66 : 53)) - 36)));
    #pragma endscop
}
