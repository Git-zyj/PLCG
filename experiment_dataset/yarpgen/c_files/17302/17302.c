/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_20 += var_13;
        arr_3 [i_0] [i_0] = (((arr_2 [i_0] [i_0 + 1]) == ((var_9 ? (arr_2 [i_0] [i_0 + 1]) : (arr_0 [i_0 - 1])))));
        var_21 |= (arr_2 [i_0 + 1] [i_0]);
        arr_4 [i_0] = 2467120747822684081;
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_22 = (arr_5 [i_1]);
        var_23 = ((+((var_12 ? (arr_5 [i_1]) : var_6))));
    }
    var_24 = var_13;
    var_25 = var_19;
    #pragma endscop
}
