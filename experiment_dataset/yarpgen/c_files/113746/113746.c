/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [1] = ((((((arr_2 [i_0]) & 144))) ? ((-(var_9 != var_8))) : (max((min(var_18, -1391682978)), (arr_0 [i_0])))));
        var_19 = (((((arr_1 [i_0]) < (arr_1 [i_0]))) || ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = var_13;

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_20 = (+(((arr_6 [i_1 - 4]) ? (arr_6 [i_1 + 1]) : (arr_6 [i_1 - 3]))));
            var_21 = (arr_9 [19] [16] [i_1 - 3]);
            arr_10 [i_1] = ((arr_5 [i_1 + 1]) != ((max((arr_5 [i_1 + 1]), (arr_5 [i_1 - 4])))));
        }
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            arr_14 [i_3] = var_8;

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_22 = ((14280 ? 144 : ((max((arr_15 [9] [i_3] [i_1] [i_3 + 1]), (arr_4 [i_3 + 1] [1]))))));
                var_23 = (min(var_23, (((max((((arr_16 [i_1 + 1] [i_1]) - 7824066168195668698)), (max((arr_5 [i_4]), (arr_16 [i_1] [i_1]))))) >= (arr_17 [i_1 - 4] [i_3] [i_4])))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_24 = var_7;
                var_25 = ((((101 ^ (arr_20 [0]))) + ((((arr_16 [i_1] [i_3]) && -1509867941)))));
                var_26 = (((arr_8 [i_1]) ? var_2 : (arr_11 [i_1 - 4] [i_3] [i_1 - 4])));
            }
            var_27 = (arr_6 [i_1 - 1]);
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_24 [i_1] [i_6] [i_1] &= (min(((-(((arr_18 [i_1] [3] [i_6]) ? (arr_4 [i_1] [10]) : var_5)))), ((-(arr_18 [i_1] [i_6] [i_1])))));
            arr_25 [i_6] = ((((((arr_17 [i_1] [i_1 + 1] [16]) ? (arr_17 [i_1] [i_1 - 3] [i_6]) : var_16))) ? (arr_17 [i_1] [i_1 - 1] [i_6]) : (~1040881506)));
            var_28 = (max(var_28, (arr_17 [i_1] [1] [1])));
        }
    }
    var_29 &= var_4;

    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_29 [i_7] [21] = 1377514909;
        arr_30 [i_7] [i_7] = var_4;
        var_30 = 1509867940;
        arr_31 [i_7] = (arr_28 [i_7]);
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_36 [i_8] = ((+((var_6 ? (((arr_35 [i_8]) ? var_3 : (arr_26 [i_8] [i_8]))) : ((((arr_28 [i_8]) >= 112)))))));
        arr_37 [i_8] = max((~26), (arr_33 [i_8]));
    }
    var_31 = (~var_0);
    #pragma endscop
}
