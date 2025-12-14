/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = var_5;
                var_14 = ((4186112 ? 1 : var_4));
            }
        }
    }
    var_15 = ((((max(480080948, var_3))) ? 267386880 : (((var_6 | 66) ^ var_7))));
    #pragma endscop
}
