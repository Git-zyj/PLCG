/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_11 ? 25640 : var_9)))) ? (max((max(var_5, var_0)), var_11)) : ((((((25613 ? var_4 : var_7))) ? 18873 : 22679)))));
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (arr_4 [i_0])));
                    var_15 &= (!var_3);
                }
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
