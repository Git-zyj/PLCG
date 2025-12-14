/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (max((((!((max(-6578184538235812401, 16715614885558579341)))))), 1731129188150972274));
        arr_3 [i_0] = ((var_5 ? ((var_16 ? 2409964832 : -6578184538235812401)) : ((((((1731129188150972274 ^ (arr_1 [i_0])))) ? (~0) : (-1958247249 | var_16))))));
        var_18 &= (((((((((1 ? 207 : -2396))) && (((var_9 ? 16715614885558579343 : var_1))))))) + ((-((-3428910248294940158 ? 9013521522131751362 : 2567580678))))));
        var_19 = (((((var_4 ? var_10 : ((-117 ? var_2 : var_13))))) ? 6578184538235812411 : ((((0 <= ((16715614885558579341 ? 4225284757 : 14))))))));
    }
    var_20 = (min(var_16, (min((min(var_7, var_15)), var_14))));
    #pragma endscop
}
