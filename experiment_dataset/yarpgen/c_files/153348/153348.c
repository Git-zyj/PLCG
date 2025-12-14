/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_13));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [2] &= ((3691389933 <= (-127 - 1)));
        var_20 |= (~(max(123, (arr_0 [i_0 - 1]))));
        var_21 = ((((((((79 << (-13197 + 13211)))) ? -120 : (arr_0 [i_0])))) ? (arr_0 [12]) : -13197));
    }
    #pragma endscop
}
