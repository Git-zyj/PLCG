/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((min(var_3, var_3)) + var_7));
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = min(0, var_1);
                var_15 = (max((min(var_3, 83)), (var_11 >= var_6)));
                var_16 = (max(-1, var_7));
            }
        }
    }
    #pragma endscop
}
