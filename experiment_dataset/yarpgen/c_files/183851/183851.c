/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = (min(57056, var_6));
                    var_13 = (var_9 % ((var_1 & (arr_0 [i_2]))));
                    var_14 *= (max((min(var_8, var_0)), (arr_2 [i_0])));
                }
            }
        }
    }
    var_15 = (max(57056, ((min(((min(var_9, 8472))), var_3)))));
    var_16 = var_6;
    #pragma endscop
}
