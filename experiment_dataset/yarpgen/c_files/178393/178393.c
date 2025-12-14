/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_18 = ((((!((((arr_0 [i_0 - 1]) * (arr_1 [i_0])))))) && var_11));
        var_19 = (((arr_0 [i_0 - 1]) ? (((max(var_13, 17082373310979326775)))) : (((!(arr_0 [i_0 + 1]))))));
        var_20 = (((((~(arr_1 [i_0 - 2])))) ? (--1011134722383191652) : (((arr_1 [i_0]) & (max(-27133, 1364370762730224829))))));
    }
    var_21 = (max(var_12, (((-27133 - ((max(var_11, var_10))))))));
    #pragma endscop
}
