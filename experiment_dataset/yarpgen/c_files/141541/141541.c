/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_3;
    var_14 = min(var_4, (max(15, ((5777 ? 15 : var_12)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 += (max(-15, 31));
        var_16 |= 47950;
        var_17 = (min((arr_1 [i_0] [i_0]), 59763));
        var_18 = ((max((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_4 [i_1] = (((arr_2 [i_1]) / 59763));
        var_19 = (min(13, (arr_2 [i_1])));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = 5760;
        arr_8 [i_2] = 1;
        arr_9 [i_2] [i_2] = ((var_7 ? (((arr_5 [i_2] [i_2]) - (arr_3 [6]))) : ((13545 & (arr_3 [12])))));
        var_20 -= (arr_6 [i_2]);
        var_21 = (max(var_21, ((max(4, var_11)))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_22 = (max(((((arr_12 [i_3]) ? ((5777 ? 253 : (arr_11 [i_3]))) : (arr_10 [i_3])))), (arr_3 [1])));
        arr_14 [i_3] = 9;
        var_23 -= (((!(arr_10 [i_3]))));
        arr_15 [7] [i_3] = (((arr_11 [i_3]) ? (((var_8 ? 15 : (arr_2 [i_3])))) : (((((!(-32767 - 1))) ? ((((arr_5 [i_3] [i_3]) + var_9))) : 4294967276)))));
    }
    var_24 *= (min(var_11, ((((1 != 1) != ((min(var_12, 22402))))))));
    #pragma endscop
}
