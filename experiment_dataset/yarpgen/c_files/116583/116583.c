/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        arr_4 [i_0] &= (((arr_0 [1] [8]) << (var_2 - 56)));
        arr_5 [i_0] = max((var_5 | 95), (arr_1 [i_0] [i_0]));
    }
    var_11 = (max(var_10, (((var_4 < (((-95 ? var_9 : var_0))))))));

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] = (((var_0 % var_3) ? (min((arr_6 [i_1]), var_3)) : ((-88 / (arr_6 [i_1])))));
        arr_9 [i_1] [i_1] = ((((((var_0 ? var_6 : (arr_6 [i_1]))) >= (((-27885 ? 862 : var_3))))) ? ((((min((arr_0 [i_1] [i_1]), var_2))) ? -863 : var_6)) : (min((max(1482057080, var_10)), var_8))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    arr_15 [i_2] = var_4;
                    arr_16 [i_1] [i_2 - 3] [i_3] = ((((((var_5 ? var_2 : var_9)))) ? (((max(var_2, var_6)) - (var_2 * var_1))) : ((max((arr_1 [i_1] [i_2 + 1]), var_7)))));

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        arr_20 [i_2] [6] [i_3] [i_4 + 1] = var_9;
                        arr_21 [i_1] [i_4] = (var_3 ? (~-862) : -47);
                        arr_22 [4] [4] [i_3] [i_4] = (((arr_14 [i_2] [i_2 - 2] [i_2 + 2]) ? var_10 : var_8));
                    }
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_30 [i_1] [i_2] [i_2] [i_6] = arr_14 [i_1] [i_1] [i_6];
                            arr_31 [i_1] [i_1] [i_1] [4] [i_1] = ((((max((min(var_9, (arr_25 [5] [5] [i_3 + 1] [i_5] [5] [5]))), (((arr_1 [i_2] [i_5 - 1]) ? (arr_29 [i_2] [i_2] [i_2] [i_5 - 3] [6] [i_2]) : var_3))))) ? var_10 : (((arr_13 [i_1] [i_1] [i_1]) + (arr_26 [i_1] [i_1])))));
                            arr_32 [i_1] [2] [2] [i_1] [i_1] = var_3;
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_35 [i_7] = (arr_12 [i_3 + 1] [i_5 - 3] [i_3 + 1]);
                            arr_36 [i_3] [i_3] [i_3] [i_7] [i_3] = (((((var_2 | (arr_13 [i_3] [i_3 - 1] [i_3])))) ? var_6 : 862));
                            arr_37 [i_1] = (arr_28 [i_1] [i_1] [i_1] [0]);
                        }
                        arr_38 [i_5] = (((~1011360772878084599) ? ((var_10 ? (arr_11 [i_3 + 1]) : -862)) : ((min((arr_11 [i_1]), var_0)))));
                        arr_39 [i_1] [i_2] [i_3 - 1] [4] [i_3] = ((!((((arr_14 [i_1] [i_1] [i_3]) ? ((var_5 ? var_7 : 4966170480214498685)) : (arr_27 [i_5 - 2] [i_5 - 1] [i_5] [i_5] [i_5 - 2] [i_5]))))));
                        arr_40 [i_5 + 1] = (min(var_4, (min(((var_7 ? (arr_25 [8] [i_2] [6] [i_2] [i_2] [i_2]) : (arr_1 [i_2] [i_3]))), (((1483368678 >> (861 - 844))))))));
                        arr_41 [i_3] = ((((min((arr_10 [6] [i_1]), (arr_27 [i_1] [i_1] [i_2 + 2] [i_3 + 1] [i_5 - 2] [i_5])))) ? (arr_29 [i_1] [i_2] [i_2] [3] [i_5] [i_5]) : (((((((arr_2 [i_3 + 1]) ? var_2 : var_10))) ? var_5 : (arr_34 [i_1] [i_1] [i_1] [i_1] [1] [i_3] [6]))))));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_44 [i_8] [i_2] [2] = (~(min((min(8425373947507050552, var_0)), -96)));

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_48 [i_1] [i_1] [i_3] [i_8] [i_9] = (min((((arr_26 [i_2 - 2] [i_3 - 1]) ? (arr_6 [i_1]) : (((min(var_7, var_5)))))), var_3));
                            arr_49 [i_1] [i_2] [0] [i_1] = (max(861, (((arr_45 [i_1] [i_2 + 1]) ? (arr_45 [7] [i_2 - 1]) : (arr_46 [i_1] [i_3] [i_3 + 1] [i_3 + 1] [6])))));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_52 [i_8] [i_2] [i_3 + 1] [i_8] [i_2] [i_10] = (((((var_9 ? ((((arr_34 [i_1] [i_1] [i_1] [i_2 + 1] [i_3 - 1] [i_1] [i_10]) || var_2))) : ((max(var_8, var_5)))))) ? ((((arr_43 [i_1] [i_3 - 1] [i_3 - 1] [i_10] [i_10] [i_10]) >> var_7))) : (max(-4315, ((var_6 ? (arr_6 [i_2]) : var_10))))));
                            arr_53 [i_8] [i_8] [i_3] [i_8] [i_10] = ((((((max((arr_7 [i_8] [i_8]), var_7))) ? -125 : var_3))) ? (((arr_47 [i_1] [i_2 - 2] [i_10] [i_2 - 2] [i_10]) / 30159)) : (((!var_2) + ((((arr_10 [i_3] [i_8]) || (arr_51 [i_1] [i_1] [i_1] [i_2 - 1] [i_3 + 1] [2] [9])))))));
                            arr_54 [i_1] [i_2] [i_8] [i_8] [i_3] [i_8] = var_3;
                            arr_55 [i_8] [i_2] [i_3] = -1153085189;
                            arr_56 [i_1] [i_8] [i_1] &= (!((max(var_10, (~var_1)))));
                        }
                        arr_57 [i_1] [i_1] [i_3] [2] [i_8] [i_1] = ((var_9 ? (max(8425373947507050552, -862)) : ((((var_5 / var_6) ? var_9 : ((max(var_1, -1))))))));
                    }
                    arr_58 [i_2] = var_5;

                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        arr_62 [i_1] [i_11] = (min((~var_9), -8425373947507050544));
                        arr_63 [i_2] [i_2 + 1] [i_3 + 1] [i_3 + 1] = (arr_7 [i_1] [i_3 - 1]);
                    }
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        arr_66 [i_1] [i_1] [i_3 + 1] [i_1] = (max((arr_50 [i_2 + 1] [i_2 - 2] [i_2 - 2] [1] [1] [i_2 + 2]), (var_0 + var_10)));
                        arr_67 [i_1] [i_1] [i_1] = -1554203008200187273;
                    }
                }
            }
        }
    }
    var_12 &= ((var_9 ? var_3 : ((max(1554203008200187273, var_9)))));
    var_13 |= ((var_6 ? var_4 : ((((!var_9) ? var_6 : (!var_0))))));
    #pragma endscop
}
