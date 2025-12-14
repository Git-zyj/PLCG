/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((+-18) * var_3));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_14 *= (arr_0 [i_0]);
        var_15 = ((((-(arr_1 [i_0 + 1]))) * (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_16 += ((30 ? -539380382 : (3630532840 != 4095)));
            arr_11 [i_2] [i_2] = (arr_2 [i_2]);

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 4; i_4 < 15;i_4 += 1)
                {
                    var_17 = ((((((arr_5 [i_1]) ? (arr_8 [i_1] [i_2] [i_2]) : (arr_9 [i_3]))) + 9223372036854775807)) >> (1932744854 - 1932744824));
                    arr_18 [i_4] [i_2] [i_3] [i_3] [i_2] [14] = ((-(var_7 - var_0)));
                }
                var_18 = (min(var_18, (arr_7 [i_2] [i_2 + 1])));
                var_19 += ((-(arr_7 [i_2 - 1] [i_2 + 2])));
                arr_19 [i_2] [i_2] = (((arr_16 [12] [i_2 + 1] [i_2 + 1] [i_2 - 1]) >> (((((arr_4 [i_1] [i_3]) ? -1 : var_12)) - 4294967270))));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_20 = (~212);
                arr_24 [i_5] [i_2] [i_2] [i_1] = (((arr_4 [i_2 + 1] [i_2 + 1]) <= (arr_17 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1])));
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
            {
                var_21 = (min(var_21, -1));

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_22 |= (~var_7);
                    var_23 = 319995370;
                }
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
            {
                var_24 += 89;
                var_25 += ((~(!46954)));
                arr_31 [i_2] [i_2] = ((!(arr_25 [i_1] [i_2 - 1] [i_2 - 1])));
                arr_32 [i_1] [i_2] [i_2] = (arr_10 [i_1]);
                arr_33 [i_2] [i_2 + 2] [i_2] = 18581;
            }
            arr_34 [i_1] [i_2] = ((~(arr_12 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 1])));
        }
        arr_35 [i_1] = ((~(max(var_7, var_7))));
        var_26 = ((((max((arr_26 [6]), (arr_26 [12])))) ? (~4294967295) : (((arr_26 [8]) & 1))));
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        arr_38 [i_9] = 65535;
        var_27 = ((~(arr_9 [i_9])));
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    {
                        var_28 ^= ((-(arr_4 [i_11 + 1] [i_11 - 2])));
                        arr_47 [i_9] [i_9] [i_9] [i_9] = (arr_17 [i_9] [i_10 - 2] [i_12] [i_10]);
                        var_29 = (((arr_27 [i_10 - 2] [i_10]) / (arr_27 [i_12] [i_9])));
                        arr_48 [i_9] = (((var_5 && 4294967290) - (arr_30 [i_10 - 2] [i_10 + 1] [i_10 - 1])));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 16;i_13 += 1)
    {
        arr_52 [i_13] = (37 ? 2147483640 : -101818466);

        /* vectorizable */
        for (int i_14 = 1; i_14 < 15;i_14 += 1)
        {
            arr_55 [i_13] = ((3143701017 ? (arr_0 [i_14 + 1]) : (arr_0 [i_14 - 1])));
            var_30 = (((arr_28 [8] [i_14 + 1] [i_14 - 1] [i_14 + 1]) != var_11));
        }
        arr_56 [i_13] = var_10;
        arr_57 [i_13] = 2147483640;
    }
    var_31 &= (var_7 != var_4);
    #pragma endscop
}
