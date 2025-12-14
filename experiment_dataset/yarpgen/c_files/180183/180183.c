/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = (min(var_13, (max(var_1, ((var_4 < (min(var_0, 18060403616176296644))))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_14 = (((var_0 + 2147483647) >> (((((var_9 ? 2280246453 : 1)) < ((min(var_9, 1073741823))))))));
        var_15 = var_4;
        arr_4 [i_0] [i_0] = (min(var_9, (~3056704632)));
        arr_5 [i_0] = ((var_6 <= (max((arr_0 [i_0 - 1] [i_0 - 2]), -1))));
    }
    var_16 = (max(var_16, var_10));
    #pragma endscop
}
