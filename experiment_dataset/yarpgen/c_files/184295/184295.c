/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_1 ? var_9 : ((var_0 ? 30702 : var_6)))) & ((min(var_8, 1)))));
    var_11 = (((165 >= 8) ? var_0 : ((var_6 ? var_2 : (min(var_6, var_2))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_12 = ((-((((13083082975495144839 && (arr_2 [i_0])))))));
        arr_4 [i_0] = (arr_3 [1]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((1 ? (arr_0 [i_1]) : (((((arr_5 [13] [i_1]) + 2147483647)) >> (30691 - 30691))))) << (((arr_5 [i_1] [i_1]) + 132)));
        var_13 = ((arr_1 [i_1]) ? (((arr_0 [i_1]) ? (arr_6 [i_1]) : (arr_2 [i_1]))) : ((min((-9 >= var_0), (arr_0 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (min((arr_10 [i_2]), ((((arr_8 [i_2]) ? (arr_2 [i_2]) : ((((arr_3 [i_2]) >= (arr_0 [i_2])))))))));
        arr_12 [i_2] = 73;
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 18;i_3 += 1)
    {
        var_14 = (min(var_14, (((((-30702 ? (arr_14 [i_3] [i_3]) : 3131425084989823532)) >= -var_3)))));
        arr_16 [i_3] = (((arr_10 [i_3 - 3]) ? (arr_8 [i_3 - 4]) : (arr_10 [i_3 - 3])));
    }
    #pragma endscop
}
