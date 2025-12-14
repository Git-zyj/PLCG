/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = var_10;
    var_14 = (max(var_14, (((var_1 ? var_1 : (((~-18016) ^ var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_2 + 2] [i_0] [i_0] = (10419 <= 1373511169);
                    var_15 *= (arr_0 [i_1] [i_1]);
                }
            }
        }
    }
    var_16 |= var_0;
    #pragma endscop
}
