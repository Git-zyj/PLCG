/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!-16);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((max(-28, (min(-19179, (arr_1 [i_0]))))));
        var_16 = (min(var_16, (((var_2 % (((((26034 ? (arr_2 [8] [i_0]) : var_12))))))))));
        var_17 ^= ((((min((35838 == var_6), var_3))) ? (-127 - 1) : (((max((arr_2 [12] [i_0]), 989168626)) | var_14))));
        arr_4 [i_0] [i_0] = (max((((14146 ^ var_7) ? (max(638855782, 14146)) : (arr_2 [i_0] [i_0]))), ((((((arr_2 [i_0] [i_0]) ? var_7 : 161))) ? var_10 : ((max(var_1, 14150)))))));
    }
    #pragma endscop
}
