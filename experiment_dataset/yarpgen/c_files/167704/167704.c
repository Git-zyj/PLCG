/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (var_1 & 244);
        arr_3 [i_0] = ((29301 ? ((((-(arr_0 [i_0] [i_0]))) ^ (arr_0 [i_0] [i_0]))) : (((((244 & (arr_1 [i_0])))) ? (arr_1 [18]) : (arr_1 [i_0])))));
        arr_4 [i_0] = -102;
        arr_5 [i_0] = (min((((~12) ? (max(6, 6635198631987434906)) : var_2)), (((((max((arr_0 [i_0] [i_0]), 187))) ? ((var_4 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))) : ((min(1, 104))))))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] [i_1 + 1] = (max((((var_1 / 33502674) % 1)), (((-((43931 << (arr_6 [i_1] [i_1]))))))));
        arr_9 [i_1] = ((((((max(-5, (arr_6 [i_1] [23])))) & (((arr_7 [i_1] [i_1]) - (arr_6 [i_1] [i_1]))))) - ((((arr_7 [i_1 + 1] [i_1 + 1]) > 1)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [4] = (((arr_0 [i_2] [i_2]) | (arr_0 [i_2] [i_2])));
        arr_13 [i_2] = (arr_7 [6] [i_2]);
        arr_14 [i_2] = 37127;
        arr_15 [i_2] = ((791190178 * (arr_11 [i_2])));
    }
    var_15 = 16998679848064191515;
    var_16 |= var_5;
    #pragma endscop
}
