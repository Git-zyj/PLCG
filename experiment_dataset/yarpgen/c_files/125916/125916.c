/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_0 ^ (((var_3 ? var_8 : var_9)))))) || 236873122454575372));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_11 = ((((max((var_7 >= var_9), (arr_1 [i_0] [i_0])))) ? ((var_5 / (((arr_1 [i_0] [i_0 - 3]) ? var_8 : var_0)))) : ((var_8 / ((var_7 ? 4153578021 : (arr_1 [i_0] [i_0 + 1])))))));
        var_12 = (min(var_12, ((min(var_4, ((((((arr_1 [12] [12]) ? var_7 : (arr_1 [i_0] [i_0])))) ? var_7 : var_6)))))));
        var_13 = ((((((arr_1 [10] [8]) ? (((arr_0 [i_0]) ? -93 : var_0)) : ((((!(arr_1 [i_0 - 1] [i_0 - 2])))))))) ? ((((min((arr_1 [i_0 + 1] [i_0]), var_4))) ? (arr_0 [i_0 - 1]) : ((max(var_7, (arr_0 [8])))))) : ((-(arr_1 [i_0] [i_0])))));
    }
    #pragma endscop
}
