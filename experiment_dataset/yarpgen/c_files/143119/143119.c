/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = -var_3;
                arr_6 [i_0] [i_0] = 13904795313143948516;
            }
        }
    }
    var_11 *= var_3;
    var_12 &= ((-(((~var_2) ? var_2 : (!var_9)))));
    var_13 = var_10;
    #pragma endscop
}
