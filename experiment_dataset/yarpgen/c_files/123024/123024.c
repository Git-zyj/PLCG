/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 ? var_8 : (((min(var_6, var_10))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [23] &= (min(((((arr_1 [i_0] [i_0]) > (arr_1 [i_0] [i_0])))), (min((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), ((max((arr_1 [i_0] [i_0]), 24762)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = arr_7 [i_2] [i_1] [i_0];
                    arr_11 [i_0] [i_1] [i_2] [15] = ((!(arr_7 [i_0] [i_1] [i_2])));
                }
            }
        }
        arr_12 [i_0] [i_0] = 31;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] = arr_13 [i_3];
        arr_16 [i_3] = arr_1 [i_3] [i_3];
        arr_17 [i_3] = (((((arr_6 [i_3] [i_3] [i_3]) * (arr_4 [i_3] [6] [i_3]))) <= (arr_0 [i_3])));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    arr_26 [i_4] [i_5] [i_5] = min((((((65510 >> (var_11 - 48360))) < var_9))), (arr_5 [i_6] [i_6] [i_6]));
                    arr_27 [i_6] [17] = (min((arr_1 [i_6] [17]), 0));
                }
            }
        }

        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            arr_30 [i_7] = arr_18 [i_4];
            arr_31 [i_4] [i_7 - 1] [i_7 - 1] = (((arr_21 [11]) ? (arr_19 [i_7 + 1]) : ((min(var_3, var_11)))));
            arr_32 [0] [21] [i_4] = (min((((((max((arr_5 [i_4] [i_4] [16]), var_5))) == (arr_23 [i_7 - 1] [i_7 + 2] [i_7 + 2])))), (((arr_22 [i_7 + 1] [i_4]) & (arr_2 [i_4])))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        arr_39 [i_7] [i_7] [i_7] = min((min(17017, 34306)), (((((62032 ? (arr_23 [i_7] [i_7] [i_7]) : 27985)) > (arr_38 [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
                        arr_40 [i_4] [i_7] [i_4] [i_9] [i_9] = ((~(arr_14 [i_8])));
                        arr_41 [i_4] [i_7] [i_7] [i_9] = ((((min((min(var_1, var_0)), (max(33, var_9))))) >> (((arr_7 [i_7] [i_8] [i_9]) - 26833))));

                        for (int i_10 = 2; i_10 < 20;i_10 += 1)
                        {
                            arr_44 [18] [18] [22] [i_9] [i_4] [i_4] [18] = min((arr_7 [i_7 + 1] [14] [i_7 + 2]), (min(var_3, (arr_29 [i_8] [i_9] [4]))));
                            arr_45 [i_7] [i_10] = (max((max(2486, ((min((arr_20 [i_4]), (arr_19 [i_4])))))), 46749));
                            arr_46 [22] [i_7] [22] [i_10] = ((-((65510 >> (2764 - 2760)))));
                            arr_47 [i_4] [i_10] [i_10] = (max(((((((arr_22 [i_4] [i_4]) / (arr_38 [i_10 + 3] [i_8] [i_4])))) ? (((arr_28 [i_7] [i_8] [i_8]) ? (arr_24 [i_7 + 2] [i_7 + 2]) : (arr_42 [i_10] [i_10]))) : ((min((arr_13 [i_9]), var_10))))), ((~((((arr_4 [i_7] [i_9] [i_10 - 2]) != (arr_14 [i_7]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
