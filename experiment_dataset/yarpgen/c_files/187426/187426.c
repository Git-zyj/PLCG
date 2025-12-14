/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((~var_7) ? (((14549 ? ((14555 ? -5 : var_4)) : ((4161420961 ? var_10 : var_2))))) : var_8)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((110 ? 1 : 14561))) ? (((arr_1 [i_0]) ? 8 : 1)) : ((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : -1323108918)))));
        var_15 = 50963;
        var_16 = ((arr_1 [i_0]) && (arr_1 [i_0]));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        var_17 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((min((arr_1 [i_1]), var_5))) ? (((arr_4 [i_1]) * (0 * var_7))) : (arr_5 [9] [12])));
        var_18 ^= 14555;
        var_19 = (min(var_19, ((((1 / (arr_4 [i_1])))))));
        var_20 = var_0;
        var_21 = ((((((!14555) ? var_1 : var_12))) < (((min((arr_0 [i_1] [i_1]), 1)) ? (var_2 / var_9) : (arr_5 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_22 = (((arr_1 [i_2]) % var_1));
        var_23 = 61669;
    }
    #pragma endscop
}
