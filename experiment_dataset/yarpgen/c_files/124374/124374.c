/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    arr_10 [i_1] |= var_9;
                    var_12 = (~(min((arr_5 [i_0 - 1] [i_2 + 1] [i_0 - 1]), (arr_5 [i_3] [i_2 - 2] [i_0 - 1]))));
                    arr_11 [i_0] [i_1] [i_0] [i_2 - 1] [i_0] = (((((-2483446947500548268 ? var_4 : (arr_5 [i_0] [i_3] [i_2 + 1])))) ? ((((141 <= (arr_5 [i_3] [i_1] [i_2 + 1]))))) : (arr_5 [i_0] [i_1] [i_2 + 1])));
                }
                var_13 = arr_3 [i_0];
                arr_12 [i_0] [i_0] [9] = (arr_3 [i_2]);
                var_14 = ((1 ? (arr_5 [i_0 + 1] [i_2 - 1] [i_2 - 2]) : (((arr_5 [i_0 - 1] [i_2 - 2] [i_2 + 1]) ? (arr_5 [i_0 - 1] [i_2 - 1] [i_2 - 1]) : (arr_5 [i_0 - 1] [i_2 - 2] [i_2 - 2])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_15 = (((arr_5 [i_2 + 1] [i_2] [i_5]) ? (min((arr_14 [i_0] [21] [i_0 - 1] [i_0 - 1] [i_2 - 1]), (min(var_8, (arr_8 [i_0] [i_0]))))) : (((((arr_15 [i_2 - 1] [i_4]) && (arr_5 [i_0 + 1] [i_2 + 1] [i_4])))))));
                            var_16 = (((arr_8 [i_0] [i_1]) ? (min(183, (arr_8 [i_0 - 1] [i_5]))) : (((arr_8 [i_2 - 1] [i_1]) ? (arr_8 [i_0] [i_5]) : 76))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    var_17 = (max(var_17, -5961303872165508181));
                    arr_21 [i_0] [i_1] [i_0] = 113;
                    var_18 = ((var_10 ^ -76) ? 917004873 : (arr_6 [i_0] [i_6] [i_6]));
                    arr_22 [i_7 + 2] [i_0] [i_0] [9] = (arr_18 [i_0 + 1]);
                }
                for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_0] [20] = (76 ^ 917004873);
                    var_19 &= (((arr_24 [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_1]) > var_11));
                    var_20 = 1609598776;
                    var_21 = (var_11 ? (arr_8 [i_0 - 1] [i_1]) : (arr_8 [i_0 + 1] [i_6]));
                }
                arr_27 [i_0] = ((+(((arr_8 [i_0] [i_1]) ? var_4 : (arr_17 [i_0] [i_1] [i_1])))));
            }
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                var_22 = -77;
                var_23 = (min(var_0, (((-77 / ((var_6 / (arr_9 [i_0] [i_0 - 1] [i_0] [i_9]))))))));
                var_24 = ((var_9 ? (min((arr_29 [i_0] [i_0] [i_0]), var_7)) : (arr_23 [i_0] [i_0] [i_1] [i_9] [i_9 + 1] [i_9])));
            }
            arr_31 [i_0 + 1] [i_0] = (((arr_7 [i_0] [i_1] [i_0 + 1]) / (((arr_7 [i_0] [i_1] [i_1]) ? -73 : var_3))));
        }
        for (int i_10 = 3; i_10 < 19;i_10 += 1)
        {
            var_25 = (min((min((var_6 || -1628855385), (min(250, -16)))), 241));
            var_26 = (((arr_32 [i_0] [i_0]) * (min((arr_32 [i_0] [i_0]), var_4))));
            var_27 = (max(var_27, var_2));
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            arr_38 [i_0] [i_0] [i_0] = (min((((arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1]) & (-76 || 8755578311683571999))), ((((-4330464606107958095 ? (arr_3 [i_0]) : (arr_5 [i_0] [3] [i_11])))))));
            var_28 = var_1;
            arr_39 [i_0] [i_0] = min((((arr_35 [i_11] [i_11]) & 917004873)), (~3906701562));
        }
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 20;i_14 += 1)
                {
                    {
                        var_29 = (min((((min(var_3, var_2)) + (var_2 || 11861496644278434922))), 1628855384));
                        var_30 = (arr_6 [i_14] [3] [i_14]);
                    }
                }
            }
        }
        arr_49 [i_0] = (((((((((arr_47 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0]) ? (arr_41 [i_0] [15] [i_0]) : (arr_5 [i_0] [i_0] [i_0 + 1])))) ? (arr_7 [i_0] [19] [i_0]) : (6875683326750831124 ^ 1942742930)))) || (arr_15 [i_0] [i_0 - 1])));

        /* vectorizable */
        for (int i_15 = 2; i_15 < 18;i_15 += 1)
        {
            arr_52 [i_0] [i_15] = var_10;
            var_31 = 3772592236;
        }
    }
    var_32 = var_8;
    /* LoopNest 2 */
    for (int i_16 = 3; i_16 < 11;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 12;i_17 += 1)
        {
            {
                var_33 = (arr_54 [i_16] [i_16]);
                var_34 = (min(var_1, (min((arr_53 [i_16]), (arr_53 [i_16])))));
            }
        }
    }
    #pragma endscop
}
