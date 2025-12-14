/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = (max(13037, (max(0, (max(1, 1))))));
    var_20 = -18111;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] &= 105;
        var_21 = (max(var_21, ((max(((5380730882233030427 ? 61706 : 0)), ((((!(arr_0 [1]))) ? ((232 ? 4751 : 61711)) : (arr_0 [i_0]))))))));
        var_22 = (min(var_22, ((((-(arr_0 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_23 = (max(var_23, (((((~(arr_1 [i_1])))) ? (arr_5 [1]) : var_12))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_8 [i_1 + 4] [8] &= (((arr_0 [i_1 + 4]) ? 0 : (arr_0 [i_1 + 4])));
            var_24 |= (((arr_1 [i_1 + 2]) ? 65527 : (arr_1 [i_1 + 1])));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_25 = ((!(arr_7 [7] [i_3])));

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_26 -= (((arr_3 [i_1 + 3]) ? (arr_3 [i_1 + 4]) : (arr_3 [i_1 + 3])));
                    var_27 = (max(var_27, 13194));
                    var_28 = ((13176 ? (-9223372036854775807 - 1) : 2147483638));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_29 = var_6;
                    var_30 = var_1;
                    var_31 = ((~(((arr_10 [9]) ? 0 : (arr_6 [0])))));
                    arr_18 [i_1] [i_2] [i_3] [i_5] = 26852;
                }
                var_32 = -26853;
            }
            var_33 = (min(var_33, (((((!(arr_4 [i_1 + 3]))) ? ((-113 ? var_14 : 204)) : (-127 - 1))))));

            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                var_34 |= var_7;
                var_35 = 29;
            }
        }
        var_36 = (min((arr_21 [i_1 + 2]), (((arr_11 [i_1 + 4] [i_1 + 3]) ? (arr_21 [i_1 - 1]) : (arr_11 [i_1 + 2] [i_1 + 2])))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_37 &= (arr_6 [i_7]);
        var_38 = -24;
        var_39 = (max(var_39, (arr_5 [i_7])));
    }
    var_40 = (max(231, (((((var_16 ? var_8 : var_2))) ? var_7 : (~var_11)))));
    #pragma endscop
}
