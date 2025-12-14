/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_13);
    var_16 = (min(var_6, ((-(((var_0 + 2147483647) >> 1))))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_17 = ((!(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = (min(((var_6 ? (((max((arr_4 [i_1] [i_1]), (arr_1 [1]))))) : (min((arr_1 [i_1]), (arr_0 [i_1]))))), ((max((arr_1 [i_1]), (arr_1 [i_1]))))));
        var_18 = (min(var_18, (arr_1 [i_1])));
        arr_6 [3] = ((((max(var_13, ((max(var_9, (arr_3 [i_1]))))))) >> (arr_3 [i_1])));
    }
    var_19 = var_10;
    #pragma endscop
}
