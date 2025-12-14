/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0 + 1] [i_0] = (max((((arr_1 [i_0]) ? (arr_1 [i_0]) : 697842846)), (min(3597124443, (arr_1 [i_0])))));
        arr_5 [i_0] = ((4848866192756059543 ? 4294967284 : (-32767 - 1)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_20 = (min(var_20, 32751));
        arr_9 [i_1] [i_1] = var_10;
        var_21 = (max(var_21, ((((((var_16 ? 32766 : var_3))) / (arr_6 [8]))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_14 [8] [8] = (min((((~65518) ? 0 : ((32752 | (arr_12 [i_2]))))), -1));
        arr_15 [i_2] [i_2] = (max(((32751 ? ((max(var_8, (arr_3 [i_2])))) : var_14)), 10068));
        arr_16 [i_2] = (((((arr_7 [i_2]) ? (arr_7 [i_2]) : var_9)) * (((max((!4294967295), (!6475123988035762422)))))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_22 = ((1 ? 67108863 : 65518));
        var_23 = (arr_6 [i_3]);
        var_24 = (min(((((arr_6 [i_3]) != (134 < 255)))), ((var_3 ? (((var_13 ? (arr_6 [i_3]) : (-32767 - 1)))) : (min(13597877880953492054, (arr_17 [i_3])))))));
    }
    var_25 = var_14;
    #pragma endscop
}
