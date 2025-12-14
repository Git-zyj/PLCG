/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((min((min(var_7, var_4)), var_2)))));
    var_20 = (max(var_20, ((((var_11 != (111 / var_3)))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_21 = (max(((max((var_8 - var_10), 86))), (min((arr_0 [i_0 - 1]), var_18))));
        arr_2 [i_0] &= (((((((var_2 && (arr_1 [i_0] [i_0]))) == (~241))))));
    }
    var_22 = var_13;
    #pragma endscop
}
