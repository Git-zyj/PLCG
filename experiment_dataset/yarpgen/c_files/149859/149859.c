/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_7;
    var_17 = var_11;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
            {
                arr_6 [i_1] [11] = (!7903736876722775056);
                var_18 = (max(var_18, (!-83)));
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    var_19 = ((-(!109)));

                    for (int i_5 = 4; i_5 < 18;i_5 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_3] [i_4] [i_5 - 2] [1] = (~-82);
                        arr_16 [i_1] [i_3] [i_3] = ((!(!989970238)));
                        var_20 = (~(!-32740));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_21 = (~-var_0);
                        var_22 = (min(var_22, (((!(((-(arr_4 [15] [i_1 + 1] [i_1])))))))));
                    }
                    arr_19 [i_0] [1] [i_3] [i_1] = ((-((~(~-892331130)))));
                    var_23 = ((~(((!(arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1]))))));
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_24 += ((-((~(arr_11 [i_0] [i_0] [i_0] [i_0])))));
                        var_25 = (min(var_25, ((-((~(arr_26 [i_1 - 1] [i_1 + 4] [i_1 + 4])))))));
                    }
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_26 = (max(var_26, ((((-((-(arr_7 [i_1] [i_3] [i_7] [i_9])))))))));
                        var_27 += (~21);
                        var_28 = (((~(arr_29 [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 2]))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_29 -= 118;
                        var_30 = ((~(arr_28 [i_3] [i_3])));
                    }
                    var_31 = (~82);
                    arr_32 [i_1] = ((((!(((~(arr_27 [i_1] [i_1 + 2] [i_1] [i_3] [i_7]))))))));
                    var_32 = ((~(!65514)));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_33 = (~13884);
                    var_34 = (!(~-32740));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    arr_39 [i_1] = (arr_20 [1] [4] [i_1 - 1] [i_3] [i_3] [i_12]);
                    var_35 = -82;
                    var_36 = (max(var_36, (~4294967295)));
                }
                arr_40 [14] [i_1] [i_1] [i_1] = ((!(((~(~var_9))))));
                var_37 = (min(var_37, (((!((!(arr_29 [i_0] [i_0] [i_1 + 4] [i_3] [i_3]))))))));
                var_38 = -3430929187;
                arr_41 [i_0] [i_1] [i_3] = ((!(((~(arr_11 [i_0] [i_0] [i_1] [i_0]))))));
            }
            var_39 += var_10;
            arr_42 [i_0] [i_0] |= (~-3753957108);
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            var_40 = (max(var_40, (((-(arr_29 [i_0] [10] [i_0] [i_13] [i_13]))))));
            var_41 = var_1;
            var_42 = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_13]);

            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                var_43 = (~var_14);
                arr_51 [i_0] [i_14] [i_14] [i_0] = (arr_18 [i_0] [i_13]);
            }
            for (int i_15 = 1; i_15 < 17;i_15 += 1) /* same iter space */
            {
                var_44 = -var_4;
                var_45 = (max(var_45, (((-(arr_20 [i_15] [i_15] [i_15] [i_15] [i_15 + 2] [i_15]))))));
            }
            for (int i_16 = 1; i_16 < 17;i_16 += 1) /* same iter space */
            {
                var_46 |= ((~(!-24975)));
                var_47 &= (~var_6);
                arr_57 [i_16] [i_16] [i_16 - 1] = -98;
            }
        }
        arr_58 [i_0] = -53310;
    }
    var_48 -= var_8;
    var_49 |= (~3430929187);
    #pragma endscop
}
