/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 5719;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [16] [i_0] |= 1526046934;
                arr_7 [8] [0] [8] |= 118;
            }
        }
    }
    #pragma endscop
}
