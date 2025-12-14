/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~689752931);
    var_16 = (max((max((min(6556478970713018999, 185)), (var_5 - var_9))), (((~((var_9 ? var_11 : 87)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = var_1;
                    arr_7 [i_0] [i_1 + 1] [i_1 + 1] = (min(((min(2147483647, 65535))), 45500));
                }
            }
        }
    }
    #pragma endscop
}
