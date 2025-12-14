/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((((min(var_0, 0)))) ? -23778 : ((-((49152 ? 48 : var_10))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = 122;
        var_14 = (arr_0 [i_0 + 1]);
    }
    var_15 = var_6;
    var_16 = (((((var_7 | ((var_5 ? var_9 : var_10))))) ? (~65528) : ((var_11 - ((var_0 ? var_1 : var_1))))));
    #pragma endscop
}
