/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(1470032576, var_17));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = var_2;
                arr_5 [i_0] = (arr_2 [i_1]);
            }
        }
    }
    #pragma endscop
}
