/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_10 < (17980493390295482205 != 108))))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((((((min(var_9, var_2))) ? (((var_0 + 9223372036854775807) >> (var_7 - 17360631530932215882))) : (max((arr_2 [i_0]), (arr_3 [i_0 - 3])))))) ? var_6 : ((max((arr_3 [i_0]), var_0)))));
        var_14 |= ((-(var_2 || var_10)));
        arr_5 [i_0] = var_5;
        arr_6 [i_0 - 1] = (((((var_7 || var_2) ? (!var_6) : (!16775168)))) ? (max((max(var_4, var_12)), (max(var_5, var_9)))) : var_4);
        arr_7 [i_0] = (260046848 || 76);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] [i_1] = (!-var_8);

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_14 [2] [i_2] = 16815788292764821898;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_25 [i_1] [i_1] [i_1] [i_1 + 2] [i_1] [i_2] [i_1] = ((+((var_1 ? (arr_18 [i_2] [i_2] [i_5]) : var_4))));
                            var_15 ^= var_12;
                        }
                    }
                }
            }
            arr_26 [i_2] [i_2] = -var_6;
        }
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            var_16 -= ((-6 ? -20 : ((16775164 ? var_1 : 44))));
            arr_30 [i_6] = (arr_0 [i_1]);
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_42 [i_1] [i_1] [i_8] [i_1] [i_9] [i_7] [i_10] = -var_11;
                            arr_43 [i_1] [i_7] [i_1] = (((((var_1 ? (arr_17 [i_7] [i_7] [i_8] [i_7]) : var_2))) ? (arr_12 [i_1]) : (arr_19 [i_7] [i_9] [i_8] [i_7] [i_7])));
                            var_17 = (min(var_17, (((-(arr_34 [i_10]))))));
                        }
                    }
                }
            }
            var_18 = var_9;
            var_19 ^= (~var_11);
        }
    }
    for (int i_11 = 2; i_11 < 22;i_11 += 1)
    {

        /* vectorizable */
        for (int i_12 = 2; i_12 < 22;i_12 += 1)
        {
            var_20 = ((arr_46 [i_11]) ? var_0 : (!var_2));
            arr_48 [i_11] = ((!-9003088708585785067) | var_7);
        }
        arr_49 [i_11] [i_11] = (+-var_6);
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 22;i_14 += 1)
            {
                {
                    var_21 = (max(var_21, ((var_7 ? ((((!(((~(arr_45 [i_13] [i_13])))))))) : (min(var_8, (min(var_2, var_6))))))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 20;i_16 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((((+((((arr_52 [i_16] [i_11] [i_11]) <= var_0)))))) ? (max(var_4, var_11)) : (!var_3))))));
                                arr_60 [i_16] = (((((((~(arr_54 [i_14])))) ? var_8 : -var_6)) > (max((var_1 > var_12), ((var_12 ? var_7 : var_5))))));
                            }
                        }
                    }
                    var_23 = (((((((var_6 ? var_9 : var_10))) || var_6)) || -var_12));
                }
            }
        }
    }
    var_24 = ((!(((var_0 ? var_5 : -var_0)))));
    /* LoopNest 2 */
    for (int i_17 = 1; i_17 < 20;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 21;i_20 += 1)
                    {
                        {
                            var_25 |= ((18446744073709551606 >> (9003088708585785068 - 9003088708585785030)));
                            var_26 = (max(var_26, (min((((-var_4 >> (!var_12)))), (!var_3)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_21 = 2; i_21 < 19;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        {
                            var_27 = var_12;

                            /* vectorizable */
                            for (int i_23 = 0; i_23 < 21;i_23 += 1)
                            {
                                arr_80 [i_17] [i_18] [i_17] [i_18] [i_21] [i_17] [i_18] = var_8;
                                arr_81 [i_17] [i_17] [i_18] [i_23] [i_22] = var_12;
                            }
                            for (int i_24 = 0; i_24 < 21;i_24 += 1)
                            {
                                var_28 = var_4;
                                var_29 |= ((var_1 + (max(((var_4 ? var_12 : (arr_47 [i_22]))), ((-(arr_47 [i_17])))))));
                            }
                            /* vectorizable */
                            for (int i_25 = 1; i_25 < 18;i_25 += 1)
                            {
                                arr_86 [i_25] [i_17] [i_18] [i_18] [i_17] = (arr_52 [i_17] [i_17] [i_17]);
                                arr_87 [i_18] = ((var_7 ? (((arr_70 [i_18]) ? (arr_57 [i_18] [i_22]) : var_12)) : (var_0 > var_5)));
                                var_30 += (((var_4 > var_7) * var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
