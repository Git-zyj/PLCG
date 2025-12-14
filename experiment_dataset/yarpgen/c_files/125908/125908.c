/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((var_17 ? ((((((max((arr_3 [i_0] [i_1] [i_1]), 16))) && var_11)))) : (max(var_15, 35)))))));
                arr_6 [8] [i_1 - 1] [i_0] = var_16;
                arr_7 [18] [i_0] = var_17;
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
