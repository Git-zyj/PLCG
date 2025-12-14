/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 3968;
    var_13 = ((var_8 ? (max(-3547707070164711694, -3547707070164711694)) : ((var_8 / ((2467307988 ? -3547707070164711694 : var_1))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((((1 ? (arr_0 [i_0 + 1] [i_0]) : 63674))) ? (((!((((arr_0 [3] [i_0]) / (arr_1 [i_0]))))))) : ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) == (var_1 != var_0)))));
        arr_3 [i_0] = 3547707070164711693;
        arr_4 [9] = ((((min(373616148, -3547707070164711694))) ? 3547707070164711694 : 1));
        arr_5 [i_0] = ((25954 & (((arr_0 [i_0] [i_0 - 1]) ? (min(var_8, (arr_1 [0]))) : (arr_1 [i_0 + 1])))));
    }
    #pragma endscop
}
