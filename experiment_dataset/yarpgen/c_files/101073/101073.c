/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 -= (arr_0 [1] [i_0]);
        arr_4 [i_0] = (min((min(((max((arr_1 [1]), (arr_0 [i_0] [i_0])))), ((var_0 ? (arr_3 [1] [i_0]) : (arr_0 [i_0] [i_0]))))), ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_5 [1] [i_0] = (min(((((!(arr_2 [1]))) ? (arr_1 [i_0]) : ((min((arr_1 [1]), var_9))))), ((((((arr_2 [i_0]) | var_5))) ? (arr_2 [i_0]) : (((arr_2 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0])))))));
    }
    var_16 = var_3;
    #pragma endscop
}
