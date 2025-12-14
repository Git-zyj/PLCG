/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 ^= ((-(max(var_3, (~var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_15 = (((min((arr_1 [i_1 + 1]), 2201513913)) < ((((!(arr_1 [i_1 + 1])))))));
                var_16 = min(((!(arr_2 [i_0]))), (arr_2 [i_1 + 1]));
                var_17 = (1 & (arr_5 [i_0] [i_1 + 1] [i_1]));
            }
        }
    }
    var_18 = min(var_7, var_8);
    #pragma endscop
}
