/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (arr_0 [i_0] [i_0])));
                var_13 = (~1);
            }
        }
    }
    var_14 += -6582;
    var_15 = (~var_3);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                arr_12 [i_2] = (arr_6 [i_3]);
                var_16 = (~1);
            }
        }
    }
    #pragma endscop
}
