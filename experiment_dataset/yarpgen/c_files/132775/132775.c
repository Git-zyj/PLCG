/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 13;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = ((((((arr_0 [i_0]) ? var_3 : (arr_0 [i_0])))) ? -var_0 : (!var_0)));
        var_17 = (min(var_17, (arr_0 [6])));
        var_18 = ((((4 << (var_0 - 25543))) > (arr_0 [i_0])));
        var_19 = (((((var_2 + (arr_0 [i_0])))) ? -48652744 : ((((max((arr_0 [i_0]), 9310))) ? var_8 : 4294967291))));
    }
    #pragma endscop
}
