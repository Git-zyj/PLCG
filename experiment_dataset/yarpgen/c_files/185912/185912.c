/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((!(arr_4 [i_1]))))));
                var_16 = 107;
                var_17 = 65;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_18 = (min(var_18, (~-7)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                            {
                                var_19 = (max(var_19, (((0 && ((max((((arr_11 [i_4] [i_3]) ? 1 : (arr_3 [i_6]))), (((var_9 ? var_10 : var_2)))))))))));
                                var_20 = ((((min(0, 46570))) ? 230 : ((((arr_16 [i_3] [i_3] [i_3] [i_3] [i_3]) && (arr_2 [i_5]))))));
                            }
                            for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                            {
                                var_21 = 54;
                                var_22 = (min(var_22, (((((!(arr_14 [i_7] [i_3] [i_2]))) ? (((min(896634305, 8796025913344)))) : (!var_7))))));
                                var_23 = (max(var_23, ((min((arr_16 [i_7] [i_5] [i_4] [i_3] [13]), 1)))));
                            }
                            for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                            {
                                var_24 = (min(var_24, (((min((min(345141995, var_0), 88)))))));
                                var_25 = 1;
                                arr_24 [i_5] [i_5] [i_2] = (min(1, 147));
                            }
                            for (int i_9 = 0; i_9 < 17;i_9 += 1)
                            {
                                var_26 = (((arr_1 [i_2]) || (((arr_1 [i_5]) || (arr_7 [i_4] [i_4])))));
                                arr_27 [0] [i_5] [i_4] [i_5] [i_2] = (398736361 || var_1);
                            }
                            var_27 = ((((max(55308, 0))) ? (((var_6 ? var_6 : -var_6))) : (((arr_9 [i_2] [i_2]) * (arr_12 [i_2])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            {
                                var_28 += ((((min((arr_41 [i_10] [i_14] [i_14] [i_13]), (arr_41 [i_10] [i_11] [i_14] [i_14])))) || (((arr_33 [i_10] [i_11] [i_11] [i_13]) || (arr_33 [i_10] [15] [i_10] [i_13])))));
                                var_29 = 268435455;
                                arr_42 [i_10] [9] [i_12] [i_11] [i_10] = -2120192038;
                                var_30 = (max(4294967295, (arr_31 [i_10] [i_10])));
                                arr_43 [i_10] = (arr_37 [i_10] [i_11] [i_12] [i_10]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            {
                                var_31 = (min(var_31, ((min(40, ((1 ? var_0 : var_1)))))));
                                arr_50 [i_12] [i_11] [i_12] [i_16] [16] |= (min(-30, (max(115, var_14))));
                                var_32 = (~255);
                            }
                        }
                    }
                    arr_51 [i_10] [i_11] [i_12] [0] &= (max(var_9, (max((arr_28 [i_11] [6]), (arr_28 [i_10] [1])))));

                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        var_33 = (((((var_3 % (arr_44 [i_12] [i_12] [i_10] [18])))) ? ((min(0, 0))) : 115));

                        for (int i_18 = 0; i_18 < 23;i_18 += 1)
                        {
                            arr_58 [i_10] [i_11] [i_12] [i_12] [i_17] [i_17] [i_10] = 1049209103;
                            arr_59 [i_10] [i_11] [i_12] [i_12] [i_18] [i_18] [i_17] = max(((min(var_2, (arr_56 [i_10] [i_11] [i_18] [i_17] [i_18])))), ((var_1 ? (arr_56 [i_10] [i_11] [i_11] [i_11] [i_11]) : var_14)));
                        }
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        var_34 = 52145;
                        var_35 &= (!(arr_29 [i_11] [i_19]));
                    }
                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        arr_67 [i_10] [20] [20] [i_10] [i_20] [i_20] = 1;
                        var_36 = ((~(!3306740055)));
                        var_37 = (min(var_37, (((4135316394 ? (((arr_47 [i_10] [i_11] [18] [i_20] [18] [0]) ? (arr_47 [i_10] [i_11] [16] [22] [i_20] [i_20]) : (arr_47 [i_10] [i_11] [12] [i_20] [i_20] [20]))) : (arr_47 [i_20] [i_20] [14] [14] [i_10] [i_10]))))));
                        arr_68 [i_10] [i_10] [i_10] = (arr_32 [i_10]);
                        var_38 = 1;
                    }
                }
            }
        }
    }
    var_39 = (max(var_39, 41036));
    #pragma endscop
}
