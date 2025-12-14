/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_6));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (((arr_7 [i_2] [i_2 - 1] [i_1] [i_0 + 1]) != var_7));
                    var_13 = var_4;
                }
            }
        }
    }
    #pragma endscop
}
