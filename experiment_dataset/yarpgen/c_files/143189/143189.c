/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((var_6 <= ((var_0 ? var_6 : var_1))))), var_2));
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_1 [i_0]) * ((max(var_1, var_0))));
        arr_3 [i_0] [i_0] = 10519468782577799142;
    }
    var_12 = ((var_1 ? var_3 : (max((var_6 || var_5), ((var_2 ? var_2 : var_0))))));
    #pragma endscop
}
