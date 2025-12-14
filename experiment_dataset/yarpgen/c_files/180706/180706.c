/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (4127299540 | var_17);

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_20 = ((18454 ? ((((arr_0 [i_0 - 2] [i_0]) / (arr_1 [i_0] [i_0])))) : ((min(167667776, 167667756)))));
        var_21 = (((((~((-(arr_0 [i_0] [i_0])))))) ? ((-(var_16 < var_5))) : (((((max(-3281573934215132027, var_8))) && var_4)))));
        arr_2 [i_0 - 4] [4] = ((0 ? ((8744566812660675975 ? ((((arr_0 [5] [i_0]) << (281474975662080 - 281474975662075)))) : 3281573934215132026)) : (((4127299540 ? 11 : (4127299520 - 16352))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = (!26);
            var_23 = ((var_5 ? (arr_3 [i_1] [i_2]) : -1325565260));
            var_24 = 0;
        }
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_25 = var_0;
                            var_26 = (arr_17 [i_1] [i_1] [i_4] [5] [i_6]);
                            var_27 = ((4127299525 ? -1 : 18446744073709551615));
                        }
                    }
                }
            }
            var_28 = (((!var_3) ? (((var_15 ? (arr_3 [i_1] [i_3 + 1]) : (arr_8 [i_1] [i_1])))) : (var_8 & 3091057968)));
        }
        arr_19 [i_1] = (arr_6 [i_1] [i_1]);
        var_29 = (-0 ? var_5 : ((((arr_13 [i_1] [i_1] [i_1] [i_1]) == (arr_13 [i_1] [i_1] [i_1] [i_1])))));
    }
    var_30 = -var_6;

    /* vectorizable */
    for (int i_7 = 2; i_7 < 8;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_31 = (arr_10 [i_9]);
                var_32 = arr_10 [i_7 + 3];
                var_33 += (((-(arr_18 [i_9] [i_8] [i_8] [i_7] [i_7 + 3] [i_7] [14]))));
            }
            for (int i_10 = 2; i_10 < 7;i_10 += 1)
            {
                arr_29 [i_7] [i_8] = ((167667776 - ((0 ? 1 : (arr_25 [i_7])))));
                var_34 = var_13;
            }
            var_35 = (arr_16 [i_8] [i_8] [i_8] [1]);
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            var_36 += -var_16;
            var_37 = (((5843 & var_16) | ((var_3 ? (arr_8 [i_7] [1]) : var_7))));
        }
        var_38 += 1;
        var_39 = ((!(arr_25 [i_7 - 2])));
        var_40 += (((arr_17 [1] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1]) & (arr_17 [18] [i_7] [i_7] [i_7 - 1] [i_7 + 3])));

        for (int i_12 = 1; i_12 < 7;i_12 += 1)
        {
            var_41 = (min(var_41, (((((((arr_16 [i_7] [8] [i_12] [i_7]) / (arr_21 [i_7] [i_7])))) ? (var_8 & var_11) : (((arr_18 [i_7] [i_7] [i_7] [3] [i_12 + 1] [i_12 + 3] [i_12]) ? (arr_30 [i_12]) : (arr_31 [6]))))))));
            var_42 = ((-25 ? (arr_3 [i_7] [i_7]) : (((arr_30 [i_7]) / -12617))));
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        var_43 = (((arr_9 [i_13] [i_13]) - var_13));
        var_44 += (arr_14 [i_13] [i_13] [i_13]);
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    {
                        arr_44 [i_13] [i_14] [i_14] [i_14] [i_15] [i_16] = var_16;
                        var_45 = (!3);
                        var_46 = (max(var_46, 4127299519));
                        arr_45 [15] [8] [i_14] [i_15 + 2] [i_15 + 2] = (arr_18 [i_13] [i_13] [i_13] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_15 + 1]);
                    }
                }
            }
        }
        arr_46 [i_13] = (!-112);
    }
    for (int i_17 = 0; i_17 < 14;i_17 += 1)
    {
        arr_50 [i_17] = ((~(((((25208 ? var_15 : (arr_0 [i_17] [i_17])))) ? ((124 ? 1 : 6)) : -5843))));
        arr_51 [i_17] [i_17] = ((((((((min((arr_36 [1] [i_17]), (arr_6 [14] [14]))))) % var_18))) ? (((~(arr_6 [i_17] [i_17])))) : (arr_42 [i_17] [i_17] [i_17] [i_17] [i_17])));
        arr_52 [i_17] = (!var_15);
    }
    #pragma endscop
}
