/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max((1920 + -1397368400), 1522424282359431286);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = ((1397368399 / (max(1522424282359431305, (1397368415 && 77)))));
        arr_2 [i_0] = ((1397368403 || (-5201 != 3899287410)));
    }
    #pragma endscop
}
