/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((((var_0 ? (arr_1 [i_0] [i_0]) : 2191878182))) ^ (~var_9)))) ? ((2848203285 & (((arr_0 [i_0]) >> (((arr_0 [i_0]) - 2968393866)))))) : ((var_7 & (((-100 ? (arr_1 [i_0] [i_0]) : 0))))));
        arr_3 [i_0] [i_0] = ((!((max((var_2 & 32239), (((arr_0 [i_0]) + var_9)))))));
    }
    var_11 = var_8;

    for (int i_1 = 3; i_1 < 6;i_1 += 1)
    {
        var_12 = (arr_4 [i_1]);
        arr_7 [i_1] = -3284719976488943848;
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_13 = (min(var_13, (((-(arr_10 [i_2 - 1] [i_2 + 2]))))));
        var_14 = (max(var_14, ((((arr_9 [i_2] [i_2]) * ((0 % (arr_9 [i_2] [i_2]))))))));
        arr_11 [i_2 + 1] [i_2] = (min(((((!(arr_9 [i_2] [i_2]))))), ((((min(255, var_8))) ? var_4 : var_7))));
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_15 ^= var_2;
        var_16 = (max(var_16, (((((!(arr_10 [i_3] [i_3])))) ^ -100))));
        arr_14 [i_3] [i_3] = 2848203285;
    }
    var_17 = 36472;
    var_18 += ((min(var_0, (var_4 / var_0))) & var_7);
    #pragma endscop
}
