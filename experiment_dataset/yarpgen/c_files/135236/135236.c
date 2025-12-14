/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_17 = (((~268435456) >> (((~0) + 5))));
            var_18 *= (arr_5 [i_0]);
            arr_7 [i_0] [i_1] [i_0] = (((arr_5 [i_0 - 1]) ? 21 : (arr_5 [i_0 + 1])));
        }
        arr_8 [i_0 + 1] = (((((arr_3 [i_0 - 1] [i_0 + 2]) + 2147483647)) >> (((arr_1 [i_0 - 1] [i_0 + 1]) + 102))));
        arr_9 [i_0] = (max(268435456, (4169999009 < 4026531842)));
        var_19 = (max(var_19, 14));
    }
    var_20 = 267896655;
    #pragma endscop
}
