/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((max(var_0, (max(-3210124485086626737, var_12))))) < ((((var_2 ? var_8 : var_4)) + var_3)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = -2305843009213693952;
        arr_3 [i_0] = var_12;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            {
                var_15 = (var_6 / 2348474525532664478);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((max((((var_0 ? (arr_13 [i_2 - 1] [9] [i_2 + 1] [i_2] [i_1]) : (arr_13 [i_2 - 1] [i_2] [i_2 + 1] [20] [21])))), ((~(arr_7 [i_2] [i_2]))))))));

                            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                            {
                                var_17 = (min(var_17, (((((max((arr_13 [i_2 - 1] [i_2 + 1] [0] [i_2 - 1] [i_2 - 1]), (arr_13 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1])))) ? (((arr_13 [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1]) << (((arr_13 [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1]) - 5314691709385882822)))) : (!2147482624))))));
                                var_18 = (1 % 9905);
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                            {
                                var_19 = (((arr_17 [i_2 - 1] [1] [i_2] [i_2] [i_2]) <= (arr_7 [i_2 - 1] [i_2 - 1])));
                                var_20 = (((((725046790 ? var_5 : var_9))) ? var_8 : ((((var_9 <= (arr_16 [i_1] [5] [i_3] [i_1] [i_3])))))));
                            }
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_21 += ((((max(-1, 4294967282))) ? ((var_12 ? (arr_5 [i_2 + 1]) : (arr_5 [i_2 - 1]))) : (((((arr_5 [i_2 - 1]) + 9223372036854775807)) >> (((arr_5 [i_2 + 1]) + 4271644852326303783))))));
                                arr_20 [i_1] [i_2] [i_2] [i_3] [i_4] [i_7] = (max((arr_14 [i_1] [i_7] [i_3] [10] [5]), (((~(~var_13))))));
                                var_22 = (min(var_22, ((((((((arr_13 [i_2] [20] [i_2 - 1] [5] [i_7]) && (arr_13 [1] [i_3] [i_2 + 1] [4] [16]))))) - (((arr_13 [3] [i_2] [i_2 - 1] [i_4] [i_4]) ? var_13 : 2959744458)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_11;
    var_24 = var_13;
    #pragma endscop
}
