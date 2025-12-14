/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_9;
    var_15 = (max(var_15, (((var_1 || ((min(0, 14730))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_3;
                var_16 = (max((-16487 - 1), ((-(arr_2 [i_0] [2])))));
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
