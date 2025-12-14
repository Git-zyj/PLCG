/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, ((((arr_1 [i_0 - 1] [i_0 - 1]) ? ((var_2 ? ((18941 ? (arr_1 [1] [1]) : 18926)) : (((arr_2 [7]) ? (arr_0 [i_0]) : var_4)))) : 18951)))));
        var_13 = 11289350671472979446;
        var_14 = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_4 [i_1 - 2]);
        var_15 = ((39 ? -24653 : 689675469633794906));
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] = 1103940847;
        arr_9 [i_2] [i_2] = min(var_8, (max((!var_3), (((arr_1 [i_2] [i_2]) ? (arr_4 [i_2]) : var_3)))));
    }
    var_16 = (min(var_16, (((((min(15, (!255)))) ? ((((1411109962593303732 ? var_10 : var_1)))) : (min(var_2, ((min(var_7, var_1))))))))));
    var_17 |= ((18446744073709551615 ? 100 : 2659));
    var_18 = -1;
    var_19 = (max(var_0, var_9));
    #pragma endscop
}
