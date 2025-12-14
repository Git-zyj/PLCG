/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (~var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_2] = (max((((var_1 - (arr_5 [i_0] [i_1 - 3] [i_1 - 3] [i_1])))), (max(var_3, -var_10))));
                    var_15 *= (max(28, 65530));
                    arr_10 [i_0] [i_0] [i_0] = var_2;
                }
            }
        }
    }
    var_16 = var_2;
    var_17 = ((min(((min(var_6, var_6))), (var_3 << var_6))) + (((((((min(var_4, var_13)))) != (min(var_13, var_3)))))));
    #pragma endscop
}
