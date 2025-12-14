/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((0 ? ((((!(((var_4 ? var_1 : 2147483632))))))) : var_4));
    var_11 &= (!var_2);

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_12 = (min(var_12, (arr_1 [i_0 + 3] [i_0 + 3])));
        var_13 = (max((max((max(262143, 65521)), ((18446744073709551589 ? 2147483632 : 112)))), (~-var_3)));
        var_14 = ((var_1 ? ((-((min(8, 23))))) : 64));
    }
    #pragma endscop
}
