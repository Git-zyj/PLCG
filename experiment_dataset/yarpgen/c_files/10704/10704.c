/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (max(var_18, var_0));
                var_19 = (((((-(arr_3 [i_0] [i_0 + 1] [i_0]))) & 9223372036854775807)));
            }
        }
    }
    var_20 = (min(var_20, ((max(((var_7 ? var_3 : ((var_4 << (255 - 241))))), var_3)))));
    #pragma endscop
}
