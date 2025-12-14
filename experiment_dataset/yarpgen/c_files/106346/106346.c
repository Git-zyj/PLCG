/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 = (arr_0 [2]);
        arr_3 [i_0] = ((var_2 ? -3331744070953181630 : (!-3331744070953181647)));
        var_12 = (((((var_2 ? var_0 : -31842))) ? var_1 : ((31827 ? -8930578369487469446 : 31841))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_13 = ((!((!(!32671)))));
        var_14 = (min(var_14, (((2 ? ((max((max((arr_5 [18]), (arr_4 [6]))), (arr_6 [i_1] [i_1])))) : 31821)))));
        var_15 = (max(var_15, ((((arr_5 [18]) ? ((min(-31837, 3331744070953181608))) : (((!(arr_5 [1])))))))));
    }
    var_16 = (~var_1);
    #pragma endscop
}
