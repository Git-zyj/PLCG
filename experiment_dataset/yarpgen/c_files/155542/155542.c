/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_19 >> (var_19 - 4997)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (!-2031642226);
        var_21 |= 1;
    }
    var_22 = (max((((!(8610 && -1)))), ((((var_5 ? var_12 : 56925)) * (var_6 | var_1)))));
    #pragma endscop
}
