/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((max(var_11, 57021)))) ? (((~var_11) / var_7)) : (((((max(var_9, var_1))) ^ ((min(var_12, 60291))))))));
    var_20 = (((min((var_10 - var_14), var_13)) * ((((!(~var_4)))))));
    var_21 = (--17873387745266151206);
    var_22 = -88;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_23 = (((!58) >> ((((29993 ? (arr_1 [i_0]) : var_1)) - 12349455321860931928))));
        var_24 = ((-(arr_1 [i_0])));
        var_25 = ((11242154679772183247 == (arr_0 [i_0])));
        arr_2 [i_0] = (((!11) >= ((54033 ? (arr_0 [i_0]) : 5245))));
        var_26 = (((~var_13) > 54033));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            var_27 = ((249 ? (arr_6 [i_2 - 2] [i_2 - 1]) : var_17));
            var_28 &= ((+((var_17 ? (arr_4 [i_1] [i_1]) : (arr_0 [i_1])))));
        }
        var_29 -= ((14095 ? (-27583 != var_8) : -var_4));
        arr_8 [8] [i_1] = (arr_3 [i_1]);
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_11 [3] [0] |= 188;

        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            var_30 = ((-(arr_9 [i_4 - 1] [i_3 + 2])));
            arr_14 [12] [10] [i_3 + 1] = var_14;
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_31 = (((arr_9 [i_3 + 1] [7]) < (arr_16 [i_3 + 1] [i_5])));
            var_32 = var_6;
            arr_17 [i_5] [i_3] [i_5] = ((((var_5 ? 17390058301162874566 : -32757)) / (arr_16 [i_3] [i_5])));
        }

        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            var_33 *= (((!var_4) ? (((((arr_19 [i_3]) >= (arr_19 [i_3]))))) : (arr_3 [i_3 - 2])));
            var_34 = (((var_0 >= var_10) ? (71 || var_16) : (arr_4 [i_3 - 3] [i_6 + 1])));
            var_35 = ((-((var_16 ? var_12 : var_14))));
            var_36 = ((~(var_15 ^ var_1)));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    {
                        var_37 = ((-(arr_15 [i_7] [i_8])));
                        var_38 -= (((((arr_7 [i_7] [i_6]) | var_13)) < (((arr_5 [11] [9]) ? 65535 : 175))));
                        var_39 = var_17;
                        arr_26 [i_6] [i_8 - 1] [i_7] [10] = ((var_4 / (~var_12)));

                        for (int i_9 = 3; i_9 < 11;i_9 += 1)
                        {
                            var_40 = (6445044241924691566 < -5);
                            arr_29 [i_3] [4] [i_3] [i_3] = (((arr_13 [i_3 + 1]) ? -29993 : var_11));
                        }
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            var_41 = ((var_10 ? var_12 : (arr_15 [i_3 - 1] [i_10])));
                            arr_32 [3] [i_6] [i_6] [i_6] [i_10] = ((~(arr_10 [i_6 - 1] [i_3 - 3])));
                        }
                    }
                }
            }
        }
        var_42 = ((~((-(arr_23 [i_3] [i_3 + 1] [5] [i_3] [3])))));
    }
    for (int i_11 = 3; i_11 < 11;i_11 += 1) /* same iter space */
    {
        var_43 -= ((!((((((var_18 ? 249 : 7553011226748202504))) ? (!var_0) : ((var_4 ? (arr_9 [i_11] [i_11]) : (arr_12 [i_11 + 2] [i_11]))))))));
        var_44 &= var_2;
        arr_35 [i_11] = (~-1758681538);
        var_45 = (min((((!(arr_5 [i_11] [i_11 - 3])))), (max(((var_13 ? var_17 : var_11)), var_14))));
    }
    #pragma endscop
}
