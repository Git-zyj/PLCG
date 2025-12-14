/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((!((min(((min(var_3, var_3))), var_7)))));
    var_12 = var_9;
    var_13 -= var_2;
    var_14 = ((min(((min(var_1, var_10))), (~var_0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [11] = (max((~-var_4), var_8));
                    var_15 *= (min(var_4, var_2));
                }
            }
        }
    }
    #pragma endscop
}
