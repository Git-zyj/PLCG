/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 = ((((255 - (7788014431283334126 ^ var_8))) <= (min(((-6929803912431206255 ? var_6 : var_4)), 29990))));
        var_19 ^= (((36355 | 29184) & ((~(~7680)))));
    }
    var_20 = (max(var_20, -2023917357));
    var_21 = var_12;
    var_22 = (((~((var_13 ? var_14 : var_6)))) * ((((!var_6) ^ 109))));
    #pragma endscop
}
