/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (((((-272730423296 ? ((min(171, 92))) : (4611686017353646080 && 6762967050568830636)))) ^ -1664970123565611175));
    var_11 = (max(var_11, ((max(((((((17592181850112 ? 183 : 49226))) < ((var_1 ? (-32767 - 1) : 3419006292130183743))))), (((-110 + 2147483647) >> (var_2 - 172))))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_12 += 12;
        arr_3 [i_0] [8] = ((((((arr_1 [1]) ? (-9223372036854775807 - 1) : (((var_8 ? var_1 : var_7)))))) ? ((((0 ? (arr_1 [i_0]) : var_8)) + (arr_1 [i_0]))) : (((-(((-127 - 1) / var_7)))))));
        var_13 = (min(var_13, (arr_2 [4])));
        var_14 = ((((var_4 != (243 && 30045))) ? (((arr_0 [i_0 - 1]) / (arr_1 [i_0 - 2]))) : var_2));
    }
    #pragma endscop
}
