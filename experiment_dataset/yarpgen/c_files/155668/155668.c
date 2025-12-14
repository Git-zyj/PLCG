/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (min(var_9, ((min(1073741824, var_14)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 -= ((min(var_4, var_15)));
                    arr_6 [i_0] [i_1] [i_0] = var_2;
                }
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
