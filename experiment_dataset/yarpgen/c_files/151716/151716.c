/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 = ((31744 ? (((((20032 ? -2352 : 9795))) ? (~1) : (arr_2 [1]))) : (arr_3 [5] [i_0])));
        arr_4 [i_0] = 18408;
    }
    var_11 = (min(var_11, 1));

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (max((((arr_6 [i_1] [i_1]) ? ((1 ? var_5 : (arr_5 [i_1]))) : ((36946 ? 7 : -6)))), 26744));
        var_12 = (((var_8 + (arr_6 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_13 = (max((((((17432799150324569114 ? 6 : 8295473701250879066))) ? (((min((arr_5 [i_2]), (arr_9 [i_2]))))) : 30720)), ((min(((var_5 ? (arr_5 [i_2]) : 36958)), (1 + -26744))))));
        var_14 = (((arr_9 [i_2]) > ((var_3 ? (arr_9 [i_2]) : (arr_9 [i_2])))));
    }
    #pragma endscop
}
