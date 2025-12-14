/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_11 | var_9) != (max((var_13 ^ var_8), 1)));
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (max(var_17, ((((!0) ? (~9223372036854775807) : (((120 ? -20825 : 128))))))));
        var_18 = ((((-(arr_1 [i_0] [i_0]))) == var_5));
    }
    #pragma endscop
}
