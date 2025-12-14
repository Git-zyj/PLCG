/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_5, -var_15));
    var_17 = ((var_12 ? (max(0, ((var_7 ? 1 : var_6)))) : var_8));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_18 += ((+((+(((arr_0 [i_0]) ? 186 : (arr_1 [i_0])))))));
        var_19 |= 3149;
    }
    #pragma endscop
}
