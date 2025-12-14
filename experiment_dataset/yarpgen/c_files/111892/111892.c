/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_3, (~var_11)));
    var_17 = ((((((min(var_3, 38))) ? var_14 : ((18446744073709551606 >> (-10 + 69))))) != var_5));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((min(-1957244899, ((min(24974, var_4))))));
        var_18 = (min(1, 24974));
        var_19 = var_15;
    }
    var_20 = (var_4 % var_6);
    var_21 = -24975;
    #pragma endscop
}
