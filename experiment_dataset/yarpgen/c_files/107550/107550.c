/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_1 >> (var_11 - 230)));
    var_21 = 7936;

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [i_0 - 2];
        var_22 = (max(var_22, (((((max((min((arr_0 [i_0 - 4]), var_4)), 65535))) - (min(((max(var_1, var_14))), (77 & var_13))))))));
    }
    #pragma endscop
}
