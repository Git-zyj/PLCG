/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (((~((15529287056168447539 ? 64 : -3)))));
        arr_4 [i_0] = ((2068825404 ? (min((max(0, (-2147483647 - 1))), ((2 ? -4 : 3)))) : ((((min(633885217, 2147483647)) < -11200)))));
        var_13 = 3646801790;
    }
    var_14 = 7;
    #pragma endscop
}
