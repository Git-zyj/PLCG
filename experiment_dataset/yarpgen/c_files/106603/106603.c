/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 ^= ((-0 <= ((((0 || (arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = (((-(arr_2 [i_0] [i_0]))) + ((-(arr_2 [i_0] [i_0]))));
    }
    var_19 = (max(var_19, (((-(~var_2))))));
    var_20 -= var_0;
    #pragma endscop
}
