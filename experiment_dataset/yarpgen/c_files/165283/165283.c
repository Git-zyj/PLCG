/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max((~393995199), var_3)), 32));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = (--5602);
        arr_2 [i_0] [i_0] = 21;
        arr_3 [i_0] = (arr_1 [10]);
        var_19 *= -81;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_20 *= (max((min((arr_5 [i_1]), 0)), 234));
        arr_6 [i_1] = 234;
        var_21 = (max(((((max((arr_0 [i_1]), (arr_5 [i_1])))) ? (arr_5 [i_1]) : (~-25))), -229));
        var_22 = ((21 ? (max(-3325, (arr_4 [i_1] [i_1]))) : (((3900972108 ? (arr_4 [i_1] [i_1]) : (arr_1 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_23 *= (max((max(30293, (((arr_10 [i_2]) ? 6074 : (arr_10 [i_2]))))), (((((min(5, (arr_0 [i_2])))) ? 1 : ((1411812924 ? (arr_5 [i_2]) : (arr_7 [i_2] [i_2]))))))));
        arr_11 [16] = (arr_5 [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_24 = (min(var_24, (((5812 ? -25538 : 14924)))));
        arr_15 [i_3] = -14906;
    }
    #pragma endscop
}
