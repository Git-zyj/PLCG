/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min((max(1277768926, var_0)), (~var_2))) != var_3));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 = (max((max(-7993962322304678441, (arr_1 [i_0 - 1]))), ((var_6 ? (arr_1 [i_0 - 1]) : 7442481145072235811))));
        arr_2 [4] &= (((max(var_5, (!var_3)))) + ((+((((arr_0 [i_0] [21]) != var_12))))));
        arr_3 [i_0] = ((var_2 % ((-(arr_0 [i_0 + 1] [i_0 + 2])))));
        arr_4 [i_0] = min(4353133265071625781, 15910222795973079234);
    }
    var_15 = ((((((var_5 ? var_0 : var_6)) + 9223372036854775807)) >> (var_8 - 4777296949967381692)));
    var_16 = 1;
    #pragma endscop
}
