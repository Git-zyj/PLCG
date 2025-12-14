/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((~(arr_2 [i_0] [i_0])));

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0] = (min(((min((min((arr_0 [i_0]), 10457)), (arr_5 [i_0 + 1] [1] [i_0])))), ((~(arr_4 [i_0] [i_1 + 2])))));
            var_11 *= (arr_5 [i_0] [16] [i_1]);
        }
        var_12 = ((((~(~6)))) ? ((((((arr_0 [i_0]) & 166))) ? ((28905 ? var_4 : (arr_0 [i_0]))) : (~var_2))) : ((((((~(arr_1 [i_0] [i_0 - 2])))) ? 161 : var_3))));
    }
    var_13 = var_4;
    #pragma endscop
}
