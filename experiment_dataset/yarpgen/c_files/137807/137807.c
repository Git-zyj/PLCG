/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((max(var_6, var_6)))) ? (min(2737056802, 384852440)) : ((max(var_1, -var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (var_6 || 37)));
                arr_5 [3] [i_0] [i_1] = -384852435;
                arr_6 [i_0] [i_0] = (-2064466569 + 384852433);
                var_14 ^= ((384852440 ? 720665778 : 2105169580));
            }
        }
    }
    var_15 = ((((min((var_2 && var_4), 720665786))) ? 3574301534 : 11971));
    #pragma endscop
}
