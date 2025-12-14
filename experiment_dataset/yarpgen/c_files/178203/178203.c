/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_17 = (~1379340024);
        var_18 = (max(var_18, (~var_8)));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_19 = (max(var_19, ((min((((!(arr_0 [i_1 + 1])))), ((~(((var_16 + 2147483647) << (var_10 - 42))))))))));
        var_20 = 1;
        var_21 *= ((!((max((arr_2 [i_1 + 1] [i_1 + 1]), var_10)))));
    }
    var_22 = var_14;
    var_23 = (max(var_0, ((((max(-5658967558450504213, var_15)) > (!4294967295))))));
    #pragma endscop
}
