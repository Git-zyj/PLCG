/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((-(((arr_4 [i_0] [i_0] [i_1]) ? 15 : var_10)))))));
                var_17 = (max(var_17, 11));
                var_18 ^= min(470657167, 15);
                var_19 ^= (2 >= 15);
            }
        }
    }
    #pragma endscop
}
