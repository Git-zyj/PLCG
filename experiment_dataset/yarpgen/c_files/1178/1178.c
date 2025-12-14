/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = ((((min(1, 1) ? ((min(1, var_8))) : var_1))));
                    var_12 = (max(var_12, (arr_0 [i_1] [i_2])));
                    arr_8 [i_1] [i_1] [i_2] = var_7;
                    var_13 = -1;
                }
            }
        }
    }
    var_14 = 4294967271;
    #pragma endscop
}
