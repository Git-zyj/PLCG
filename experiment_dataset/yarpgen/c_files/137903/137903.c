/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [6] = (arr_0 [i_0]);
        arr_4 [i_0] = ((((38092 ? (arr_2 [i_0]) : (arr_0 [i_0]))) >> (4193059517241228997 >= 23317)));
        arr_5 [i_0] = 24955;
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_18 += (min((arr_8 [14]), 29758));
        var_19 = (max(var_19, (((-((~((max(21603, 39335))))))))));
    }
    var_20 = (~-1);
    var_21 = var_4;
    #pragma endscop
}
