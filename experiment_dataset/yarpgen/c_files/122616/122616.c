/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((~var_2), (((~-1425195382) ? (~var_4) : var_4))));
    var_13 = (min(var_13, 183));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_14 = (+-3642);
        arr_3 [i_0] = 1408541299662716527;
        var_15 = 24;
        arr_4 [i_0] = 65520;
    }
    #pragma endscop
}
