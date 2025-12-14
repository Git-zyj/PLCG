/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_0));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_20 = (((arr_2 [i_0]) ? (-34 % 1643309806) : (arr_0 [i_0 + 1] [i_0 + 1])));
        var_21 = (max(var_21, (((!(((arr_2 [10]) != (arr_2 [1]))))))));
        var_22 = (min(var_22, -1));
        var_23 = (!-var_8);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_24 |= ((!(max(((!(arr_4 [i_1]))), (((arr_4 [i_1]) || 21270))))));
        var_25 = (((((var_13 ? 255 : ((min(7018, var_15)))))) ? (var_6 | -105) : ((~(arr_4 [i_1])))));
    }
    #pragma endscop
}
