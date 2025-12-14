/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_0, var_7));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (38 || -1612313036);
        var_15 = (((((94 != 1710897875) >= (min((arr_0 [8]), 2590)))) ? (((815546587 ? 149 : 4910))) : (((var_4 ? ((max(101, -4529))) : 250)))));
        arr_2 [i_0] [i_0] = (min(((1 ? -1908700201725530114 : 1)), var_1));
    }
    #pragma endscop
}
