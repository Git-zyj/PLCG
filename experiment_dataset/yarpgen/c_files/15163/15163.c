/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_3 != 108865539);
    var_19 = (max(((((var_14 ? var_7 : var_14)) << ((var_3 ? var_11 : var_2)))), var_1));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((61 > (arr_0 [i_0] [i_0])));
        var_20 = (108865539 & (min(786432, 1)));
        arr_4 [i_0] = (((((-((var_10 ? var_14 : 1))))) ? ((-((var_13 ? var_15 : 15118281672188642361)))) : var_3));
    }
    var_21 = var_2;
    var_22 = (min(var_22, var_3));
    #pragma endscop
}
