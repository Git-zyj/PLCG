/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min((var_12 - var_9), ((max(4065424032, 0)))))) ? 38122 : 1023);

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max((min((arr_1 [i_0]), (arr_1 [i_0]))), 1084175119));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [1] [i_1] [i_1] = (max((var_0 | var_8), 2249233129));
                    arr_8 [i_0] [i_0] [i_0] [i_0] &= (min((~0), (min((arr_5 [i_0] [i_0] [i_0] [i_2]), 6426853445275466616))));
                }
            }
        }
        var_14 ^= ((((min((arr_5 [i_0] [i_0] [i_0] [i_0]), var_0))) + ((1023 ? 2279736975269932267 : 972365426587465460))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_15 = (var_8 || ((((arr_14 [i_0] [i_0] [i_0] [i_4] [i_3] [i_6]) ? (arr_9 [i_3] [i_3] [i_3]) : 1))));
                            var_16 &= (((arr_14 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_0] [i_5 - 2]) ? (arr_13 [i_5 + 2] [i_5 - 1] [i_5 - 1] [i_5 - 2]) : (arr_13 [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 2])));
                            var_17 = (arr_5 [8] [i_3] [i_3] [i_5 - 2]);
                            var_18 = var_1;
                        }
                        var_19 *= (max(28, (min((((arr_12 [i_5] [i_3] [i_3] [i_5 + 2]) ? (arr_10 [i_0] [i_4] [i_5 + 1]) : 9007199254675456)), (var_4 || var_10)))));
                        var_20 = (49778 | 1023);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {
                    arr_27 [i_9] [i_9] = var_9;
                    arr_28 [i_7] [i_9] [i_8] [i_9] = (var_1 ? 1 : (arr_13 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]));

                    for (int i_10 = 1; i_10 < 7;i_10 += 1)
                    {
                        var_21 = (min(var_21, (arr_25 [i_7] [i_8])));
                        arr_31 [i_7] [i_8] [i_9] [i_9] = (((((arr_18 [i_9] [i_8]) ? -7694654488617591659 : (arr_1 [i_8]))) + (arr_13 [i_9] [i_9] [i_9] [i_9 - 1])));
                    }

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_22 = ((142 ? (arr_13 [i_9 - 1] [i_9 - 1] [5] [i_8]) : (((arr_30 [i_7] [i_8] [i_9 - 1] [i_11]) ? -1 : (arr_12 [i_9] [i_11] [i_11] [i_11])))));
                        arr_34 [i_11] [i_9] [i_9] [i_7] = ((arr_10 [i_8] [i_8] [i_7]) ? (arr_14 [i_7] [i_7] [i_8] [i_9] [i_9] [0]) : 1005);
                    }
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {

                        for (int i_13 = 1; i_13 < 8;i_13 += 1) /* same iter space */
                        {
                            arr_39 [i_12] [i_8] [i_12] [i_12] &= (((arr_29 [i_7] [i_7]) ? (((arr_18 [i_7] [i_9]) ? (arr_16 [i_12] [0] [i_12] [i_12]) : var_2)) : 0));
                            var_23 = var_7;
                            arr_40 [i_9] [i_8] [i_9] [i_9] [i_13 + 2] = (((arr_13 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]) ? (arr_13 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]) : (arr_6 [i_9 - 1] [i_9 - 1] [i_9 - 1])));
                            arr_41 [i_13] [i_9] [i_9] = ((2764793720 ? 0 : ((((arr_22 [i_12]) % var_8)))));
                        }
                        for (int i_14 = 1; i_14 < 8;i_14 += 1) /* same iter space */
                        {
                            var_24 = (((68074472 ? var_10 : var_4)));
                            var_25 = (arr_19 [i_9]);
                            var_26 = (min(var_26, (arr_13 [i_7] [i_8] [i_9] [i_12])));
                            arr_44 [i_9] [i_8] [i_14 + 1] [i_12] [i_14 + 1] = ((0 ? 10556 : 27407));
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_27 = ((!(arr_29 [i_9] [i_8])));
                            var_28 = (arr_4 [i_9] [i_9] [i_15]);
                            arr_47 [i_9] [i_15] = (((arr_17 [i_7] [i_8] [i_9] [i_9 - 1] [i_15]) ? (arr_17 [i_7] [i_8] [i_9] [i_9 - 1] [i_12]) : (arr_17 [i_9 - 1] [i_9] [i_15] [i_9 - 1] [i_15])));
                            var_29 = (arr_30 [i_7] [i_8] [i_9] [i_12]);
                        }
                        for (int i_16 = 4; i_16 < 10;i_16 += 1)
                        {
                            var_30 = (min(var_30, -4740809460112629096));
                            var_31 = (min(var_31, ((((arr_11 [i_9] [i_9 - 1] [i_9 - 1]) ? 1 : var_4)))));
                            var_32 = ((var_2 % ((var_9 ? var_8 : (arr_10 [i_7] [i_12] [i_9])))));
                            arr_51 [i_9] [i_9] = (((arr_4 [i_7] [i_9] [i_7]) < -4321883078453708120));
                        }
                        var_33 = (max(var_33, ((((arr_14 [i_7] [i_7] [i_7] [i_8] [i_12] [i_12]) * 59409)))));

                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            arr_54 [i_7] [i_8] [i_9] [i_12] [i_17] [i_12] [i_9] = ((var_0 ^ ((6512135276406372335 ? (arr_38 [i_7] [6] [i_7] [i_12] [i_17]) : var_11))));
                            var_34 &= var_2;
                        }
                        for (int i_18 = 0; i_18 < 11;i_18 += 1)
                        {
                            var_35 = (((var_10 ? var_4 : (arr_55 [7] [i_8] [i_8] [i_12] [i_18] [i_9] [i_8]))));
                            var_36 = 0;
                            var_37 = (((((1 ? 4294967284 : 146))) ? (arr_14 [i_9 - 1] [i_8] [i_18] [i_12] [i_9] [i_9 - 1]) : ((var_4 ? (arr_57 [i_7] [i_8] [i_9] [i_12] [i_18]) : (arr_48 [i_7] [i_7])))));
                        }
                        var_38 = (arr_50 [i_7] [i_7] [i_8] [i_8] [i_9 - 1] [i_12]);
                    }
                }
            }
        }
        var_39 = 8989607068696576;
        arr_58 [i_7] [i_7] = ((var_10 ? (arr_56 [i_7] [i_7] [i_7] [i_7] [i_7]) : var_1));
        arr_59 [i_7] = (arr_52 [i_7] [i_7] [i_7] [i_7] [i_7]);
    }
    #pragma endscop
}
