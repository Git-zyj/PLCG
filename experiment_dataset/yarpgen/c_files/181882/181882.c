/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_8));
    var_14 = ((!(((var_6 ? (max(var_0, -8350892478170962327)) : (~var_6))))));
    var_15 = 255;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = ((~(((1379812387691232361 & 524288) ? (~10962553611365690452) : (((-7845429506754635410 ? 112 : 15360)))))));
        arr_4 [10] [10] = (max(1, (min((min(-15364, (arr_3 [i_0] [i_0]))), 15342))));
    }
    var_17 = var_5;
    #pragma endscop
}
