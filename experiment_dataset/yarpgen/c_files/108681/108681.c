/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (min((arr_2 [i_0 + 1] [i_0 - 1]), 3303513770597034844));
        var_14 = 146;
        arr_5 [i_0 - 1] [i_0] = ((1 ? 137 : (2994858768737807453 || 13917660108769849476)));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = ((+((max((!var_2), (arr_7 [i_1 - 1] [i_1 + 1]))))));
        var_15 = (min(((2994858768737807462 - (arr_7 [i_1] [i_1]))), (((max(var_6, (arr_2 [i_1 + 1] [i_1])))))));
        var_16 = ((((168 | (arr_0 [i_1 + 1] [i_1]))) << (((((arr_9 [i_1 + 1]) ? (arr_9 [i_1 + 1]) : (arr_9 [i_1 - 1]))) - 236))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] = ((((var_5 && (arr_13 [i_2]))) ? (((((arr_12 [i_2] [i_2]) < 74)))) : ((7666582735348596027 ? var_6 : 17436428652735793383))));
        arr_15 [i_2] = ((!(arr_2 [i_2 + 1] [i_2 + 1])));
    }
    var_17 = var_2;
    #pragma endscop
}
