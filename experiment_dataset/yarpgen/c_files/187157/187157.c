/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = (-2147483647 - 1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = (max(1, (((arr_1 [i_0]) >> (((max((arr_0 [i_0]), 7495453039090439800)) - 7495453039090439769))))));
        arr_4 [i_0] = 5409435122266146397;
    }
    #pragma endscop
}
