/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = var_4;
                    arr_11 [i_0] = ((!((0 == ((((arr_4 [i_0] [9] [9]) || 0)))))));
                    arr_12 [i_1] = (!54020);
                }
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
