/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = ((var_5 >= (((~var_3) ? (var_6 < var_11) : 255))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 *= 35184372088831;
        var_16 = (arr_0 [i_0]);
        arr_4 [i_0] [i_0] = (((((220 || var_2) * ((var_10 ? (arr_0 [i_0]) : var_11)))) / 1639506793));
        var_17 += (var_12 + var_10);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_18 = ((((((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : var_2))) ? ((((arr_5 [i_1]) <= (arr_5 [i_1])))) : (((!(arr_5 [i_1]))))));
        var_19 = (arr_6 [i_1] [i_1]);
    }
    var_20 = var_6;
    var_21 = (min(((((17407 ? 2106630541118104376 : 1)) * (min(var_6, var_1)))), var_4));
    #pragma endscop
}
