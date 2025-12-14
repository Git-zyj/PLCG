/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((var_0 ? (((max(var_12, var_15)))) : (max(var_2, var_16)))), (max((~var_13), ((var_6 >> (var_4 - 1582700064)))))));
    var_20 = (~var_10);
    var_21 = (((-165 ? (max(var_0, var_2)) : (!var_7))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [11] = (max((max(var_13, ((var_5 ? -4995 : var_0)))), ((((((arr_1 [i_0]) / (arr_3 [i_0]))) * ((var_11 / (arr_3 [i_0]))))))));
        arr_5 [i_0] = ((((max((~var_3), (arr_3 [i_0])))) && (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_22 = ((-((((arr_8 [i_1] [i_1]) < (arr_8 [i_1] [i_1]))))));
        var_23 = 15;
        arr_10 [3] = ((((((arr_7 [i_1] [i_1]) / (arr_7 [i_1] [i_1])))) && (arr_7 [i_1] [i_1])));
        arr_11 [i_1] = var_6;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_14 [1] = (~var_18);
        var_24 = (min(var_24, (((((((arr_12 [i_2]) ? (arr_12 [i_2]) : (arr_13 [i_2])))) <= (((((arr_8 [i_2] [i_2]) || var_4)) ? ((9051802392812990104 * (arr_13 [i_2]))) : ((((arr_1 [i_2]) ? var_7 : (arr_3 [i_2])))))))))));
        var_25 ^= (max((arr_13 [i_2]), var_2));
    }
    #pragma endscop
}
