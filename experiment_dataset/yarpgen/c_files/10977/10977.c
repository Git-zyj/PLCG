/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((!((max(16077155112861535456, 1)))))), (max(var_1, -var_10))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(var_6, ((((min((arr_1 [i_0]), var_4))) ? (((arr_1 [i_0]) * var_9)) : ((max(var_6, (arr_1 [i_0]))))))));
        var_14 += (min((arr_1 [18]), ((((min(var_8, (arr_1 [8])))) ? var_3 : (!var_12)))));
    }
    var_15 = (((max(((min(var_9, var_3))), (min(var_2, var_10))))) ? (max((~var_6), var_10)) : (((var_6 - var_0) & (var_10 | var_11))));
    #pragma endscop
}
