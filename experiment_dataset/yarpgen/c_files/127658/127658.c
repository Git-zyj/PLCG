/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_18 += (((((min(22343, 226))) || ((134 && (arr_3 [i_0 + 1]))))));
        var_19 = ((~(min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (arr_3 [i_1]);
        arr_9 [i_1] [i_1] = (((arr_2 [i_1]) >= (((((arr_1 [i_1]) > (arr_5 [i_1]))) ? (((arr_1 [i_1]) ? (arr_3 [i_1]) : 120)) : (arr_3 [i_1 - 1])))));
        arr_10 [i_1] [i_1] = (min((((arr_7 [i_1]) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 + 1]))), ((~(arr_3 [i_1 + 1])))));
        var_20 = ((((((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1])))) || (((((arr_2 [i_1]) < 4294967295))))));
    }
    var_21 = (max(var_21, var_3));
    #pragma endscop
}
