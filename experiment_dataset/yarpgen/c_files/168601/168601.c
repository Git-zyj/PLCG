/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= 255;
    var_14 = (-9223372036854775807 - 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = 0;
                var_16 = (~9223372036854775807);
                var_17 = 0;
                arr_6 [i_0] = 28672;
            }
        }
    }
    var_18 *= 0;
    #pragma endscop
}
