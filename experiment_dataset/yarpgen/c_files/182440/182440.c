/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((((((((min(var_0, var_9)))) < (3887320225 / 252))))) < (min((((var_0 >> (var_2 - 8260845754210893275)))), var_5)))))));
    var_11 = (!var_3);

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_12 = arr_2 [i_0 + 2];
        var_13 = ((~((~(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0 - 1])))))));
    }
    #pragma endscop
}
