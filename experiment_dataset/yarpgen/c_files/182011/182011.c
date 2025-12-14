/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min((0 && 0), (min(var_10, 1))))) > -var_3));
    var_13 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = 0;
                    arr_7 [1] [i_1 - 1] [1] |= arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1];
                }
            }
        }
    }
    var_15 = (min(0, var_2));
    #pragma endscop
}
