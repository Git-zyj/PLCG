/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((-(~var_0)))) ? (-1 && -6594261765551158100) : (((-6594261765551158098 ? var_12 : var_12)))));
    var_14 = (~256);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= 28;
        var_15 *= 2021478590;
        var_16 = (max(var_16, var_5));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = (((arr_4 [i_1]) ? ((-6594261765551158085 ? -5783488589956684498 : -8723934218108214722)) : 1100550216));
        arr_5 [i_1] |= (((arr_4 [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_4 [i_1])));
        arr_6 [i_1] = (((arr_3 [i_1] [i_1]) ? (arr_4 [i_1]) : ((((arr_4 [i_1]) ? -6594261765551158100 : var_3)))));
        var_18 = (((-6594261765551158093 ? 3155544258 : 1496016379)));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_19 *= (arr_7 [3]);
        var_20 = var_10;
    }
    #pragma endscop
}
