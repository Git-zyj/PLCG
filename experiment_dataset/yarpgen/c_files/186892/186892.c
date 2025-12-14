/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [10] [0] = (((((~(arr_1 [i_0])))) ? ((max((arr_1 [i_0]), (arr_0 [i_0])))) : 48991));
        arr_4 [i_0] [i_0] = var_8;
        arr_5 [i_0] = ((~((~(arr_2 [i_0])))));
        arr_6 [i_0] = ((((max(0, (arr_0 [i_0])))) ? ((536870656 ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_10 [i_1] = var_7;
        arr_11 [i_1] = var_0;
        arr_12 [i_1] [i_1] = (arr_7 [i_1] [i_1]);
        var_10 = ((~(~var_7)));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_11 = (((((max(var_3, (arr_15 [i_2]))) != var_4)) ? ((~(arr_13 [i_2] [i_2]))) : ((~(var_6 | var_3)))));
        var_12 = ((~((((arr_13 [i_2] [i_2]) <= var_1)))));
        var_13 = var_4;
        var_14 = max(123, ((var_0 >> ((((var_0 ? 13281688164349341710 : (arr_14 [i_2] [i_2]))) - 13281688164349341707)))));
    }
    for (int i_3 = 2; i_3 < 7;i_3 += 1)
    {
        var_15 = ((((((~var_4) <= (((min(251, var_9))))))) >> ((((111 ? 50 : 2084887336)) - 36))));
        var_16 = arr_1 [i_3];
        var_17 = 1;
    }
    var_18 = (min(var_18, var_1));
    #pragma endscop
}
