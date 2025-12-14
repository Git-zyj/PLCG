/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min(-var_7, (var_1 & var_2))));
    var_16 = (~var_6);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (~var_2);
        var_18 = ((var_0 ? var_10 : (arr_2 [i_0])));
        arr_3 [i_0] [i_0] = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = (((((arr_0 [20] [20]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) == (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_19 = ((((!(arr_6 [i_1 + 1]))) ? 1 : -1234818144));
        arr_7 [i_1] = (((((-22 ? var_11 : (arr_0 [i_1 + 1] [i_1 + 1])))) && (arr_5 [i_1 + 1])));
    }
    #pragma endscop
}
