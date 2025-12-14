/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = ((((max((arr_1 [i_0] [i_0]), ((-1808036904 ? var_6 : (arr_0 [13])))))) ? ((max(1808036910, (-1808036904 > var_3)))) : (((((arr_2 [i_0]) <= 1808036910)) ? -var_11 : (max((arr_0 [i_0]), (arr_3 [i_0])))))));
        arr_4 [i_0] |= (max(-31007, 32759));
    }
    var_16 = ((!((max(1808036904, var_6)))));
    var_17 = -32761;

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 = ((((((arr_6 [i_1]) ? var_9 : var_12))) & (max((arr_5 [i_1]), (var_6 & 797188227)))));
        var_19 = (~var_13);
        arr_7 [i_1] = ((((max(((-(arr_6 [18]))), var_1))) ? (max(var_8, (max((-9223372036854775807 - 1), 9223372036854775807)))) : ((((arr_5 [i_1]) ? (arr_6 [i_1]) : var_7)))));
    }
    #pragma endscop
}
