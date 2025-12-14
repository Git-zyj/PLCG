/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 127;
    var_21 *= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [10] [i_3] = ((-(((arr_1 [i_1] [i_3]) * (arr_5 [i_1] [i_0])))));
                                var_22 = ((-(42238 >= 201326592)));
                                arr_13 [i_2] [i_1] [i_0] [i_3] [i_1] = ((((((arr_4 [i_3 - 1]) ? var_1 : (arr_4 [i_3 + 1])))) ? 55060 : var_5));
                            }
                        }
                    }
                }
                arr_14 [i_0] [2] [i_1] = ((var_6 - (((!(arr_2 [i_0] [i_1]))))));
                var_23 = var_18;
                arr_15 [i_0] [i_1] = ((((~(arr_5 [i_0] [i_0]))) >= (arr_4 [i_1])));
                arr_16 [i_0] [i_0] = 4;
            }
        }
    }

    for (int i_5 = 2; i_5 < 8;i_5 += 1)
    {
        arr_20 [i_5] = (min(var_10, 1879048192));
        arr_21 [i_5] [i_5] = var_11;
        arr_22 [i_5 + 3] [i_5] = (((arr_18 [i_5 - 1]) <= (arr_18 [i_5 + 2])));
    }
    for (int i_6 = 1; i_6 < 24;i_6 += 1)
    {
        arr_25 [i_6 + 1] [i_6] = (((max(((0 ? (arr_23 [i_6]) : 0)), (arr_23 [i_6 - 1]))) - var_2));
        var_24 = var_1;
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_25 = var_4;

        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            arr_30 [3] [i_8] = (((arr_27 [i_8 + 1]) / 12478225019752265098));
            arr_31 [6] = var_10;
        }
        for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
        {
            var_26 = (~var_10);
            var_27 = ((((min(var_3, -54583))) ? (-1 / -11411) : 18273));
        }
        for (int i_10 = 2; i_10 < 20;i_10 += 1) /* same iter space */
        {
            var_28 = (max(var_28, -56));
            arr_39 [i_7] [i_10] [i_10] = (((55051 + 62843) - -7453994089098344552));
        }
        var_29 = var_9;
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 18;i_14 += 1)
                {
                    {
                        var_30 = -2562533156408318718;
                        var_31 = (~var_1);
                        arr_49 [i_14] [i_12] [i_14] = 47077;
                    }
                }
            }
        }
        arr_50 [i_11] = (arr_47 [i_11] [i_11] [i_11] [11]);
        arr_51 [i_11] [i_11] = (arr_42 [i_11] [i_11] [i_11]);
        arr_52 [i_11] = (min(var_17, (~-8)));

        for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
        {
            arr_55 [i_15] [17] [i_15] = (max(((-127 / (17847 - var_4))), (((arr_26 [i_11]) ? (var_19 / var_1) : 30449))));
            arr_56 [i_11] [i_11] = (var_6 / var_8);

            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                arr_59 [i_11] [i_15] [i_16] = ((((max((arr_27 [i_15]), 19))) > (min((arr_38 [i_11] [i_11]), (arr_38 [i_11] [i_15])))));
                arr_60 [i_11] [i_15] = var_6;
                var_32 = (arr_36 [i_11] [12] [12]);
            }
            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                arr_64 [1] [i_15] [i_15] [1] = ((65535 > (arr_34 [i_17])));
                var_33 = ((((min(-1, 1))) ? (-2147483647 - 1) : 1));
                var_34 = (min((min((arr_63 [i_11] [i_15]), (arr_63 [i_11] [i_15]))), 6662));
                var_35 = (min(((var_13 ? ((var_5 ? (arr_29 [i_11] [i_15] [i_17]) : (arr_63 [i_15] [i_15]))) : (arr_33 [i_11] [i_15] [i_17]))), (~-711076550)));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    for (int i_19 = 3; i_19 < 19;i_19 += 1)
                    {
                        {
                            arr_71 [i_19] [i_18] [i_17] [i_17] [i_15] [i_15] [i_19] = -var_10;
                            var_36 = (arr_40 [i_18]);
                        }
                    }
                }
            }
            for (int i_20 = 1; i_20 < 19;i_20 += 1) /* same iter space */
            {
                var_37 = ((~(((5924993894207943099 == (arr_66 [i_20 + 1] [i_20 - 1] [i_20] [i_20 - 1]))))));
                var_38 = (min(var_38, ((((((arr_48 [i_20 + 1] [i_20 + 2] [i_20 + 2] [i_20 + 2]) ? (arr_48 [i_20 + 1] [i_20 + 2] [i_20 + 2] [i_20 + 1]) : (arr_48 [i_20 - 1] [i_20 + 1] [13] [i_20 - 1]))) <= ((max((arr_48 [i_20 - 1] [i_20 + 2] [i_20] [i_20 + 1]), (arr_48 [i_20 + 1] [i_20 - 1] [17] [i_20 + 2])))))))));
                arr_74 [i_11] [i_11] [4] = (arr_44 [i_11] [i_15] [12] [i_20 + 1]);
            }
            for (int i_21 = 1; i_21 < 19;i_21 += 1) /* same iter space */
            {
                arr_78 [i_11] [i_11] [i_21] = (max((min((~-92), (min((arr_32 [i_11]), 444539751)))), (arr_66 [5] [17] [5] [i_15])));
                var_39 = ((!(~4163983997)));
            }
            var_40 = (((((arr_76 [i_11] [i_15] [i_15]) ^ (arr_44 [14] [i_15] [i_15] [i_11]))) + (((var_1 ? (((!(arr_28 [i_11] [i_11])))) : ((var_9 ? var_18 : (arr_36 [i_11] [i_15] [i_15]))))))));
        }
        for (int i_22 = 0; i_22 < 21;i_22 += 1) /* same iter space */
        {
            var_41 = ((!(-1 <= -6447595638933470238)));
            var_42 = ((-(min(((((arr_77 [i_22] [i_22] [i_11] [i_22]) > 32767))), (max(7813153190106131313, (arr_77 [i_22] [i_22] [i_11] [i_11])))))));
        }
        for (int i_23 = 0; i_23 < 21;i_23 += 1) /* same iter space */
        {
            var_43 = (min((((((max(var_1, (arr_23 [i_11])))) != (min(-441282103, 11))))), (arr_42 [i_11] [i_23] [i_23])));
            arr_84 [i_23] = ((((var_11 ? var_3 : var_19)) - ((((var_0 && (arr_61 [i_23])))))));
            var_44 = var_1;
        }
    }
    #pragma endscop
}
