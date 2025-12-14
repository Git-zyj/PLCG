/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (-14468 ^ 1);
        var_14 = -6396;
        var_15 += (((arr_1 [i_0]) > ((((arr_0 [i_0]) > (arr_1 [i_0]))))));
        var_16 ^= ((((((arr_1 [15]) ? -19802 : 2819382616))) ? (arr_0 [i_0]) : 3381319177505852025));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_4 [i_1] |= 1;
        var_17 = (min(var_17, ((((arr_2 [i_1]) ? 114 : (arr_2 [i_1]))))));
        var_18 = (max(var_18, (arr_1 [i_1])));
        var_19 *= (((arr_1 [i_1]) ? var_2 : (arr_1 [i_1])));
    }
    var_20 = ((((-(~var_8))) > ((var_8 ? var_4 : var_4))));

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_21 *= ((19801 > (((arr_5 [i_2]) ? (0 == 0) : ((-67 ? (arr_6 [i_2]) : (arr_5 [i_2])))))));
        var_22 *= (max((arr_6 [i_2]), (min(255, var_0))));
        var_23 ^= (((((-1900128107954826537 ? (arr_5 [i_2]) : ((3 & (arr_6 [i_2])))))) ? (min((arr_6 [i_2]), (((arr_6 [i_2]) ? 19802 : -19774)))) : ((max(1, (arr_5 [i_2]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_24 = var_5;
        var_25 = ((~(((var_0 > (arr_7 [i_3] [i_3]))))));
    }
    #pragma endscop
}
