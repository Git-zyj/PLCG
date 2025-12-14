/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_12 = ((((max(21, (arr_0 [i_0 - 1])))) < (((arr_1 [i_0]) ? (arr_2 [i_0 + 2] [i_0]) : (var_6 >> var_6)))));
        var_13 = ((2147483618 ? ((-(max(2147483613, (arr_0 [i_0]))))) : ((var_4 ? var_6 : (arr_1 [i_0])))));
    }
    var_14 = (min(var_11, ((2147483635 ? (!var_3) : 378131149))));
    #pragma endscop
}
