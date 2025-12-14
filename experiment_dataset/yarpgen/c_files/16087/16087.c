/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((min(var_10, var_12))) ? (max(var_13, var_10)) : var_0))) ? ((((min(var_10, var_4))) ? -var_7 : var_4)) : var_0);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((max((var_2 != var_2), ((-(arr_0 [i_0]))))));
        var_18 = max(var_14, ((((arr_1 [i_0] [i_0]) ? var_7 : var_9))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 = (max(var_19, (arr_4 [i_1])));
            arr_7 [i_0] [i_1] [5] = (var_14 ^ var_16);
        }
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_20 = (var_10 <= (((arr_8 [i_2]) ? (arr_10 [i_2] [i_2]) : (arr_10 [i_2 - 1] [i_2 + 1]))));
        var_21 = var_15;
        arr_11 [i_2] = var_14;
    }
    var_22 ^= -var_0;
    #pragma endscop
}
