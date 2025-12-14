/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((16777215 >> (-16777223 + 16777223)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = (arr_2 [i_0]);
        arr_3 [i_0] = min(var_8, ((-16777188 ? ((max(-1, 16777187))) : (((arr_1 [i_0]) / -16777176)))));
        var_22 = (max(((((var_2 ? -16777223 : -16777172)) ^ (!16777210))), (((-16777176 + 2147483647) >> (((max(var_18, (arr_1 [i_0]))) - 18446744073709551495))))));
        var_23 = -1;
    }
    var_24 = 1;
    var_25 = (-462498000 == -16777176);
    #pragma endscop
}
