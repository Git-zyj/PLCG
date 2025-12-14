/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_20 = (max(var_20, (arr_2 [12])));
        arr_3 [i_0] [i_0] = ((~((((min((-9223372036854775807 - 1), 93))) ? (!var_13) : (max(var_3, 43827))))));
    }
    var_21 -= 47171;
    #pragma endscop
}
