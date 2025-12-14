/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_20 += var_3;
        var_21 = (-127 - 1);
        var_22 = (max(var_22, (((~(((var_17 <= (arr_2 [5] [5])))))))));
    }
    var_23 = (max(var_23, ((-((var_1 ? var_5 : (var_11 + 7580362975640573923)))))));
    #pragma endscop
}
