/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_12 = ((min((arr_1 [i_0 + 1] [i_0]), (arr_1 [i_0 - 3] [i_0]))) == (arr_2 [i_0] [i_0 + 1]));
        arr_3 [i_0] = ((((((arr_0 [i_0]) ? 1 : (arr_0 [i_0])))) ? (var_9 + 14755637905160757167) : 12764));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_13 = -10411;
        var_14 = ((var_3 ^ ((var_0 << (((arr_4 [6]) - 88))))));
        var_15 = (((((min(var_3, (arr_5 [i_1]))))) == ((((var_3 ? var_11 : var_11)) % (arr_6 [i_1] [i_1])))));
        var_16 = 5328106885457279901;
    }
    var_17 = var_10;
    #pragma endscop
}
