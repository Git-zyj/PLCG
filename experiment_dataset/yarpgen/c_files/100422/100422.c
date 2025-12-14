/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!((((max(1, -7465166845291374017)) << ((((max(255, var_7))) - 224))))));
    var_14 += (min(var_8, (max(var_0, (min(1, var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (max(1, 1));
                    var_16 -= (min(2054978346958880034, ((max(1, 0)))));
                }
            }
        }
    }
    var_17 = (min(var_17, (((var_0 != (!-20))))));
    #pragma endscop
}
