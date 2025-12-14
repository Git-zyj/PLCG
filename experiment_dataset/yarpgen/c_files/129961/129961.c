/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_3));
    var_15 = (max((max(-1187671982, var_5)), ((((~var_11) > ((min(var_3, -5249901030254081756))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (max(var_16, (62354 / 2139095040)));
        arr_3 [i_0] = ((2147483647 - (arr_1 [i_0])));
        var_17 = (max(var_17, var_3));
        arr_4 [i_0] [i_0] = -var_10;
    }
    #pragma endscop
}
