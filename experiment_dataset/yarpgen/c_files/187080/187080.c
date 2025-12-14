/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((((~(arr_3 [i_0] [i_0])))) ? -var_3 : (1 % 15)));
        var_19 = (min(((((arr_2 [i_0]) < 1))), ((var_3 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {

                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        var_20 = var_14;
                        var_21 = ((var_2 && (arr_0 [i_3] [i_3])));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_22 = (((((-(arr_12 [i_3])))) ? (1 >= 1) : ((-(arr_12 [i_3])))));
                        arr_19 [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_3] = min((-1585216713 < 1), ((-((min((arr_2 [i_3]), 35252))))));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_3] [i_6] [13] = (arr_20 [i_1] [i_2] [i_1] [i_3] [i_6]);
                            var_23 = (min(var_23, var_10));
                            arr_25 [i_1 - 2] [i_3] [i_3] [19] [19] = ((56 ? 1 : 65535));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_24 = var_13;
                            var_25 ^= (((((~-51) | ((var_11 & (arr_26 [i_1] [i_7] [i_1] [1] [i_1]))))) ^ ((((max((arr_15 [i_7] [i_5] [i_7] [i_7] [i_7] [2]), 4063656507)) ^ (~-72))))));
                        }
                        var_26 = (max((min(((-1 ? 65 : var_14)), (arr_28 [i_1 - 1] [0] [0] [i_3 + 1] [i_3] [16] [i_5 - 1]))), var_8));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_27 = (min(var_27, (((15656 >> (-57 + 79))))));
                                var_28 = ((-(((((var_15 ? 1 : -28))) ? (arr_14 [i_3] [i_3] [i_3 + 1] [i_3]) : (((max((arr_7 [i_1] [i_1]), 49880))))))));
                                var_29 = (max(var_29, ((max((max(1, 28669)), 1)))));
                            }
                        }
                    }
                    arr_35 [1] [17] [i_3] [i_3 - 1] = (arr_18 [i_3] [i_2]);
                }
            }
        }
        arr_36 [i_1] = ((-(min((32767 | -18677), (arr_16 [i_1 - 3] [i_1 - 3] [i_1 - 3] [14])))));
        var_30 = 1;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_40 [i_10] = ((!(!1)));
        var_31 = (min(var_31, 231310788));
    }

    for (int i_11 = 0; i_11 < 0;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        arr_50 [i_12] = (max(((var_12 ? (((var_2 ? 6392 : var_9))) : var_10)), var_4));
                        var_32 = (min((((18446744073709551615 + 38188) ? 63 : (187 || 231310790))), (arr_1 [i_12])));
                        var_33 = ((((((min((arr_12 [i_12]), 49880))) ? (arr_11 [i_12] [i_11 + 1] [i_13 - 1]) : ((min(var_17, 15656))))) >> 25));
                    }
                }
            }
        }
        var_34 = (max(var_34, (((-1 ? 49880 : 11)))));
        arr_51 [i_11] [i_11] = (((15656 <= 1) >= (+-56)));
        arr_52 [i_11] = arr_47 [4] [i_11 + 1];
    }
    #pragma endscop
}
