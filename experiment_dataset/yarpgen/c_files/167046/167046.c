/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_0, var_5));
    var_17 = (max(var_17, (((((max(var_8, 42)) / 268435328)) % (((((max(var_15, var_15))) ? ((max(var_14, var_4))) : (var_9 | 206))))))));
    var_18 = 1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (max(var_19, ((((max((130 <= 199), ((4026531967 ? 1 : (arr_0 [i_0] [i_0]))))) | -0)))));
        arr_2 [i_0] [i_0] = (min(var_13, (((-18014398509481984 || -20) % -599829990734528842))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = (((((-(arr_1 [i_1 + 2])))) ? ((11370610333873410018 ? ((max(14, 51))) : -var_3)) : (arr_3 [3])));
        arr_8 [i_1] = ((~(max((((var_9 ? var_4 : (arr_6 [i_1])))), ((268435328 ? (arr_1 [i_1 + 2]) : 169))))));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_20 = ((((((arr_3 [i_2 - 1]) ? ((18446744073709551615 ? 18446744073709551602 : var_15)) : ((max((arr_4 [5]), (arr_6 [i_2]))))))) ? (arr_10 [i_2] [i_2]) : (((arr_10 [i_2] [3]) ? ((288230307432235008 ? (arr_1 [i_2]) : (arr_10 [i_2 - 1] [2]))) : (arr_4 [i_2 - 1])))));
        arr_11 [i_2 + 1] [7] = ((255 ? 0 : 0));
        var_21 = var_6;
    }
    var_22 = var_11;
    #pragma endscop
}
