/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((-25415 * 64), ((var_7 ? var_7 : ((var_6 ? var_1 : var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = var_2;
                    arr_7 [i_2] [i_2] = var_4;
                }
            }
        }
    }
    var_12 = var_1;
    #pragma endscop
}
