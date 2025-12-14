/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-127 - 1);
    var_19 = (min(var_3, ((-(var_3 + var_10)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [13]) : 1))) ? (arr_2 [i_0 - 2]) : -3287));
        var_20 = (min(var_20, ((((-127 - 1) ? (arr_1 [i_0 - 2]) : 2027653366)))));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_8 [i_1 - 2] [i_1] = var_8;
        var_21 += var_11;
    }
    #pragma endscop
}
