/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (((((((-(arr_0 [i_0])))) ? (-2 <= var_5) : (arr_0 [i_0]))) >= ((~((-(arr_0 [i_0])))))));
        arr_4 [10] [10] = ((-64 == ((~(arr_1 [i_0])))));
        var_19 = (((arr_2 [13] [2]) & (((((min(var_11, var_7)) + 2147483647)) >> (18446744073709551615 - 18446744073709551615)))));
        arr_5 [3] [i_0] = ((~(((-58 > var_1) | (var_8 < var_14)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (((var_9 >> 8) != (arr_0 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    var_20 ^= ((2147483647 ? (arr_11 [i_3]) : -58));
                    arr_14 [i_1] [i_2] [10] [i_1] = (arr_9 [i_1] [i_3 - 2]);
                    arr_15 [i_1] [i_1] [i_1] [i_1] = (((-74 >= 255) ? ((((arr_11 [i_1]) && 250))) : (arr_6 [i_3 - 2] [i_3 - 2])));
                }
            }
        }
        arr_16 [i_1] = 549755811840;
    }

    for (int i_4 = 4; i_4 < 8;i_4 += 1)
    {
        var_21 -= (min((arr_2 [i_4] [i_4]), ((~((((arr_11 [i_4]) >= 549755811837)))))));
        var_22 = (min(var_22, (arr_0 [i_4])));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((((((var_3 + 2147483647) >> (((min(-123, var_11)) + 1882435957))))) < (((max((arr_27 [2] [i_6] [i_6] [i_5]), -17)) - -541165879296)))))));
                                arr_34 [i_9] &= (min(((min(496, (min(15804, (arr_19 [i_5])))))), (arr_27 [i_5] [i_5] [i_5] [i_5])));
                            }
                        }
                    }
                    var_24 += (-7 ? ((min(255, -116))) : (!var_15));
                    arr_35 [i_7] [i_7] [i_6] [i_7] = ((31744 && (!117)));
                }
            }
        }
    }
    #pragma endscop
}
