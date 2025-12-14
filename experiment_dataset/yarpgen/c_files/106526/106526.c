/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_7))) ? (var_1 & 0) : ((((arr_1 [i_0]) >> ((((1 ? 10041068188678211513 : 1)) - 10041068188678211482)))))));
        var_15 *= 4294967295;
    }
    var_16 = (((((((min(var_4, var_10)) > -var_4)))) / (((((var_14 << (((-6148299624931147567 + 6148299624931147573) - 6))))) ? ((max(var_14, var_7))) : ((var_0 ? var_7 : -1908770121650052560))))));
    #pragma endscop
}
