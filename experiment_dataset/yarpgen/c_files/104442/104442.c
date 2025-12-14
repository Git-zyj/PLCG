/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = var_2;
                arr_8 [i_0] = 1531799367;
            }
        }
    }
    var_17 = var_6;
    var_18 = var_0;
    var_19 = var_7;
    #pragma endscop
}
