/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 -= (((arr_1 [i_0 + 1] [i_0]) ? ((((!((max((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0] [i_0])))))))) : (max(((56 ^ (arr_1 [i_0 + 1] [i_0 + 1]))), (((arr_1 [9] [9]) ^ (arr_1 [i_0 - 1] [i_0])))))));
        var_17 = (arr_0 [i_0] [i_0 - 1]);
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (((!((((arr_1 [i_1 + 1] [i_1 + 1]) << (((arr_1 [i_1] [11]) - 7474395444774584028))))))))));
        arr_4 [i_1] = (((arr_2 [i_1] [i_1 - 1]) / (((~(arr_2 [i_1] [i_1 + 1]))))));
        var_19 = ((((max((arr_2 [i_1] [i_1 + 1]), (arr_2 [i_1] [i_1 + 1])))) <= (((arr_2 [i_1] [i_1 + 1]) ? (arr_2 [i_1] [i_1 - 1]) : (arr_2 [i_1] [i_1 + 1])))));
        arr_5 [i_1] [i_1] = ((!(((195 ? (((arr_1 [i_1] [i_1]) ? var_5 : 6013864456193402098)) : (((((arr_2 [i_1] [i_1]) != (arr_1 [2] [2]))))))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2 - 1] = (arr_3 [i_2 - 1] [8]);
        arr_9 [i_2] [i_2 + 1] = -var_4;
        arr_10 [i_2] = ((-((((arr_3 [i_2] [6]) != 255)))));
    }
    var_20 = (max(((var_15 ? var_11 : var_4)), var_13));
    var_21 = (max(var_21, ((((((var_14 ? (min(var_14, var_5)) : (var_9 <= 12340)))) && var_10)))));
    #pragma endscop
}
