/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max(((max(var_4, var_15))), (~var_14))), 1383914250486841698));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = (max((~1), ((((max(0, 226))) ? ((min(var_15, var_2))) : (~0)))));
                    arr_9 [2] [i_0] [i_0] = ((+((((arr_4 [i_1 + 1] [i_0]) == 1)))));
                }
            }
        }
    }
    var_17 = 0;
    #pragma endscop
}
