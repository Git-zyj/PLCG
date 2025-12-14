/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= -50;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((min(12045, (arr_7 [i_0 - 1] [i_2] [i_2] [i_0 + 3]))))));
                    var_15 = (max(var_15, -58));
                }
            }
        }
    }
    #pragma endscop
}
