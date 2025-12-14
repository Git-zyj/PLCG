/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((max(((var_12 ? (((min(63, var_7)))) : (min(var_12, 8589934591)))), var_13)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = (min(var_21, ((((max((arr_1 [i_0]), -8589934592)) & ((-(arr_1 [i_0]))))))));
        var_22 = (max(70368744177663, 18446744073709551615));
        var_23 = -255;
    }
    var_24 = (min(var_24, ((((((min(255, 12))) ? 255 : var_2))))));
    #pragma endscop
}
