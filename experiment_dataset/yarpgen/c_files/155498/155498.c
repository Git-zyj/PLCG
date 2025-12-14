/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_7 ? 11857 : ((var_1 ? 6451276543641942801 : (min(5379052276039280984, var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (arr_4 [i_0] [i_1] [i_1]);
                var_18 = var_1;
            }
        }
    }
    var_19 = var_5;
    #pragma endscop
}
