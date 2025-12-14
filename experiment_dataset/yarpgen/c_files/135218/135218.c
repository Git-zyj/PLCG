/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!-56);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 &= (-32767 - 1);
        var_14 = (max(32762, ((-(arr_2 [i_0] [i_0])))));
        var_15 = (min(var_15, ((((arr_1 [10]) < (arr_0 [0]))))));
        arr_3 [i_0] [i_0] = 32756;
    }
    var_16 ^= ((var_7 && ((min(var_5, var_5)))));
    var_17 = (min(var_17, var_1));
    #pragma endscop
}
