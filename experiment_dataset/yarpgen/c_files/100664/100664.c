/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= 1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (min(var_14, (~var_3)));
                    var_16 = var_0;
                }
            }
        }
    }
    #pragma endscop
}
