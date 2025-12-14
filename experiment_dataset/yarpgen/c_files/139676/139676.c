/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_21 *= ((-(arr_2 [i_1 + 3])));
                arr_5 [i_1] = var_17;
                var_22 = (min(var_22, (((var_6 ^ ((max((!0), (arr_3 [i_1 - 2] [i_1 - 2])))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_18 [i_2] [i_2] [i_3] [i_4] [i_5] = var_18;

                            for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                var_23 = (~((((max((arr_14 [i_3] [i_3]), (arr_16 [i_6] [i_5] [i_4] [i_2])))) ? 1188855252 : ((max(-32742, (arr_12 [i_2] [i_2])))))));
                                var_24 = (-2147483647 - 1);
                            }
                            for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                            {
                                var_25 = ((+(((arr_15 [i_2 - 1] [i_2 - 1] [i_5 - 2] [i_5 - 2]) ? (arr_12 [i_2 + 1] [i_2 - 1]) : (arr_15 [i_2 - 1] [i_2 - 1] [i_5 - 2] [i_5 - 1])))));
                                arr_23 [i_2] [i_3] [i_4] [i_5] [i_7] [12] [i_5] = (max((arr_17 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]), (max((arr_17 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]), (arr_17 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
                            }

                            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                            {
                                var_26 *= (((((((1450575562 ? -17881 : 31)) - (!0)))) + ((1 ^ (arr_17 [i_2] [i_8] [i_4] [i_5] [i_8])))));
                                arr_28 [i_8] [2] = -1118692130;
                            }
                            for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                            {
                                arr_31 [i_2] [i_2] [i_4] [i_5] [i_9] [i_2] [i_4] = ((-6650989596803042090 || (arr_26 [i_2] [i_2] [i_3] [i_4] [i_5 - 1] [i_5] [i_9])));
                                arr_32 [i_2] [i_3] [i_5] [i_9] = ((((((arr_6 [i_5 + 4]) ? 5706 : (arr_12 [i_2 + 1] [i_5 + 4])))) ? -21104 : ((((~(arr_19 [i_9])))))));
                                var_27 = (min(var_27, (((((var_1 <= (((arr_24 [i_9] [2] [i_4] [12] [1]) + -32742)))) ? (((~((49 + (arr_19 [i_2])))))) : var_12)))));
                                var_28 = (arr_15 [i_2] [i_2] [i_3] [i_5]);
                            }
                            arr_33 [i_2] [i_3] [i_4] [9] = -485411450;

                            /* vectorizable */
                            for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                            {
                                arr_37 [i_10] [i_4] [i_4] [i_3] [i_2] = (arr_6 [i_3]);
                                var_29 = (arr_7 [i_4]);
                            }
                            for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                            {
                                var_30 = (+-9223372036854775807);
                                var_31 = (((arr_30 [8] [i_11]) ? (arr_34 [i_2 - 1] [i_2 + 1] [i_5 + 3] [i_5 + 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]) : ((((max(-1, var_5))) ? (arr_39 [i_11 - 1] [i_3] [i_5 + 4] [i_5] [i_2 + 1]) : (!var_4)))));
                                var_32 = (max((((!var_13) ? ((((arr_35 [i_2] [i_3] [i_3] [2] [i_2] [i_11] [i_3]) ^ -471397714))) : (arr_25 [i_11 - 1] [i_3] [i_4] [i_5 + 3] [i_2 - 1]))), (arr_10 [i_2 - 1] [i_11 - 1])));
                                var_33 = (max(var_33, (((+(min(((((arr_7 [i_2]) ? (arr_15 [i_2] [i_3] [i_3] [i_3]) : var_8))), ((~(arr_27 [i_2] [1] [i_4] [i_11]))))))))));
                            }
                            for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
                            {
                                arr_43 [i_2] [i_3] [i_4] [i_5] [i_12] = (arr_12 [i_12] [i_12]);
                                arr_44 [i_2] [i_2] [i_5] [i_12] = ((max(((-(arr_35 [1] [i_3] [i_3] [i_4] [i_12] [i_4] [i_4]))), var_14)));
                            }
                            for (int i_13 = 0; i_13 < 16;i_13 += 1)
                            {
                                var_34 = (max(9223372036854775807, -4696913965147498500));
                                var_35 *= ((!(arr_10 [i_2] [12])));
                            }
                        }
                    }
                }
                var_36 = 1;
            }
        }
    }
    #pragma endscop
}
