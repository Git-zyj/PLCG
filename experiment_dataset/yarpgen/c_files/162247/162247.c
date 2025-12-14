/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 > (min(var_8, var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (arr_0 [i_1]);
                arr_4 [i_0] = (((((-106 | (((((arr_1 [i_0]) < 198))))))) || (!59)));
                var_16 = ((((-59 ? -74 : -62)) + 175));
            }
        }
    }
    var_17 = 24834;
    var_18 = var_12;
    #pragma endscop
}
