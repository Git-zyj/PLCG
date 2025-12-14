/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_7, ((var_10 ? (max(var_12, var_11)) : (var_2 + var_11)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = ((~(((arr_0 [i_0] [4]) ? (arr_2 [5]) : -1))));
        arr_3 [i_0] = ((((((arr_2 [i_0]) % (arr_2 [i_0])))) ? ((max(((-(arr_2 [13]))), (arr_0 [i_0] [i_0])))) : ((~(max(var_14, (arr_1 [5])))))));
        var_19 = (max(((((((arr_2 [11]) + var_1))) ? (arr_1 [9]) : ((802012618 - (arr_1 [i_0]))))), ((~(min((arr_1 [14]), var_15))))));
    }
    #pragma endscop
}
