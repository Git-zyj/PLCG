/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(max(((3173 ? -3178 : var_10)), -1332622863))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 *= (((-(min(1244065152142587911, 1244065152142587888)))));
        arr_3 [i_0] = (min(((((3534675621006038322 < (arr_0 [i_0]))))), (min((arr_1 [9]), -21))));
    }
    var_16 = -86;
    var_17 -= (max(var_12, ((((min(200, var_12))) ? (123 - var_4) : var_2))));
    #pragma endscop
}
