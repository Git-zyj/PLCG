/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_15;
    var_18 -= var_12;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 = ((var_9 ? 878688489 : (min(-0, (min(-16, -9096085360455112039))))));
            var_20 = (max(var_20, ((-((~((15 ? -6942127509860354893 : 70))))))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [7] = -var_0;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_21 = ((-((max((min(var_5, var_8)), var_5)))));
                            var_22 = (min(var_22, var_14));
                            arr_17 [i_0 - 2] [2] [i_0] [i_0 - 1] [i_0] = ((((((arr_5 [i_0] [i_0 - 1]) || (arr_0 [i_0 + 1]))) ? 2474168086 : (((min((arr_7 [i_0] [1]), var_9)))))));
                        }
                    }
                }
            }
            var_23 = (arr_7 [1] [i_2]);
        }
        var_24 = (min(var_24, var_5));
        var_25 = (min(var_25, var_5));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_26 = (~var_7);

            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    arr_26 [i_0 + 1] [i_6] [i_7] [i_8] = (((((~var_4) + 2147483647)) << (((arr_7 [i_7 - 2] [12]) - 1))));

                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        arr_30 [i_9] [16] [i_7 + 3] [i_0] [i_0] = ((((17003 ? var_2 : (arr_9 [i_7 + 2] [i_8] [14]))) - (var_12 || var_4)));
                        var_27 -= (arr_19 [1]);
                        var_28 *= ((((!(arr_19 [i_0 + 1]))) ? (((arr_10 [i_0 - 2]) ? (arr_11 [i_0] [5] [10] [i_8]) : var_15)) : ((63638 ? var_4 : (arr_27 [i_0])))));
                    }
                    var_29 = (arr_14 [i_0 - 2] [i_7 - 2]);
                }
                for (int i_10 = 3; i_10 < 17;i_10 += 1)
                {
                    arr_34 [i_0] [i_0] [i_0] [10] = (var_3 - -16);
                    arr_35 [1] [i_6] [i_7] [i_6] = (((~var_7) ? (var_12 / var_0) : (((arr_28 [i_0 + 1] [12] [i_6] [i_0 + 1] [i_0 + 1]) ? 1646197324737885675 : (arr_16 [i_0] [i_0 - 2] [15] [i_0] [i_0])))));
                    arr_36 [i_0 + 1] [i_6] [i_7] [i_10 + 1] = var_3;
                }
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    arr_39 [i_0] [17] [i_0] [i_11] = (arr_5 [i_7] [i_6]);
                    arr_40 [i_0] [i_0] [i_0 - 2] [i_0 + 1] = (((arr_5 [i_0 - 1] [i_0 + 1]) >> (((arr_5 [i_0 - 1] [i_0 - 1]) - 12848158246527529675))));
                    arr_41 [i_0 + 1] |= (((arr_12 [i_7] [1] [5] [i_7]) ? var_14 : (arr_37 [i_0 - 2] [i_6] [i_0 - 2] [1])));
                    var_30 ^= (((((~(arr_23 [i_0] [i_0] [i_0] [i_0 + 1])))) / var_0));
                    var_31 += var_16;
                }
                var_32 = ((-(arr_21 [i_0 - 2] [i_6])));
            }
            arr_42 [i_6] [i_0 + 1] = ((1 / (~1646197324737885684)));
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_33 = (min(var_33, (((arr_43 [8]) ? var_16 : ((var_9 ? 0 : var_13))))));
        arr_46 [1] = var_5;
    }
    for (int i_13 = 0; i_13 < 14;i_13 += 1)
    {
        var_34 = ((~((3896258344 ? 23555 : var_13))));
        var_35 *= var_8;
        arr_50 [i_13] [i_13] = ((var_10 / (((22 ? 24 : 8)))));
        arr_51 [i_13] [i_13] = ((~((((arr_28 [i_13] [i_13] [i_13] [12] [0]) <= (arr_28 [i_13] [i_13] [i_13] [i_13] [i_13]))))));
    }
    for (int i_14 = 3; i_14 < 15;i_14 += 1)
    {
        arr_54 [i_14 - 1] = -0;
        var_36 = ((-var_1 ? (!var_5) : 34));
        var_37 = ((-(((((var_5 ? var_5 : (arr_44 [1])))) ? var_8 : 30464))));
    }
    #pragma endscop
}
