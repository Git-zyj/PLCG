/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_7 - var_2) ? var_12 : var_2))) || 255));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (1 + 1);
                var_16 = ((((((arr_1 [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_0] [i_0] [i_0]) : ((var_5 ? var_11 : 1))))) ? (((arr_2 [i_0] [i_0 + 2] [i_0 + 2]) + (arr_2 [i_0] [i_0 - 1] [i_0 - 1]))) : ((((arr_2 [i_0 + 4] [i_1] [i_0 + 4]) > var_6)))));
                var_17 = (max(var_17, ((max((arr_3 [i_0] [i_0]), 32256)))));
                var_18 |= 13570;
            }
        }
    }
    #pragma endscop
}
