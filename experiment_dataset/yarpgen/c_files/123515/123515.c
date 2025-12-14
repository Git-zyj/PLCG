/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 = (((arr_2 [i_0] [i_0]) & (arr_2 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_21 = (((arr_6 [i_1] [i_1] [i_0]) + (arr_5 [i_1])));
            var_22 = 3597752231;
            arr_7 [i_1] [i_1] [i_1] = (((arr_0 [7]) ? (((arr_2 [i_0] [i_1]) ? 99 : -8312813377090130139)) : 29102));
            arr_8 [i_0] [1] [i_1] = (arr_2 [i_0] [i_1]);
            var_23 += 8312813377090130138;
        }

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_24 = 37;
            var_25 |= -24686;
            var_26 = (min(var_26, 65529));
            arr_11 [1] |= ((4324 ? (((18446744073709551613 ? -599645752 : 61847))) : (arr_6 [i_0] [16] [i_2])));
        }
        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_27 = (min(var_27, (((117 ? (arr_10 [i_6] [i_6 + 1] [i_6]) : -1070907175)))));
                            var_28 = (((arr_19 [i_4 - 1] [i_4 - 1] [i_5] [i_5] [i_4] [i_4 - 4]) ? (arr_19 [13] [i_4 - 2] [i_5] [i_5] [i_4 - 2] [i_0]) : (arr_19 [i_4 + 1] [i_4 + 1] [i_5] [i_5] [i_4 - 2] [i_0])));
                            var_29 = (((arr_23 [i_0] [i_3 + 2] [i_5]) == (((arr_15 [i_3] [i_5]) - -1))));
                            var_30 = (arr_12 [i_0] [i_3 + 1] [i_3 + 2]);
                        }
                    }
                }
            }
            arr_24 [i_3] [9] [i_0] = (((arr_15 [i_3 - 2] [i_3 - 3]) ? (arr_15 [i_3 + 3] [i_3 + 3]) : (arr_15 [i_3 + 1] [i_3 - 4])));
            var_31 = 1070907199;
            var_32 += (arr_23 [i_0] [i_0] [i_3]);
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    {
                        var_33 = (max(var_33, 8312813377090130127));
                        var_34 = (((((arr_15 [i_0] [i_7]) ? (arr_23 [i_0] [i_0] [i_9]) : (arr_31 [i_0] [1] [i_8] [i_8] [i_9]))) & (arr_3 [i_9] [i_9 + 1] [i_9])));
                        var_35 *= var_10;
                    }
                }
            }

            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_36 = (min(var_36, 1));
                var_37 = (max(var_37, (((-(arr_5 [i_10]))))));
            }
            for (int i_11 = 2; i_11 < 16;i_11 += 1)
            {
                var_38 = (arr_17 [i_11 - 2] [i_11 + 1] [i_11 - 1] [i_11 + 1]);
                arr_38 [i_0] = (arr_3 [10] [i_7] [10]);
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {
        var_39 = var_1;
        var_40 = (((arr_33 [i_12] [i_12]) ? var_8 : var_10));
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_41 = -30592;
        arr_44 [i_13] = (arr_17 [i_13] [i_13] [3] [i_13]);
        var_42 = (arr_25 [i_13] [i_13] [10]);
        var_43 = (((((((max(61833, var_3))) ? var_13 : var_5))) ? (((((min((arr_25 [15] [i_13] [i_13]), (arr_17 [i_13] [i_13] [i_13] [i_13]))) == ((max((arr_26 [i_13] [4]), (arr_25 [i_13] [i_13] [i_13])))))))) : (((min((arr_16 [i_13] [i_13] [i_13] [i_13]), var_2)) - 602850923))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        var_44 = ((8060366944734079963 ? (arr_28 [13] [i_14] [11]) : ((-971322653 ? -8070804407681413650 : (arr_18 [i_14] [15] [i_14] [i_14] [i_14])))));
        var_45 |= 65532;
    }
    var_46 = ((var_11 ? -599645763 : (~var_6)));
    #pragma endscop
}
