/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 77;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (((arr_1 [i_0] [i_0]) ? (((47845 > (24 || 61319)))) : 0));
        var_19 ^= (min(((((arr_2 [i_0]) == var_1))), ((1 ? (min((arr_2 [i_0]), (arr_0 [i_0] [i_0]))) : -1560570046))));
        var_20 ^= (((((7293855024468922500 | (max(17834112134546104134, var_9))))) ? var_1 : 0));
    }
    #pragma endscop
}
