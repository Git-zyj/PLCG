/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -4256406843637736840;
    var_21 = (max(var_21, ((((var_16 | (((var_15 << (216 - 211))))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 += ((-(arr_0 [i_0] [i_0])));
        var_23 ^= arr_1 [i_0];
        var_24 = (min(var_24, ((min(((((5321177774843295136 ? (arr_2 [i_0]) : (arr_2 [i_0]))) + ((max((arr_2 [i_0]), (arr_0 [11] [5])))))), ((65535 ? ((min((arr_2 [i_0]), (arr_2 [i_0])))) : var_12)))))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_25 = (min(var_25, (0 + 61920)));
        var_26 = (arr_4 [i_1 - 1]);
        var_27 += (arr_4 [17]);
        var_28 = var_4;

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_29 = (!(arr_6 [i_1 + 2] [i_1 + 4]));
            var_30 *= ((3 < (arr_5 [i_1] [i_2])));
            var_31 = (~var_11);
            var_32 = 42;
        }
    }
    #pragma endscop
}
