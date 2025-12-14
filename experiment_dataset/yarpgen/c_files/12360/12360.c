/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((min((min(1, (arr_3 [i_1]))), (((!(arr_0 [i_0]))))))) ? 7881222775516837898 : ((min(((var_8 ? (arr_1 [i_0]) : 94)), (arr_1 [i_0]))))));
                var_12 = (((((~(arr_0 [i_0])))) ? (((((arr_3 [i_0]) && var_0)))) : ((((min(var_7, 100))) ? (!var_3) : (arr_0 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            {
                var_13 = (!var_8);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_14 -= (arr_17 [12]);
                                var_15 = ((+((-(((arr_15 [i_2] [i_4] [i_5 - 2] [i_6]) ? var_2 : 100))))));
                                var_16 = (min(var_16, (((-(min(((-(arr_6 [2]))), var_10)))))));
                                var_17 -= ((1 ? ((~(arr_20 [i_3 - 1] [i_3 + 1] [i_5 - 3] [i_5 + 1] [i_5 + 1]))) : (((!(100 % 151))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_18 = ((arr_18 [20] [5] [5] [23]) ? (arr_20 [8] [i_8] [i_7] [i_3 + 2] [i_2]) : (max(-var_5, 162)));
                                var_19 ^= var_7;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        {
                            var_20 = var_2;
                            var_21 = 105;
                            var_22 -= (min(((18446744073709551615 ? 255 : ((max(var_11, var_5))))), ((((var_1 ? var_6 : 94))))));
                            var_23 = min((arr_13 [1] [i_10] [i_11]), (arr_23 [i_2] [i_3] [i_11]));
                            var_24 = var_7;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            var_25 = (((!(arr_15 [i_3 + 2] [i_12 - 2] [i_12] [i_3 + 2]))));

                            for (int i_14 = 1; i_14 < 24;i_14 += 1)
                            {
                                var_26 = var_3;
                                var_27 = (156 ? (min(((min((arr_25 [1] [i_2]), 1))), ((156 ? 262143 : var_0)))) : ((((((var_4 ? (arr_21 [i_2] [i_2] [1] [i_14]) : 4002987843))) ? (arr_43 [i_2] [11] [11] [i_14]) : (arr_9 [i_2] [i_3 - 1])))));
                            }

                            for (int i_15 = 2; i_15 < 24;i_15 += 1) /* same iter space */
                            {
                                var_28 = (((max(var_10, var_7))));
                                var_29 = (min(var_29, (((((arr_27 [i_2] [19] [i_13] [i_12 + 1] [i_12] [i_3] [i_2]) ? ((~(arr_16 [22] [i_3 + 2] [i_12]))) : (arr_17 [12])))))));
                                arr_47 [9] [i_2] [i_2] = ((!((!(arr_38 [i_3 + 1] [i_3 + 2] [i_3 + 1])))));
                                arr_48 [i_15] [i_2] [i_2] [i_2] = ((((+((min((arr_29 [i_2] [i_3] [i_12 - 2] [i_2]), 62))))) << (((min((arr_27 [i_15 - 2] [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 - 2] [i_15 + 1] [i_15 - 1]), var_8)) - 62))));
                            }
                            for (int i_16 = 2; i_16 < 24;i_16 += 1) /* same iter space */
                            {
                                var_30 ^= ((!((min((274877906943 / var_1), var_10)))));
                                var_31 = (max((((arr_16 [i_2] [i_12] [i_13]) <= (min((arr_32 [i_2] [i_3] [19] [9] [i_2] [9]), var_9)))), (((((var_0 ? (arr_26 [i_2] [i_3 - 1] [i_12] [i_13] [i_16]) : (arr_17 [i_2])))) >= (arr_44 [i_2] [i_2] [i_12] [i_2] [i_12 - 2] [i_3])))));
                                var_32 = var_4;
                                var_33 = ((((max((max(var_11, 9223372036854775807)), (arr_31 [i_2] [4] [i_12] [i_13])))) || (((~(max(var_6, 18446744073709551615)))))));
                            }
                            var_34 = (max(var_34, ((1 ? (arr_15 [i_2] [i_2] [i_2] [i_2]) : (((!(arr_35 [14]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
