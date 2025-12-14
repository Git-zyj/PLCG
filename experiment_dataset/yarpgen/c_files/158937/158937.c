/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_1 == var_5);
    var_16 |= -var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (((((var_1 && -1978680691) || (((var_1 ? var_14 : 16140901064495857664))))) ? (~-2305843009213693951) : (min((arr_1 [i_0] [i_0]), (arr_0 [8])))));
        var_18 = ((+(((arr_1 [i_0] [i_0]) & (arr_0 [i_0])))));
        var_19 = ((-(((arr_0 [i_0]) ? 2305843009213693952 : (arr_0 [i_0])))));
    }

    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_20 -= (min((((arr_2 [i_1] [i_1 + 2]) / 16724)), (min((arr_2 [i_1] [i_1 + 2]), (arr_2 [i_1] [i_1 + 2])))));
        var_21 = (((min((((4096 ? (arr_3 [i_1]) : 46747))), (9046513177011849669 ^ 216))) >> (min((!18446744073709551615), 5686411510150835764))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_22 += (arr_6 [i_2]);

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_23 = (max(var_23, (((!(arr_9 [i_2] [i_2] [1]))))));
                var_24 = (((var_9 ^ var_0) >> (arr_4 [i_2])));
            }
            var_25 = (~var_13);
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_26 = (!0);
            var_27 = arr_0 [i_2];
            var_28 = (((var_7 >> (11695032355945188624 - 11695032355945188607))));
            var_29 = 2305843009213693953;
            var_30 = ((1 * 53) ^ 12760332563558715823);
        }
        var_31 = -50;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        var_32 = ((arr_5 [7] [i_6]) || (arr_5 [i_6] [i_6]));

        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            var_33 = ((-(arr_12 [i_7] [i_7] [i_6])));
            var_34 = 4294967295;
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_35 = (5686411510150835763 == 256);
            var_36 += 18446744073709551615;

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {

                for (int i_10 = 4; i_10 < 12;i_10 += 1)
                {
                    var_37 = (arr_15 [i_10 - 4]);
                    var_38 = ((!(arr_24 [i_9] [i_10 - 4] [4] [i_10] [i_10 - 2] [i_10 + 1])));
                }
                var_39 = (1978680673 - var_13);
                var_40 = ((!(arr_17 [3])));
            }
            var_41 = 65535;
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
        {
            var_42 = arr_22 [i_6] [i_11] [i_11] [i_11];
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    {
                        var_43 |= 195;
                        var_44 = 576460752303423484;
                        var_45 |= 27783;
                    }
                }
            }
        }
        var_46 = (61 % 73);
    }
    for (int i_14 = 2; i_14 < 19;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_47 |= var_8;
            var_48 = ((15074506323508095852 ? 25 : 18446744073709551583));
        }
        /* vectorizable */
        for (int i_16 = 1; i_16 < 19;i_16 += 1) /* same iter space */
        {
            var_49 = ((123 & ((~(arr_1 [i_14] [i_16])))));
            var_50 = (!4123168604160);
            var_51 = (max(var_51, (arr_38 [i_14] [i_14] [14])));
            var_52 = (max(var_52, ((((arr_2 [i_16 + 1] [i_14 - 2]) ^ (arr_2 [i_16 + 1] [i_14 - 2]))))));
            var_53 = var_7;
        }
        for (int i_17 = 1; i_17 < 19;i_17 += 1) /* same iter space */
        {
            var_54 = (min(var_54, (((~((~(arr_34 [i_14 + 1] [i_14 - 1]))))))));
            var_55 += 189;
            var_56 = var_6;
            var_57 = (min(var_57, ((((((((arr_39 [i_14 - 1] [12] [i_17 - 1]) || 27005)))) != (4294967291 / 34634616274944))))));
        }
        var_58 = (min(((-(arr_34 [i_14] [19]))), (((-(arr_33 [i_14 - 2]))))));
        var_59 = (min((((arr_38 [i_14 - 1] [i_14 - 1] [4]) && 1)), (((arr_36 [i_14 - 2]) || (arr_35 [i_14 - 2])))));
        var_60 += 256;
    }
    var_61 = 60;
    #pragma endscop
}
