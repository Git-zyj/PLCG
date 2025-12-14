/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += 13590;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [1] = var_7;
        var_15 += ((((min((arr_1 [i_0 + 1]), var_10))) ? (!32767) : (min(var_6, (arr_1 [i_0 - 1])))));
        arr_3 [1] &= (arr_0 [i_0]);
        var_16 = 1;
        var_17 = (((4068349470254411882 && -1) & -1));
    }
    var_18 = -32767;
    #pragma endscop
}
