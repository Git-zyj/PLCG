/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 += ((1958636841454919548 ? var_0 : (var_12 != var_9)));
        var_18 = ((arr_0 [i_0]) ? 253 : (var_0 & var_13));
        arr_2 [i_0] = ((var_15 ? (~254) : 0));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_19 = ((!(~174)));
        arr_6 [i_1] [i_1] = (arr_5 [i_1]);
        var_20 = ((((var_5 / var_14) & (((var_0 ? var_15 : 251))))));
        arr_7 [i_1] = var_4;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_11 [i_2] = var_14;
        arr_12 [7] = (var_14 - var_6);
        var_21 = ((-var_7 ? ((var_2 ? var_7 : (arr_3 [5]))) : 0));
        var_22 = ((~(((var_2 < (min(13150556190182652685, var_12)))))));
    }
    var_23 = ((var_5 ? 2047 : (min(28672, (4987370268983784970 | 3233454121)))));
    var_24 = (min((-var_15 & 255), (((((min(var_13, var_13)))) | (~4397509640192)))));
    #pragma endscop
}
