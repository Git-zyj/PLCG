/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0 + 2] = (((arr_1 [i_0]) ? (arr_2 [1]) : (((((-(arr_0 [i_0 - 3])))) ? (arr_0 [i_0 - 2]) : (((((arr_0 [i_0 - 2]) <= 3))))))));
        var_20 *= ((((min(1, 155433088))) == (arr_1 [i_0 + 2])));
    }
    var_21 = max(((max(var_4, (155433075 || var_17)))), ((-(min(var_0, -155433075)))));
    var_22 = (((((((min(var_9, var_15))) ? (min(155433088, 65520)) : var_14))) ? ((max(var_8, ((max(var_9, 17054)))))) : var_19));
    #pragma endscop
}
