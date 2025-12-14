/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_12 ^= (((((max(var_2, var_1)) & (arr_1 [i_0 + 2] [i_0]))) >= ((((((arr_1 [i_0 - 2] [i_0]) < 2065022249)) ? ((-(arr_1 [i_0] [i_0 - 2]))) : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0 - 1] [i_0]) : (arr_1 [i_0] [i_0]))))))));
        arr_2 [i_0] = (min((arr_0 [i_0] [i_0]), (max(5917633282853193320, (arr_1 [i_0] [i_0 - 1])))));
    }
    var_13 = var_10;
    #pragma endscop
}
