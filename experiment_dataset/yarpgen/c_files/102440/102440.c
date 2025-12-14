/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_14;

    for (int i_0 = 4; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_16 = ((var_8 ? (max(((min(var_8, (arr_1 [i_0])))), var_0)) : (((((arr_0 [i_0]) && (((8995101361953619251 << (arr_0 [i_0]))))))))));
        var_17 = (min(var_17, ((max(((var_3 ? 117440512 : (arr_1 [i_0])), (arr_1 [i_0 - 3])))))));
        var_18 -= max(((~(arr_0 [4]))), (((arr_1 [i_0 + 1]) ? (arr_0 [20]) : var_4)));
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = (arr_0 [16]);
        arr_5 [i_1] = ((((max(13584737135278953730, (arr_2 [i_1] [i_1]))) ? (arr_0 [2]) : (arr_2 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (min(((max((arr_6 [i_2]), (min((arr_3 [i_2]), (arr_6 [i_2])))))), var_11));
        var_19 = (((((((~(arr_7 [i_2])))) ? (arr_7 [i_2]) : ((117440512 ? (arr_0 [i_2]) : var_0)))) - (((((arr_2 [i_2] [i_2]) != var_13))))));
        arr_9 [i_2] [i_2] = ((~((max(-42, (arr_6 [i_2]))))));
        var_20 = (min(var_20, ((((max((arr_2 [i_2] [i_2]), 4862006938430597885)) << ((((~(arr_6 [i_2]))) + 289)))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (arr_11 [i_3]);
        var_21 = ((arr_12 [i_3]) ^ (arr_11 [i_3]));
        arr_14 [i_3] [i_3] = 117440515;
        var_22 = (min(var_22, ((((((var_13 ? -59 : 281406257233920))) ? (((((arr_10 [i_3]) > var_10)))) : (arr_12 [i_3]))))));
        var_23 = (arr_11 [i_3]);
    }
    var_24 = (((((((64864 ? var_2 : var_12))) ? var_5 : var_6)) > 65535));
    #pragma endscop
}
