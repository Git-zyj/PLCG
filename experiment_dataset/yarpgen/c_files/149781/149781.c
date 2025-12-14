/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = var_12;
                    var_17 = (max(var_17, (((((3661703486 ? 127 : 206)) == (((var_0 != (arr_3 [i_0] [i_0] [i_2 + 2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
