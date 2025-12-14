/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 8008;
    var_18 = var_5;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = arr_0 [i_0];
        arr_2 [i_0] [i_0 - 1] = ((!(arr_1 [i_0])));
        arr_3 [i_0] = ((!(arr_0 [i_0])));
        var_20 = (max(var_20, ((((arr_1 [i_0 + 1]) / (arr_1 [i_0 - 1]))))));
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_21 = (((10926 | 14191) ? (24603 < 13654) : -9402));
        arr_7 [13] [i_1] = ((((!(arr_4 [i_1]))) ? ((~(arr_5 [i_1] [i_1]))) : ((((arr_5 [i_1] [i_1]) > (arr_5 [i_1] [i_1]))))));
        var_22 = (min(var_22, (((((((12782 < -15090) >= ((min((arr_4 [i_1]), var_2)))))) | (arr_5 [3] [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (arr_4 [i_2])));
        var_24 = (min(var_24, (arr_8 [i_2] [i_2])));
        arr_10 [i_2] [i_2] = 32767;
        var_25 += arr_4 [i_2];
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_26 = (max(var_26, (((~(arr_1 [i_3]))))));
        var_27 = (min(var_27, (((((!(arr_11 [i_3]))))))));
    }
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        var_28 &= (arr_6 [i_4 - 1]);
        arr_17 [i_4] [i_4] = ((-9 ? 511 : (-32767 - 1)));
        var_29 ^= (min(((32512 ? -16384 : 30036)), -32580));
    }
    var_30 = (max(var_30, var_16));
    #pragma endscop
}
