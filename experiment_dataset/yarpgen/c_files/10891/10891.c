/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_7, var_6));
    var_19 = (min(var_19, 31744));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = max((arr_1 [i_0]), (arr_0 [i_0]));
        var_20 = 31744;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((max(var_16, var_2)))));
        var_22 *= ((((!(((-(arr_6 [i_1])))))) ? (~11) : ((((min(var_5, 7))) >> (((arr_4 [i_1]) - 30289))))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_10 [i_2] = (min((((arr_8 [i_2]) >> (((arr_8 [i_2]) - 4050235015832406492)))), (arr_8 [i_2])));
        arr_11 [i_2] = ((~(((!1) ? ((1 ? (arr_0 [i_2]) : var_3)) : (((arr_3 [i_2]) - -8))))));
        arr_12 [i_2] = max((arr_7 [i_2] [i_2]), ((+(((arr_6 [16]) / (arr_8 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_23 = (~255);
            var_24 = ((~(arr_15 [2] [i_4] [i_3])));

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_25 = (arr_4 [i_4]);
                var_26 -= (((var_7 > -33791) + (~4503599627370496)));
            }
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                var_27 = (((((!(~1)))) == (!-6221003835062708756)));
                var_28 = 6;
                var_29 |= ((!(arr_20 [i_6 - 3] [i_4] [i_6 - 1] [i_6])));
            }
            var_30 = (((-(((arr_1 [i_3]) ? (arr_20 [i_3] [i_4] [i_3] [i_3]) : var_1)))) / (arr_20 [14] [i_4] [i_3] [i_3]));
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {

            /* vectorizable */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_31 = (arr_24 [i_3] [i_7] [i_8]);
                var_32 = -11;
                var_33 -= (arr_6 [i_8]);
                var_34 = var_11;
                var_35 = var_14;
            }
            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                var_36 = (max(var_36, ((((arr_21 [i_3] [i_3] [i_7] [i_9 - 2]) / ((max((arr_21 [i_3] [i_7] [i_9 + 1] [i_9]), (arr_21 [i_3] [i_7] [i_7] [i_9])))))))));
                var_37 = min(((min(1, (~var_11)))), ((-(~-2905601939828932784))));
                var_38 = (min((((!var_10) ? (arr_24 [i_3] [i_7] [i_9]) : (32767 - 22))), 32));
                var_39 = ((~((min((arr_6 [i_3]), (arr_6 [i_3]))))));
            }
            for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
            {
                var_40 = ((((15879100486904776703 | 61555) < (arr_27 [2] [i_10 + 1] [i_10 + 1]))));
                var_41 = (max(var_41, (arr_23 [i_3] [9])));
            }
            for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
            {
                var_42 = (max(var_42, ((((arr_18 [i_11] [i_11 + 1] [i_11 - 1] [i_11 - 1]) ? (arr_21 [i_11 + 1] [i_7] [i_3] [i_3]) : (((((-(arr_13 [i_3])))) ? 4094 : ((72057594037927936 - (arr_18 [i_11 + 2] [i_7] [i_7] [i_3]))))))))));
                var_43 = 0;
                var_44 = ((((min((1447372604 & var_1), (arr_20 [i_11 - 1] [i_7] [i_11 - 1] [i_11 - 1])))) ? (((arr_5 [i_7] [i_3]) ? (arr_18 [i_3] [i_7] [i_11 + 2] [i_11]) : (max(var_15, var_14)))) : ((((2014638045284529117 <= (((-(arr_17 [i_11 - 1] [2] [2] [13]))))))))));
                var_45 = (min(var_45, (-32767 - 1)));
            }
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 14;i_13 += 1)
                {
                    {
                        arr_38 [i_12] [i_12] [i_7] [i_12] = arr_36 [i_3] [i_3] [i_12] [i_3];
                        var_46 = arr_31 [i_7] [i_12 + 1];
                        arr_39 [i_12] [i_7] [i_12 - 1] [i_13] = (arr_24 [i_13] [7] [i_3]);
                    }
                }
            }
        }
        for (int i_14 = 2; i_14 < 12;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                arr_46 [i_3] [i_3] [i_3] [i_3] = (~var_15);
                var_47 = 2047;
                var_48 &= ((+(((arr_41 [i_14 + 2] [1]) ? (arr_41 [i_14 + 2] [i_3]) : (arr_41 [i_14 + 1] [i_14])))));
                var_49 = (min(var_49, (((-(((33792 != (arr_43 [i_14 - 2])))))))));
                var_50 = 32759;
            }
            for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
            {
                var_51 *= ((+(min((arr_36 [i_16] [i_14 + 1] [i_3] [i_3]), var_14))));
                var_52 *= var_0;
                var_53 = (((arr_29 [i_3] [i_3] [i_14] [i_3]) ? (((((max(var_6, (arr_31 [i_3] [1])))) || (!247)))) : ((+(((var_8 + 2147483647) >> (((arr_34 [i_3] [i_14] [i_14] [i_3]) - 1551942265449306168))))))));
                var_54 = (max((((~(arr_21 [i_14 + 3] [i_14] [i_14] [i_3])))), ((max(247, 2040)))));
            }
            for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
            {
                var_55 = -1;
                var_56 = (max(var_56, ((max(-56, 3636463251)))));
                var_57 = (((arr_24 [i_14 - 2] [i_14 - 2] [i_14 - 2]) - (arr_24 [i_14 - 2] [i_14] [i_14 + 1])));
                var_58 = (min((((!(arr_5 [i_3] [i_14 + 1])))), (min(var_8, -var_10))));
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                var_59 = arr_1 [i_3];
                arr_55 [i_3] [i_18] = (((arr_37 [i_3] [i_14 - 1] [i_14] [i_14 - 1]) ? (arr_34 [i_3] [i_14 - 1] [i_14] [i_14 - 1]) : (arr_34 [i_14] [i_14 - 1] [i_14] [i_14 - 1])));
            }
            var_60 = (((((arr_18 [i_3] [i_3] [i_14] [i_14 + 3]) || -93)) || -9));
            var_61 = ((!(var_13 + 4294967295)));
        }
        var_62 = (max(1688849860263936, (((~(var_15 >= var_9))))));
    }
    #pragma endscop
}
