/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((((min(32767, -797946255))) ? (max((arr_2 [i_0]), 196)) : (arr_2 [i_0])))) ? 65 : (arr_2 [i_0])));
        arr_5 [i_0] [i_0] = (((arr_2 [i_0]) ? (arr_1 [i_0]) : 65));
        var_14 = (min(var_14, ((max((((var_3 > (arr_2 [i_0])))), 409205796)))));
        var_15 |= ((((((arr_0 [i_0]) ? 194 : 5106551281914762795))) ? (min((max((arr_1 [i_0]), var_9)), (!var_5))) : ((min((arr_2 [i_0]), ((max((arr_0 [i_0]), (arr_0 [i_0])))))))));
        arr_6 [i_0] = ((((14 > var_10) > (arr_0 [i_0]))));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        var_16 = (max(((255 ? (arr_8 [i_1 - 1]) : var_8)), (((arr_8 [i_1 - 1]) ? var_2 : (arr_8 [i_1 + 1])))));
        var_17 = 1;
        arr_9 [i_1] = 32748;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_18 = (min(((1099494850560 ? (-2147483647 - 1) : ((87 ? var_13 : 41716543)))), (max((max(var_11, -1651925780)), (max(var_8, 268434944))))));
        var_19 -= (max((arr_0 [i_2]), (((!((84 > (arr_1 [i_2]))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_15 [i_3] = (((arr_13 [i_3] [i_3]) > (arr_14 [i_3])));
        var_20 = (min(var_20, ((((arr_14 [i_3]) ? (~-5377130211764017155) : 8465853566307694993)))));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_21 = (min(var_21, (arr_14 [i_4])));
        var_22 = ((-2676025490159403338 ? (arr_17 [i_4]) : 196));
        arr_18 [i_4] = ((2147483647 > (arr_14 [i_4])));
        var_23 = (((527783902016315786 > (arr_13 [i_4] [i_4]))));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = ((((((arr_21 [i_5]) ? (arr_20 [i_5 - 1] [i_5]) : (arr_20 [i_5 - 1] [i_5])))) ? (((arr_19 [i_5]) ? (arr_20 [i_5 - 1] [i_5]) : (arr_20 [i_5 - 1] [i_5]))) : 62));
        arr_23 [i_5] [i_5] = (arr_20 [i_5] [i_5]);
    }
    #pragma endscop
}
