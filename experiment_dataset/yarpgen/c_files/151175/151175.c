/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(((-26398 ? var_7 : ((255 ? 8894613417795687032 : 7108)))), (((255 ? -27948 : -1)))));
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
        arr_5 [6] [i_0] = ((-((255 ? ((var_5 ? var_0 : var_6)) : 465406805))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_8 [2] = ((((((arr_6 [i_1]) ? -6088967971130661077 : (arr_7 [1] [i_1])))) ? -1612 : ((-1 ? 241 : 25))));
        arr_9 [12] |= ((199 ? 1 : (arr_6 [i_1])));
        arr_10 [6] [6] = (arr_7 [5] [i_1]);
        arr_11 [14] = ((21029 ? (arr_7 [i_1] [10]) : ((138 << (var_3 - 5459702218654543786)))));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_15 [4] = ((-72 ? 24848 : (arr_12 [i_1])));
            arr_16 [i_1] [i_1] [i_1] = ((-477401151 ? ((var_5 ? (arr_7 [4] [i_1]) : -72)) : (var_1 && 32767)));
            arr_17 [i_1] [i_2] = (arr_7 [i_2 + 2] [i_2]);
            arr_18 [i_1] [i_1] [i_1] = (arr_7 [i_2 - 1] [i_2 + 2]);
        }
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            arr_21 [i_1] [i_3] = ((((arr_6 [10]) ? (arr_13 [i_1]) : 127)));
            arr_22 [i_1] [i_1] [8] &= (arr_12 [i_3 - 3]);

            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
            {
                arr_26 [i_1] [0] [i_3] [0] = -980947449548335713;
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_33 [i_1] [i_3] = (((1 ? 16384 : -9223372036854775806)));
                            arr_34 [i_1] [i_3] [i_4] [i_5] = ((8188 ? (var_14 | 6088967971130661075) : (~-1)));
                            arr_35 [i_6] [i_1] [i_4] [i_1] [i_1] = -1919787880;
                            arr_36 [10] [i_1] [i_5] [i_6] = (arr_12 [i_4]);
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
            {
                arr_39 [i_7] [i_1] [i_1] [i_1] = 255;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_45 [i_1] [i_3] [i_1] [i_8] [i_9] = (arr_42 [i_3 - 1] [i_3 - 1] [i_3 - 1] [2] [i_1]);
                            arr_46 [i_1] [i_1] [i_1] [i_1] [i_9] = (!var_7);
                            arr_47 [i_1] [i_3] [i_7] [i_1] [i_9] = ((~(arr_27 [i_3 + 1] [i_3 - 1] [i_3 - 3])));
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_56 [i_1] [0] [i_11] [i_10] [i_1] [i_1] [i_1] = 7;
                            arr_57 [i_1] [i_3] [i_10] [i_11] [6] [i_12] = ((arr_43 [i_1] [i_3] [i_10] [i_11] [i_12]) ^ 24854);
                        }
                    }
                }
                arr_58 [i_1] [i_3] = (-177064548 / -98967791);
            }
            arr_59 [10] [10] &= ((-21088 ? (arr_40 [0] [i_3 + 1]) : (arr_38 [i_3] [i_3 + 1] [i_3 + 1] [i_3])));
        }
    }
    var_15 = var_10;
    #pragma endscop
}
