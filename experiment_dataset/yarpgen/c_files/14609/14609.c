/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((((((4294967295 ? 4294967295 : var_12))) ? 41312 : (((-100 + 2147483647) << (2612635545751280820 - 2612635545751280820)))))), (max(-3061321152472470971, (var_13 || var_3)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [1] = (((arr_1 [i_0] [i_0 + 1]) ? (((arr_1 [i_0] [i_0]) - ((~(arr_0 [i_0 + 1] [i_0]))))) : ((((~(arr_0 [i_0 + 1] [i_0]))) % (~var_2)))));
        var_17 ^= var_3;
        arr_3 [i_0] = 6876882514709716536;
        arr_4 [i_0] [i_0] = (15819146106073514445 | (((((max(-5397362372669088430, 1739205113)) >= ((((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_1 [i_0] [i_0 + 1]) : 101))))))));
    }
    #pragma endscop
}
