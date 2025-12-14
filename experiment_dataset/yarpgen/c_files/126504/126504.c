/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (!10714668459803676799)));
                    arr_6 [i_0] [i_0] [i_0] = var_4;
                }
            }
        }
    }
    var_18 = var_13;
    var_19 = var_10;
    #pragma endscop
}
