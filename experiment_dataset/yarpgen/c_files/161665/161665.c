/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (var_14 / var_7)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 -= (min((((!(arr_1 [i_0])))), (arr_0 [18])));
        var_18 &= ((~(min((arr_0 [12]), var_3))));
    }
    var_19 += 15301107487599358523;
    #pragma endscop
}
