/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [11] &= 106;
        var_15 += ((!(((((1061809621059585845 ? (arr_0 [i_0 - 2]) : (arr_1 [i_0])))) && ((min((arr_0 [i_0 - 1]), (arr_0 [0]))))))));
        var_16 = (min(var_16, (((((min((arr_0 [i_0 - 3]), (arr_0 [i_0])))) & 48)))));
        var_17 = (max(var_17, ((min((((var_7 && (((var_10 ? -66 : -20)))))), -20)))));
    }
    var_18 = var_7;
    #pragma endscop
}
