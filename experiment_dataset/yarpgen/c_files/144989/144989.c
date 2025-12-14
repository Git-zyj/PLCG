/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((2147483642 ? ((-7842074307574030320 ? 7842074307574030332 : 1)) : (var_9 + -114386017)))) && ((((((!(arr_0 [i_0])))) * ((min(-51, var_3))))))));
        var_20 = (max(var_20, (arr_0 [16])));
    }
    #pragma endscop
}
