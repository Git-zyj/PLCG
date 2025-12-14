/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (((max((arr_3 [i_0] [i_0]), (min((arr_3 [i_0] [i_0]), 3633869211)))) % ((((!(!-535994100)))))));
        arr_4 [i_0] = (((((var_8 ? (((arr_1 [i_0]) % (arr_1 [i_0]))) : (((arr_2 [i_0]) ? -1428669962 : (arr_2 [i_0])))))) - ((((max((arr_1 [i_0]), 17406794632511343410))) ? 1428669985 : ((1428669963 ? var_15 : -202908485))))));
    }
    var_21 = (min(var_21, 0));
    #pragma endscop
}
