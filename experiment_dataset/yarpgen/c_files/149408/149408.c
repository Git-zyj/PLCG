/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-18 ? -102 : 105));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = ((var_14 + (((((min(var_12, -105))) > (arr_1 [i_0]))))));
        var_18 = (+-107);
        arr_2 [19] = ((((max((arr_0 [i_0]), (arr_1 [i_0])))) ? (arr_1 [i_0]) : ((min((arr_1 [i_0]), (arr_0 [16]))))));
    }
    var_19 = (((((16 ? 46 : -9)))));
    #pragma endscop
}
