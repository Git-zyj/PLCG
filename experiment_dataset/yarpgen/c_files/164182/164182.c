/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 = min(4294967295, 0);
        var_14 = var_3;
    }
    var_15 = (min(var_11, (((var_5 || var_4) ? ((var_9 ? var_9 : var_12)) : (!var_9)))));
    var_16 = (((min((var_8 - 3043887793055924126), (var_10 >= var_1))) <= ((((var_7 == ((749775632 ? 1769219513 : 2837715003))))))));
    var_17 = ((~536870848) * var_2);
    #pragma endscop
}
