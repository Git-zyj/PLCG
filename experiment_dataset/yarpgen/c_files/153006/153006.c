/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = 247;
                    var_21 = (max(var_21, ((((20550 ? -8265 : 333153679754836890))))));
                }
            }
        }
    }
    var_22 = 255;
    #pragma endscop
}
