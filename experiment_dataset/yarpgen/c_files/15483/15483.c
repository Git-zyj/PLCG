/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = (2567734959072813851 ^ var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = (((-var_8 + 2147483647) >> (((((max(var_5, var_6))) || var_10)))));
                    var_19 = (max(3693282370, -122));
                    arr_7 [i_2] = var_11;
                    var_20 = (max((((max(601684925, var_13)))), (var_6 % var_5)));
                }
            }
        }
    }
    var_21 = var_5;
    var_22 = (var_11 / 2147483647);
    #pragma endscop
}
