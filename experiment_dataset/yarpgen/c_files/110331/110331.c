/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = 0;
        arr_2 [i_0] [i_0] = ((~(8064 != 4294967273)));
        arr_3 [i_0] = (((((!-3470918384141605369) || (arr_0 [i_0]))) && (((var_5 || 4294967295) || var_9))));
    }
    var_16 = (((min((var_1 * var_6), var_11)) >> (var_10 + 26956)));
    #pragma endscop
}
