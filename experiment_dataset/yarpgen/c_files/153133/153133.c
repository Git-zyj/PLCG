/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(var_3 - -var_7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = min((var_2 && var_6), (min((var_7 - var_4), (var_7 - var_8))));
                    arr_8 [i_0] [i_2] [i_0] = -var_8;
                }
            }
        }
    }
    var_13 = var_5;
    var_14 = var_2;
    #pragma endscop
}
