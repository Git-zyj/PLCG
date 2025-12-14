/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_12 = (55504 ^ 7);
        var_13 = ((!(((-65013 ? (((arr_2 [13]) - var_7)) : (((max((arr_1 [i_0]), var_3)))))))));
        var_14 -= ((-(max((((arr_0 [5] [5]) ? (arr_1 [2]) : (arr_1 [i_0]))), (arr_1 [i_0 + 2])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 = (arr_4 [i_1]);
        var_16 = ((!(arr_3 [i_1])));
        var_17 = (min(var_17, (((!(((~(arr_5 [i_1])))))))));
    }
    var_18 = ((-(0 == 11403978534323734633)));
    #pragma endscop
}
