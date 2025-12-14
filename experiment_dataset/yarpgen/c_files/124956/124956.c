/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [5] [i_0] = ((((min(1, 21283))) & (((var_3 && (arr_0 [i_0]))))));
        arr_3 [i_0] = (arr_1 [i_0 - 2] [i_0 - 2]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = ((((var_9 ? (arr_5 [i_1]) : var_0)) / (36116 ^ 21283)));
        var_17 = (min(var_17, (arr_5 [i_1])));
    }
    var_18 = ((var_4 <= (((var_0 * var_10) / -21284))));
    #pragma endscop
}
