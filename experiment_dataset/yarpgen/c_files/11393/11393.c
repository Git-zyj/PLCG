/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((~var_9) ? ((0 ? 161 : 0)) : (!var_14))))));
    var_16 = 1;
    var_17 = -283206576;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = 283206566;
                    var_19 = ((((((min(-283206568, -103)) + 1))) ? (~-4133584703251546825) : ((((arr_0 [i_0 - 1]) ? 28245 : 15)))));
                    var_20 = ((-(((min(var_2, 251))))));
                }
            }
        }
    }
    #pragma endscop
}
