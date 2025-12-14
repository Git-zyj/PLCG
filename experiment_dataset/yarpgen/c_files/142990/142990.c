/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 211;
        var_12 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_13 = (((arr_7 [i_1]) ? (arr_7 [i_1]) : ((((arr_5 [i_1]) ? var_1 : 1957503644)))));
        arr_8 [i_1] = (((arr_7 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1])));
        var_14 = (min(var_14, (arr_6 [i_1])));
        arr_9 [9] = -15;
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_15 = (arr_6 [i_2]);
        arr_12 [i_2] [4] = (87 && 9223301668110598144);
        var_16 = (arr_5 [0]);
    }
    var_17 = ((2841889617 >= ((((min(87, -1957503646)) + ((max(218, 210))))))));
    #pragma endscop
}
