/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = var_4;
        arr_4 [16] = (!(arr_2 [i_0]));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = ((((arr_6 [i_1] [i_1]) ? var_7 : (((!(arr_6 [i_1] [i_1])))))));
        arr_8 [4] = (min(((min((((!(arr_2 [i_1])))), (arr_0 [i_1] [i_1])))), ((-(arr_1 [6])))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] [6] = ((~(~72)));
        arr_14 [i_2] = ((((var_8 ? var_0 : (arr_0 [i_2] [i_2])))) ? var_9 : (((arr_2 [i_2]) ? 59752 : var_14)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            arr_20 [i_3] = (arr_17 [i_3] [i_4 + 1]);

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_23 [8] [i_3] [i_4 - 2] [i_3] = var_6;
                arr_24 [i_3] [i_3] [10] = var_2;
                arr_25 [1] [i_4 - 1] [1] = ((var_12 >= (arr_1 [14])));
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_35 [i_3] [i_4] [i_6] [i_8] [i_6] [i_6] = (((arr_19 [i_8] [i_7] [i_8]) * ((0 ? 130 : var_8))));
                            arr_36 [i_6] [i_4] [i_6] [i_3] [i_8] [i_6] = ((((((arr_19 [i_8] [i_4] [i_6]) >= (arr_10 [1])))) / var_10));
                            arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] = ((!(arr_9 [i_3] [i_3])));
                            arr_38 [i_8] [i_4] [i_4] [i_4 + 1] [i_4 + 1] = ((-(arr_12 [i_4 - 1] [i_4 - 1])));
                        }
                    }
                }
            }
        }

        for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
        {
            arr_41 [i_3] = (~-167779815);
            arr_42 [4] = ((!(~var_14)));
        }
        for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
        {
            arr_45 [8] = var_1;
            arr_46 [8] [10] = ((-(arr_44 [4] [i_10 - 1] [1])));
            arr_47 [i_3] [i_3] = (~var_8);
        }
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        arr_51 [i_11] = var_8;
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {
                {
                    arr_56 [i_13 + 1] [i_12] [i_12] [i_11] = (arr_52 [i_11] [i_11] [17]);
                    arr_57 [i_11] [i_11] [i_11] = (min(((min((min((arr_48 [10]), 147)), (arr_50 [i_13 + 2])))), (arr_49 [i_12] [i_11])));
                }
            }
        }
        arr_58 [3] = (max((arr_53 [i_11]), (((((arr_54 [i_11]) >= (arr_52 [i_11] [i_11] [i_11]))) ? (min(var_14, var_5)) : (arr_54 [i_11])))));
    }
    #pragma endscop
}
