/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((-(((arr_1 [i_0]) ? ((var_9 ? (arr_1 [4]) : var_0)) : ((65535 ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
        arr_3 [17] = ((-(max((max(9708609203889414816, (arr_1 [i_0]))), ((max(var_7, var_0)))))));
        arr_4 [i_0] [i_0] = (max(((-var_3 ? ((var_7 ? var_6 : (arr_1 [i_0]))) : (arr_0 [i_0]))), (((var_3 ? (max(var_4, var_2)) : (min(var_4, (arr_1 [i_0]))))))));
        arr_5 [i_0] [i_0] = ((((min(65529, (arr_0 [i_0])))) >> var_3));
        arr_6 [i_0] [i_0] = ((~(!-32)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_10 [i_1] &= (((((187 ? 1 : 14384299209622430667))) ? 199 : -156));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_20 [i_2 + 1] [i_3] [i_2 + 1] [i_1] [i_1] [i_1] = (min((arr_8 [i_1]), (arr_13 [i_1] [i_2 + 1] [i_4 - 2])));
                        arr_21 [i_1] [i_2 + 1] [i_2] [4] [i_2 + 1] [i_2 + 1] = ((+(max((~var_7), (!31917)))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_25 [i_1] [i_2] [i_3] [i_4] [1] [i_4 - 2] = (((((var_3 ? var_4 : -var_2))) ? (!var_9) : (var_3 ^ var_1)));
                            arr_26 [i_1] [i_2] [i_3] [i_4 + 2] [i_1] = ((min(var_7, ((var_0 ? var_1 : var_8)))));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_31 [i_6] [i_4 - 1] [i_3] [i_2 + 3] [i_1] = (arr_12 [i_1]);
                            arr_32 [i_1] = (max((((var_6 ? var_5 : ((~(arr_24 [i_2 + 3])))))), (arr_7 [i_2 + 3])));
                            arr_33 [i_1] [i_2] [i_1] = ((((!(((var_9 ? (arr_22 [i_1] [i_1]) : (arr_17 [i_1] [i_1] [i_1] [i_1])))))) || (arr_30 [i_1] [i_2] [i_1] [i_4] [i_1])));
                            arr_34 [i_6] [i_4] [i_3] [i_2] [i_1] [i_1] = (((arr_30 [i_1] [i_1] [i_3] [i_4 - 3] [i_4 - 3]) ? (((max(var_6, var_2)) | (((var_6 ? (arr_22 [i_1] [i_2]) : var_2))))) : ((max(-var_9, var_9)))));
                        }
                        arr_35 [i_1] = ((1 ? 1269820414 : 18446744073709551615));
                    }
                }
            }
        }
        arr_36 [i_1] = ((-var_2 ? (arr_18 [i_1]) : ((((((!(arr_29 [i_1] [i_1] [i_1] [i_1] [i_1])))) >> 19)))));
        arr_37 [i_1] [i_1] = (min(((((~var_1) ? ((var_3 ? var_3 : var_9)) : var_5))), ((-(max((arr_14 [8] [i_1] [i_1]), (arr_11 [i_1] [i_1])))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 24;i_8 += 1)
            {
                {
                    arr_44 [i_8] = (arr_18 [i_8 + 1]);
                    arr_45 [i_8] [i_7] [i_7] = ((-(max((((~(arr_39 [i_1])))), (min((arr_28 [9]), (arr_40 [i_1] [i_1])))))));
                    arr_46 [i_1] = var_7;
                    arr_47 [i_8] [i_8] [i_8] [i_8 + 1] = ((-(min(var_6, -65523))));
                    arr_48 [4] [i_7] [i_8] = (((((var_0 ? var_6 : (arr_9 [i_1]))))));
                }
            }
        }
    }
    var_10 = (((~var_7) ? var_7 : ((~((var_8 ? var_2 : var_4))))));
    #pragma endscop
}
