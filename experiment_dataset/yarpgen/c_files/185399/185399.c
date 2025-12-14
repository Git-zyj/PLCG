/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min((((var_11 / var_9) * ((2833609227 ? var_5 : var_9)))), var_1);

    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_14 = 2833609225;
        var_15 = (max(var_15, (min((3637510567 / var_7), ((var_9 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))))));
        var_16 += arr_0 [i_0];
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((arr_4 [i_1]) ? (((((~(arr_3 [i_1])))) ? ((4294967295 | (arr_0 [i_1]))) : (max(4294967295, 0)))) : (arr_1 [i_1] [i_1]));
        var_17 = -950683107;
        var_18 = ((((1461358079 ? (arr_4 [15]) : var_10))) ? (arr_4 [i_1]) : var_10);

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_19 = ((var_8 >> (((max(1461358070, 1461358065)) - 1461358049))));
            arr_9 [i_1] [i_2] [i_2] = arr_8 [i_1 + 1];

            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                arr_14 [i_2] [7] [12] [i_2] = arr_12 [3] [i_2] [i_2];
                var_20 += 3536384201;
                var_21 = (4294967287 && 1475257329);
            }
            /* vectorizable */
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                var_22 = ((arr_15 [14] [i_2] [i_2] [i_2 + 2]) ? (arr_15 [i_1 + 1] [i_2 - 1] [i_2] [i_4]) : var_5);
                arr_19 [i_2] [i_2] [i_2] = (~(~2177710433));
                arr_20 [6] [i_2] [2] [i_2] = (var_10 ? 2833609227 : (arr_16 [i_2] [i_2 - 1] [i_4 - 1]));
                var_23 = (arr_13 [i_1] [i_1 + 1]);
                var_24 = -2801585208;
            }
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_25 = (max(var_25, ((max((arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 2]), (arr_12 [i_1 + 1] [i_1 - 1] [i_1 - 2]))))));
            var_26 = var_12;
            var_27 = -228478386;
            var_28 = (min(var_28, (arr_0 [i_1])));
            var_29 += 4294967278;
        }
    }
    for (int i_6 = 3; i_6 < 15;i_6 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            var_30 = (max(var_30, ((var_1 ? var_2 : (!var_8)))));

            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                var_31 |= (228478392 ? (var_6 <= 2801585208) : (arr_4 [i_6]));
                var_32 = (max(var_32, (!var_3)));
            }
            var_33 += ((((var_1 ? (arr_24 [i_7 + 2]) : 2147483648)) < (arr_7 [i_7 - 1] [i_7 + 2] [0])));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_34 = (arr_23 [i_6 - 2]);
            var_35 = var_10;
            var_36 = 3926967494;
        }
        var_37 = (((var_2 < (arr_1 [i_6 - 3] [i_6 - 2]))) ? ((var_5 - (arr_30 [i_6]))) : (min(4294967273, (arr_26 [i_6] [5] [i_6]))));
        var_38 = -3925542647;
        var_39 = (min(13, 0));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_40 = (~1013521799);
        var_41 *= (~((4294967295 ? 4186112 : (arr_35 [i_10]))));

        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            var_42 = arr_33 [i_10];
            var_43 = (min(var_43, (((arr_38 [i_11 + 1]) << 0))));
        }
    }
    var_44 = var_3;
    var_45 = ((+(((2833609210 <= var_3) >> (var_10 - 2365289058)))));
    #pragma endscop
}
