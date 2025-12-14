/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = ((max(var_7, var_7)));
        var_19 = (((min(21487, ((min(var_17, var_5)))))) || (arr_0 [i_0]));
        var_20 = (min(var_20, ((~((var_3 ? var_15 : -var_8))))));
    }
    var_21 = (max(var_21, (((var_11 ? 77 : 255)))));
    var_22 = (min(var_22, (((((-var_9 ? ((min(var_17, var_12))) : var_17)) <= var_11)))));
    var_23 -= (~1);
    #pragma endscop
}
