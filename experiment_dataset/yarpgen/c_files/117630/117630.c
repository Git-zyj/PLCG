/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((~((max((arr_2 [i_0]), 13944)))));
                arr_6 [i_1] = 65060;
                arr_7 [i_0] = 215;
                arr_8 [i_0] [i_0] [14] = var_10;
            }
        }
    }
    var_20 = ((((((var_17 | var_0) | (65060 >= -26655)))) ? var_12 : ((~((31 ? var_2 : var_16))))));
    var_21 = var_3;
    #pragma endscop
}
