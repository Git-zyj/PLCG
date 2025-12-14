/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_13 + var_2) > (4294967295 > 4294967287)))) >= ((((var_12 % var_7) != (var_13 / 16))))));
    var_20 = ((((((var_3 >= var_1) != (-89653031406810094 / var_1)))) >= (((var_13 * var_0) * (34 <= -34)))));
    var_21 *= ((((((-49 * 34) == (-34 * 98)))) >= (((1 > (34 > 187))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((var_0 & (arr_0 [i_0] [i_0]))) | (var_10 > -35)));
        arr_3 [i_0] [i_0] = (((((182 <= (arr_1 [i_0 + 1] [i_0 + 1])))) * (0 > var_18)));
        var_22 = (((174 + var_0) && (((arr_1 [10] [i_0]) <= var_2))));
        var_23 = (((1 % -30018) || ((74 > (arr_0 [i_0 + 1] [i_0 + 1])))));
    }
    #pragma endscop
}
