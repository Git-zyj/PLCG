/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = ((!((max(var_6, var_1)))));
    var_19 = (max(var_19, 447329108));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (max(var_20, ((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) << (((arr_1 [i_0] [i_0]) - 2476980005)))))));
        var_21 = ((var_14 ? ((((arr_1 [i_0] [i_0]) == (arr_1 [i_0] [i_0])))) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_22 |= ((-(arr_0 [i_1] [i_1])));
        var_23 += ((((min(var_6, var_15))) ? (arr_1 [i_1] [i_1]) : (((~(~1015003926))))));
        var_24 = (max(var_24, ((((((arr_1 [1] [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_2 [10]))) <= (((((arr_2 [6]) > var_13)))))))));
    }
    #pragma endscop
}
