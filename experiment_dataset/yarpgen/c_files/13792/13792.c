/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 ^= ((-1828595678 ? 65528 : (max(81689600, (max((arr_1 [i_0]), (arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((((min((((arr_0 [0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))), (min((arr_1 [i_0]), (arr_0 [6])))))) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))) : (((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) : (max((arr_1 [i_0]), (arr_0 [i_0])))))));
        arr_3 [i_0] = (((min((arr_0 [i_0]), ((-(arr_1 [i_0])))))) ? ((max((arr_0 [i_0]), (arr_1 [i_0])))) : (((arr_1 [i_0]) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
    }
    var_21 = var_3;
    var_22 = var_3;
    #pragma endscop
}
