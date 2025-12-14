/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = var_7;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 += ((((max((arr_1 [i_0 - 1]), (arr_7 [i_0 - 1] [i_0 + 1])))) < ((-(arr_0 [i_0 - 1] [i_0 + 2])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_1] [i_3] = ((~(arr_2 [i_0 + 1])));
                        var_17 = (arr_12 [i_0] [i_1] [i_2] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_18 ^= (((arr_14 [i_0 + 1] [i_0 + 2] [i_1] [i_2] [i_4]) * (((var_0 ? (arr_12 [i_0] [i_1] [i_2] [i_4]) : 6726)))));
                        arr_17 [i_0] [i_1] = (((arr_7 [i_0 - 1] [i_0 - 1]) ? var_15 : (arr_7 [i_0 - 1] [i_0 - 1])));
                        arr_18 [i_1] [11] [i_1] [i_1] [11] = var_6;
                        var_19 = (58814 <= var_4);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_1] = (((((var_2 ? 9223372036854775797 : var_0))) ? (arr_7 [i_0 + 1] [i_0 + 2]) : (!var_1)));
                        arr_23 [i_0] [i_1] [i_1] [i_2] [i_5] = ((var_1 < (((((arr_9 [i_2] [i_1]) || (arr_8 [i_0] [i_1] [i_2] [8])))))));
                        var_20 = (58829 % var_15);
                        var_21 = ((((((arr_20 [i_0 + 1] [5] [i_1] [i_0 + 1] [i_5] [i_5]) >= var_6))) >= (arr_11 [i_0] [0] [i_1] [i_1] [i_2] [i_5])));
                    }
                    arr_24 [i_1] = ((~((-(arr_21 [i_0] [i_1] [i_1] [i_0])))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_22 |= (((max(((min((arr_6 [8] [i_6]), var_13))), var_12)) << (((arr_2 [i_6]) & (arr_9 [i_6] [i_6])))));
        var_23 = ((-(arr_9 [i_6] [i_6])));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        var_24 += var_8;
                        arr_35 [i_6] [i_7] [i_6] = (min(((38907 ? (arr_3 [i_6]) : var_4)), ((((arr_11 [i_6] [i_7] [i_7] [i_8] [i_8] [i_9]) ? (arr_11 [i_6] [i_6] [i_7] [i_7] [i_7] [i_9]) : (arr_11 [i_6] [i_7] [i_8] [i_8] [i_8] [i_9]))))));
                        arr_36 [i_6] [i_7] [i_7] [i_8] [i_7] [i_9] = ((((min(0, 58805) + (((var_5 ? var_14 : (arr_31 [i_7] [i_7] [1]))))))));
                        var_25 *= (max((((-(arr_20 [i_6] [i_6] [i_6] [i_7] [i_8] [i_9])))), (min((arr_28 [i_6] [i_8] [i_9]), (arr_28 [i_6] [i_6] [i_6])))));
                    }
                }
            }
        }
        var_26 = (min(var_26, ((((min(var_3, ((var_9 >> (6707 - 6693)))))) ? (((min(var_12, var_2)) & ((((arr_31 [i_6] [i_6] [i_6]) ? (arr_0 [i_6] [i_6]) : 255))))) : (((-(arr_29 [i_6] [i_6]))))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 9;i_11 += 1)
            {
                {
                    var_27 = (min(var_27, 1));
                    arr_42 [i_6] [i_11] = (min(((((max((arr_27 [i_6] [i_11]), (arr_30 [i_6] [4] [i_10] [i_11])))) & var_7)), (((((var_7 ? (arr_40 [i_6] [i_6] [i_6] [i_11]) : var_15))) ? (min(4503599627370495, 38907)) : ((((var_5 >= (arr_7 [i_6] [i_6])))))))));
                    var_28 = (min(-var_9, ((min((arr_8 [i_6] [i_6] [i_6] [i_6]), (arr_30 [i_11 + 2] [i_11] [i_11] [i_11]))))));
                }
            }
        }
    }
    var_29 = var_2;
    #pragma endscop
}
