/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -2097691724;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = var_4;
                    var_21 ^= ((min(var_6, (max(4294967295, 20)))));
                    var_22 = 2097691714;
                }
            }
        }
    }
    var_23 = ((-1 ? var_3 : 32767));
    var_24 = var_2;
    #pragma endscop
}
