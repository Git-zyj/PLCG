/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_19 = ((96 < (((arr_0 [i_0]) | (arr_0 [i_0])))));
        arr_2 [i_0] = ((var_13 >> (var_14 + 47)));
        arr_3 [i_0] [i_0] = -var_7;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_20 *= ((((((-15353 + 161) + (14099 < var_1)))) < (var_12 | var_11)));
        var_21 = ((~((((13 == 15353) < 18268256012878338853)))));
        var_22 = (((var_3 | 128) < -3267279793));
    }
    var_23 = (max(var_23, (((~((-(var_3 | var_12))))))));
    var_24 = var_13;
    #pragma endscop
}
