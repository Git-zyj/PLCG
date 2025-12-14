/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((-(var_15 > var_6))) % ((((8980765270158617481 ? -169203520 : 377881953))))));
    var_17 = (!((max((((var_4 ? var_15 : var_2))), ((var_0 ? var_5 : var_1))))));
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (arr_1 [i_0]);
                var_20 -= (109 / -22832);
            }
        }
    }
    #pragma endscop
}
