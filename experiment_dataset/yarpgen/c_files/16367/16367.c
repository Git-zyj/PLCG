/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 *= ((((min((max(var_5, 32)), var_0))) << (1152919305583591424 - 1152919305583591411)));
                arr_5 [i_0] [i_1] [i_1] = (min((min(-1152919305583591425, (min(8456484233233121985, var_2)))), -7899635808658460403));
            }
        }
    }
    var_12 |= (((((max(1, var_10))) * (min(var_10, 962072674304)))));
    #pragma endscop
}
