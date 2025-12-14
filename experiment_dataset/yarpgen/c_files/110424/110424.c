/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 9802669490288781611;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_21 = (min(var_21, (max((min(((0 ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0]))), ((min((arr_0 [i_0]), (arr_1 [i_0])))))), (max((!0), (max(10534533414483390778, -2039423169))))))));
        var_22 -= (!-var_14);
    }
    var_23 = ((-8644074583420770011 ? var_11 : (((-998941208 || 2039423168) ? -1 : var_3))));
    #pragma endscop
}
