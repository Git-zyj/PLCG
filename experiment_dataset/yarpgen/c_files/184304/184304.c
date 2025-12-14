/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (((((max((arr_3 [i_0 - 1] [i_1]), -9128783703763950929)) << 0)) / (arr_0 [i_1])));
                var_19 = (max((max(-5570999865278610779, 1947482043)), (arr_1 [i_0] [i_0])));
            }
        }
    }
    var_20 = var_6;
    var_21 += var_1;
    #pragma endscop
}
