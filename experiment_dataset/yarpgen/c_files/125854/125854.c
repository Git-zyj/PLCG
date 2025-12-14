/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (min(4294967295, ((50179 ? (min(-2336349311420737040, 15343)) : 15357))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_0;
        var_20 &= var_5;
        var_21 = ((216 ? (max(50192, 1074349017)) : (arr_1 [i_0])));
        var_22 = (((min((arr_0 [i_0 - 3]), var_14))) > ((15352 ? 27 : 50181)));
    }
    var_23 = var_12;
    #pragma endscop
}
