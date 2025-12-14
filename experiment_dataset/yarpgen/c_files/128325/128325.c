/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 26410));
    var_18 ^= (((2364257995970075364 != -6944) ? (!-var_7) : var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_19 = (max(var_1, (((((-6951 ? 6943 : 4))) ? 6967 : (arr_0 [i_2])))));
                    arr_7 [i_0] [i_2 + 1] [i_2] = (-8787398818753103354 ? 6967 : 6953);
                }
            }
        }
    }
    #pragma endscop
}
