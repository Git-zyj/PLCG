/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 232;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = var_9;
        var_18 = (arr_1 [10] [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = 4095;
        arr_7 [i_1] = (min(((var_5 ? 0 : 2)), 5));
        var_19 *= ((-((((0 && (arr_3 [i_1] [i_1])))))));
    }
    var_20 = (max(var_20, 172));
    var_21 = var_10;
    #pragma endscop
}
