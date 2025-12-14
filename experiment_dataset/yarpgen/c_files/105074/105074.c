/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = -102;
        var_10 *= ((-var_3 ? (~-81) : (max(var_7, 1))));
    }
    var_11 = (((((var_8 ? (!860094621) : -var_8))) ? (min(((119 ? var_7 : 2157262189)), (((-9223372036854775807 - 1) ? 3556300964 : 1)))) : var_9));
    #pragma endscop
}
