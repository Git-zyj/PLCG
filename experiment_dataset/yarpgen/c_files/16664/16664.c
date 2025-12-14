/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_16 = (min((((((arr_1 [i_0]) == 1)) ? ((6448894787757338599 ? (arr_0 [i_0] [i_0 - 1]) : (arr_1 [i_0 + 1]))) : (arr_0 [i_0] [i_0]))), ((((!(arr_0 [5] [i_0]))) ? ((((arr_0 [i_0] [11]) <= (arr_1 [9])))) : (arr_0 [i_0] [3])))));
        var_17 = ((~(((((var_12 ? -1 : (arr_1 [i_0])))) ? 6448894787757338599 : (arr_1 [i_0 - 1])))));
    }
    var_18 = (max(((((min(var_4, var_7)) < var_14))), ((var_14 ? (max(var_4, var_13)) : var_13))));
    #pragma endscop
}
