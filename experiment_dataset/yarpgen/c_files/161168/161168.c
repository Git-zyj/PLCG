/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (min(var_13, (arr_2 [i_0] [0])));
        arr_3 [i_0] = (((arr_1 [i_0]) > -7532781380106866));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [21] = ((-7532781380106866 ? -var_8 : (arr_5 [i_1] [i_1])));
        var_14 = (min(var_14, (((((max((max((arr_4 [i_1] [i_1]), var_9)), -var_10))) ? (arr_5 [i_1] [1]) : 4014099942)))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_1] [i_2] = 1157968129;
            var_15 = (~-21);
        }
        var_16 = (min(var_16, ((min((min(var_4, var_6)), var_7)))));
        var_17 = (((arr_5 [i_1] [i_1]) || ((((arr_8 [i_1] [i_1]) ? var_0 : (min(280375465082880, var_10)))))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        var_18 = 7532781380106866;

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_14 [i_3] [11] = (((arr_11 [i_3] [i_4]) ? var_6 : (arr_10 [i_3 - 3] [i_4])));
            var_19 += (6727771907928250132 ^ -var_2);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((var_8 + (var_11 / 3245656326905847529))))));
                            var_21 = (((((var_8 ? var_4 : 4014099931))) ? var_0 : (arr_18 [i_7] [4] [i_4] [i_3])));
                            arr_25 [15] [i_4] [i_5] [0] [14] [i_7] [1] |= var_11;
                            var_22 = var_10;
                        }
                    }
                }
            }
            var_23 = var_3;
            var_24 = (min(var_24, 1));
        }
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            arr_29 [i_3] [i_3] &= ((var_2 ? (arr_17 [i_3]) : (arr_27 [i_8 - 1] [i_3 + 2])));
            arr_30 [i_3] [i_3] = (~18446463698244468736);
            arr_31 [i_3 + 2] = (var_8 / var_12);
        }
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            var_25 = (arr_34 [i_3] [i_9 + 1]);
            var_26 = ((-(~12076617342958316980)));
            arr_35 [i_3] [i_3] = ((var_8 ? (arr_23 [0] [5] [14] [1] [i_9 + 1]) : -32415));
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            var_27 += (((arr_37 [i_3] [i_10] [i_3 - 3]) == (arr_37 [i_3] [i_3 + 1] [i_3 - 1])));
            var_28 ^= ((~(1691982082 + var_5)));
        }
        arr_38 [i_3 - 2] [i_3 - 2] = 18446463698244468736;
        arr_39 [i_3 - 3] = ((((83 ? var_2 : 2147483647)) ^ 0));
        var_29 = var_1;
    }
    var_30 = 2212571026;
    #pragma endscop
}
