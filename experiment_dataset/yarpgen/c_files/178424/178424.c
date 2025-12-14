/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = (arr_3 [2]);
                    var_12 = (0 | 192);
                    var_13 = (arr_3 [i_1]);
                }
            }
        }
    }
    var_14 = min(var_9, (!9223372036854775807));
    var_15 = ((var_5 ^ ((max(var_2, var_8)))));
    var_16 = var_2;
    var_17 |= (786952113 ? 48980 : 101);
    #pragma endscop
}
