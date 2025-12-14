/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 += var_9;
                var_14 = var_0;
                arr_5 [4] [4] [i_1] = (max((((var_7 ^ var_10) & (var_0 & var_4))), ((((((var_2 ? var_5 : var_2))) ? var_4 : ((var_11 >> (var_7 + 79))))))));
                var_15 += ((32767 ? ((min(1, 1))) : 1));
            }
        }
    }
    #pragma endscop
}
