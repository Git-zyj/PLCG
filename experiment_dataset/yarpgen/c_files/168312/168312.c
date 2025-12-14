/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = 5865691042403002329;
        arr_3 [i_0] [i_0] = (min(125, var_3));
    }
    var_21 = ((min(var_10, ((120 ? 125 : var_7)))));
    var_22 |= ((9223372036854775807 ? -5865691042403002317 : 9223372036854775807));
    #pragma endscop
}
