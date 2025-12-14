/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 2729638824;
    var_12 = (min(((var_5 ? (2729638824 < var_10) : -var_2)), ((var_1 ? (var_4 - var_6) : var_1))));
    var_13 ^= 33554424;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max(var_14, ((min(var_6, 33554424)))));
        var_15 = (max(var_15, -18163));
        var_16 = (((arr_1 [i_0] [i_0]) + ((var_1 + (max(var_2, (arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] [i_0] = ((var_10 << (((arr_1 [i_0] [i_0]) - 14727468143753201698))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = 13365955132226926285;
        var_18 = ((-(((0 * 228) * (((arr_4 [i_1]) * 0))))));
    }
    #pragma endscop
}
