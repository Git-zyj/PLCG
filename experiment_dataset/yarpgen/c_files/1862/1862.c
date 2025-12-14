/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-2147483647 - 1);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = ((arr_1 [i_0]) ? (arr_0 [i_0]) : 65535);
        var_22 += (-32767 - 1);
        var_23 = (min(var_23, (((~(arr_1 [1]))))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_24 = ((((min(-0, ((var_2 & (arr_2 [i_1])))))) || 63));
        var_25 = -65473;
    }
    #pragma endscop
}
