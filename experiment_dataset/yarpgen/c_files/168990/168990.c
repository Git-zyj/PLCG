/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(var_13, (min(var_6, ((max(692744221216659437, 692744221216659437))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 *= 692744221216659435;
        var_19 -= (max(-692744221216659432, (((max((arr_1 [i_0]), 692744221216659450)) | 692744221216659437))));
        arr_2 [11] [11] &= ((((min(17200287916917677175, 692744221216659431))) ? (min(((49 ? (arr_1 [i_0]) : 352085833)), 2618116281227879723)) : ((((54075 <= (max(8367705548769538682, (arr_0 [i_0] [i_0])))))))));
    }
    var_20 = (min(692744221216659453, (min((max(8367705548769538682, 8367705548769538682)), (var_12 + var_13)))));
    var_21 = (~(((!((min(-4761642347604111245, 1)))))));
    var_22 = ((352085819 == (max(((max(var_15, var_1))), (max(-692744221216659432, -692744221216659429))))));
    #pragma endscop
}
