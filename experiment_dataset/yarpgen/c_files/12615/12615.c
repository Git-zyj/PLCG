/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = min((min(var_10, (min((arr_3 [i_0]), 2980715617920937184)))), 1);
                var_15 ^= -1360243825846192318;
                arr_7 [i_0] = min(((0 ? ((var_7 ? (arr_0 [i_0] [i_0]) : var_10)) : (1 < 1))), ((-1360243825846192314 ? var_2 : var_4)));
                var_16 ^= (arr_6 [i_1] [i_0]);
                var_17 ^= (((0 / -9151349374334292632) % (~1)));
            }
        }
    }
    var_18 *= -1360243825846192341;
    #pragma endscop
}
