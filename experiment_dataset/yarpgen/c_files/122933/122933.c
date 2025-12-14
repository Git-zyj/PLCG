/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (max((((arr_0 [i_0]) - (((arr_1 [i_0] [i_0]) + var_3)))), (((!(arr_1 [i_0 - 2] [i_0 + 3]))))));
        arr_3 [i_0] [i_0] = ((24967 ? (--8064) : (max(((4948 | (arr_0 [i_0]))), ((max(var_15, 53136)))))));
        arr_4 [i_0] [11] = arr_1 [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1])));
        arr_9 [i_1] &= (((arr_7 [i_1]) < (((arr_5 [i_1] [i_1]) ? 12413 : 12402))));

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_12 [i_2] = arr_10 [i_2 + 1] [i_2 - 2];
            var_20 = (max(var_20, (((-(arr_10 [i_2 + 1] [i_2 - 2]))))));
            arr_13 [i_1] [i_2] = (var_6 > var_19);
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_16 [i_3] [i_1] [i_1] = (((((var_11 ? (arr_10 [i_3] [i_1]) : 3769))) ? -9310 : (arr_15 [i_1] [i_3] [i_3])));
            var_21 = (arr_6 [i_1]);
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_22 = (max(var_22, 56208));
                            arr_29 [i_1] [i_1] [i_5] [i_1] [i_1] [i_5] = arr_10 [i_5 + 1] [i_5 + 1];
                            var_23 = (min(var_23, (arr_24 [i_4] [i_4] [i_4])));
                        }
                        var_24 = ((-(arr_27 [i_4] [i_5])));

                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            arr_33 [i_1] [i_5] [i_5] [i_1] [i_5 + 1] = 56222;
                            var_25 = (max(var_25, 9327));
                        }
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            arr_38 [i_1] [i_4] [i_5] [i_5] [i_9] [i_6] [16] = (((!63243) ? (arr_28 [19] [i_4 - 1] [i_4] [i_4] [i_6 + 1]) : 59284));
                            arr_39 [i_1] [i_4] [i_5] [i_6 - 2] [i_5] = (((((12410 ? 53136 : var_2))) || 46773));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            arr_42 [i_1] [i_1] [i_1] [i_5] [i_1] = var_13;
                            var_26 = (((20218 ? 45318 : 9310)));
                            var_27 *= ((8126 ? (arr_18 [i_4 + 2] [i_5 + 2]) : 3769));
                        }
                    }
                }
            }
            arr_43 [12] = (((arr_26 [i_4]) ? (arr_26 [i_4]) : (arr_26 [i_4])));
            var_28 = (((!1581) || 30542));
            arr_44 [i_4] [i_4] [11] = (var_13 | 65527);
        }
        arr_45 [i_1] [i_1] = (((arr_5 [i_1] [2]) ? (arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    for (int i_11 = 1; i_11 < 17;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            var_29 = ((((max(((min(63955, 45318))), (((arr_48 [i_11] [i_12]) / (arr_47 [i_11])))))) ? 46758 : 65515));
            arr_50 [i_11] [i_12] [i_11] = (((~18745) ? 65521 : ((-(arr_46 [i_11 - 1])))));
        }
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                {
                    arr_56 [i_11] [i_11] [i_14] [i_11] = ((65533 << (57417 - 57407)));
                    var_30 = var_2;
                }
            }
        }
        arr_57 [i_11] [i_11] = (((arr_55 [11] [11] [i_11 + 2] [11]) ? (~var_8) : ((var_19 ? var_12 : var_10))));
    }
    for (int i_15 = 2; i_15 < 16;i_15 += 1)
    {
        var_31 = ((((((!(arr_47 [i_15]))) && (arr_52 [i_15]))) ? (!65527) : (max(((53103 ? var_4 : var_1)), (arr_59 [i_15 - 2])))));
        arr_60 [i_15] = var_9;
        arr_61 [i_15] = max(7147, (min((arr_53 [16]), (arr_5 [i_15] [7]))));
    }
    var_32 = ((~(!1794)));
    var_33 = (min(var_33, (((((!(!53125))) ? (((!((max(59290, 18749)))))) : (!var_17))))));
    var_34 = (min((min(var_5, -5078)), var_7));
    #pragma endscop
}
