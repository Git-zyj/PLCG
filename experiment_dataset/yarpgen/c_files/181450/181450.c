/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (min((min(var_1, -var_12)), var_5));
    var_15 = (-var_10 ? (((var_4 ^ var_12) >> (var_3 + 76))) : (-19416 - -124));
    var_16 += ((var_5 >> (var_7 + 2305523709457640421)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = var_1;
                var_18 = (max(((((var_3 + 2147483647) << (var_6 - 34167)))), ((var_6 | (min(var_12, var_2))))));
            }
        }
    }
    #pragma endscop
}
