/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_14 *= var_6;

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                var_15 = (min(var_15, ((((arr_7 [i_0] [i_2 + 1] [i_2]) ? var_9 : -var_6)))));
                var_16 += ((-(((arr_2 [i_1] [i_2]) ? var_2 : var_11))));
            }
            var_17 = (min(var_17, ((((arr_2 [i_0] [i_1]) == (arr_2 [9] [i_1]))))));
            arr_10 [i_0] = (((arr_9 [i_1] [i_1] [i_1] [i_1]) ? (-32767 - 1) : (arr_7 [1] [i_1] [i_1])));
        }
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            arr_14 [i_0] = (arr_7 [i_0] [i_3 - 1] [i_3 + 1]);
            arr_15 [7] [i_3] |= ((((-1986672286 ? -4886223917307646419 : -8415)) >= var_0));
            var_18 += (((arr_2 [i_0] [i_3 + 1]) * 4294901760));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_19 [i_0] [i_0] [i_0] = (!0);
                var_19 = var_10;
                arr_20 [6] [6] = ((((arr_0 [i_4] [i_0]) * var_1)));
                var_20 = (1 | 16455);
            }
            arr_21 [2] [i_0] = (arr_9 [i_3 + 2] [0] [0] [i_0]);
        }
        var_21 = (min(var_21, ((((arr_3 [4] [14] [i_0]) < -1)))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_22 = 77;

        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_26 [0] = 3237032499;
            var_23 = (arr_4 [i_5]);
        }
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_32 [5] [i_8] = ((((arr_16 [i_7] [i_8] [i_8] [i_8]) / (arr_16 [i_7] [i_7] [i_8] [3]))));
            arr_33 [8] [i_7] [8] = max((((arr_0 [i_8] [i_7]) ? (((arr_11 [9] [i_8] [i_8]) | var_0)) : ((-574482313 ? var_9 : var_8)))), (var_9 ^ 62));
            arr_34 [i_7] = ((((max(var_2, (arr_9 [i_8] [i_7] [i_7] [i_7])))) - ((((-13619 ? -1 : 1729382256910270464)) | 3268244705))));
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_24 -= (min(((((max((arr_12 [i_7] [i_7] [i_7]), (arr_35 [i_9] [2])))) ? (arr_30 [0] [0]) : (((arr_27 [1]) ^ -5563711844692828026)))), ((((arr_35 [i_7] [i_7]) < (0 < 51))))));
            arr_37 [i_9] = ((((arr_36 [i_7]) != 18446744073709551615)));
        }
        arr_38 [1] = (((((-(var_5 + var_8)))) * var_11));
    }
    var_25 = (((max(var_5, ((1131134775 ? var_9 : var_0)))) != var_6));
    var_26 = ((max(0, -1)));
    #pragma endscop
}
