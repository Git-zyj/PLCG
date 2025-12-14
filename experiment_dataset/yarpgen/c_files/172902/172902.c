/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_12 = 1;
        var_13 &= min((((arr_0 [i_0 - 1] [i_0 + 1]) ? (arr_1 [i_0 + 3] [i_0 + 3]) : (arr_1 [i_0 - 1] [i_0 + 4]))), -var_9);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 = ((22960 ? 168290860 : 38));
            var_15 = 1;
            var_16 = (min(-13577, 2392045587));
        }
        var_17 &= (arr_1 [i_0 + 3] [i_0]);
    }
    var_18 = var_4;
    var_19 -= (!1);
    #pragma endscop
}
