/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((+(max((-9223372036854775807 - 1), 9223372036854775807))));
    var_17 = var_6;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (17032846986211713949 >= 7808684680702595042);
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? (arr_0 [i_0]) : 12765))) ? 772042671 : ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_3)) > 11883823314681507905)))));
    }
    #pragma endscop
}
