/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 = max((((~(arr_2 [i_1])))), (min((max((arr_5 [i_1]), var_7)), 1)));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_12 = (min((((var_6 && (arr_1 [i_0])))), (arr_1 [i_1])));
                        var_13 += 933463020;
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_14 = var_8;
                        var_15 = (arr_5 [i_4]);
                        var_16 *= (var_10 ^ var_10);
                        var_17 = (arr_10 [i_0] [i_0] [i_4]);
                        var_18 &= ((((227808981570601879 >> (227808981570601877 - 227808981570601821)))) ? ((((max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_4]), 4294967295))) | (max((arr_1 [i_2]), 14051573782174490903)))) : ((((!227808981570601901) % (arr_5 [i_0])))));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_19 = ((10506 ? (arr_5 [i_0]) : (((arr_6 [i_0]) * (!4294967295)))));
                        var_20 = (min(((((arr_11 [i_0] [i_2] [i_2] [i_1] [i_0]) - (arr_11 [i_0] [i_0] [i_1] [i_2] [i_5])))), 227808981570601901));
                        var_21 = (((arr_1 [i_5]) ^ ((((max(4128768, var_8))) ? 70650077 : (((arr_4 [i_0] [i_0] [i_5]) << (((arr_13 [i_2]) - 2377270213923426875))))))));
                        var_22 ^= 255;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_23 = ((21149 < ((~(((arr_9 [i_2] [7]) ? (arr_10 [i_7] [i_7] [i_7]) : (arr_3 [i_6] [i_1])))))));
                                var_24 *= ((max(((36491 ? 39650 : (arr_18 [10] [i_1] [i_1] [12])), (arr_18 [i_6 + 1] [i_1] [i_1] [i_7 + 1])))));
                                var_25 *= ((((min(16821560156208690621, (arr_14 [i_2]))))) / ((1625183917500860996 ? ((-(arr_16 [i_0] [i_0] [i_0] [7] [i_0]))) : (arr_12 [i_7] [i_1] [i_1] [i_6 + 3] [i_1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 &= (min(((var_3 ? 9223372036854775807 : var_4)), 18446744073709551612));
    var_27 = var_2;
    var_28 = var_9;
    #pragma endscop
}
