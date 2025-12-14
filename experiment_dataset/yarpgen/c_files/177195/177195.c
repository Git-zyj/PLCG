/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(((~var_1) ? var_1 : ((0 ? var_12 : var_18))))));
    var_20 = var_8;
    var_21 = ((~((var_5 ? 18356378986412366097 : 0))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_22 = ((((min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1])))) ? (max((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1]))) : ((0 + (arr_2 [i_0 + 1])))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_23 = (~((~(arr_3 [i_0 + 1] [i_0]))));
            var_24 = ((((min((arr_4 [i_1]), (arr_1 [i_1] [i_1 + 1])))) ? (((((var_9 ? (arr_2 [i_0 + 1]) : 1))) ? ((max((arr_4 [i_1]), (arr_1 [i_0] [i_1])))) : var_7)) : ((127 >> (220945425 - 220945397)))));
            var_25 = (((((((arr_5 [i_1]) ? (arr_4 [i_1]) : (arr_2 [i_0]))) < (arr_4 [i_1]))) ? (((0 > -112873650) / (((arr_5 [i_1]) / (arr_1 [i_1 + 2] [11]))))) : (((0 ? -7593608089161727521 : 23)))));
        }
    }
    #pragma endscop
}
