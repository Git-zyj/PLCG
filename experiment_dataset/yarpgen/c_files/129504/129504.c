/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {
                var_16 &= (((((~(-375348161 | -375348154)))) ? (min(9089058412311728288, 39)) : (arr_0 [0])));
                var_17 = (min(var_17, (((375348149 % ((min(39, -37))))))));
            }
        }
    }
    var_18 = (((((var_15 - (~-59)))) ? (((min(2477, 48)))) : (((-40 || 1828223820473574436) + (~var_10)))));
    var_19 &= (((-48 + 2147483647) << (2099855567 - 2099855567)));
    var_20 = (1382764020311440396 + var_14);
    #pragma endscop
}
