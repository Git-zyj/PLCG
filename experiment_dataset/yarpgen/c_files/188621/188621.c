/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((min(var_0, var_13)))), -var_0));
    var_18 &= (((-var_14 >> (472263538899833632 - 472263538899833602))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 2] = 93;
        var_19 = (arr_2 [i_0] [i_0]);
        arr_4 [i_0] = (max((((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 3]) : 120)), var_10));
    }
    #pragma endscop
}
