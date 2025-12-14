/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = max((arr_4 [1] [i_0]), 1);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_2] [0] [0] [i_2] = (min(((~((((arr_6 [i_0 + 3] [i_0 + 3] [0]) > (arr_2 [i_2])))))), (~97)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_16 = var_4;
                        arr_12 [i_2] [i_1] [i_1] [i_1] = (63 | 23777);
                        var_17 = ((-(arr_3 [i_0 - 4])));
                        arr_13 [i_0] [i_0] [i_0] [2] [i_0 + 3] |= (1 ? ((var_10 & (arr_11 [i_3] [i_0] [i_0] [i_0]))) : ((((-78 + 2147483647) << (227 - 227)))));
                        var_18 = (((((arr_10 [i_0 + 1] [i_1] [i_1] [i_2] [i_1]) ? 122219801220114304 : 0))) ? -8798321928076612888 : ((((-29785 + 2147483647) >> (78 - 74)))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_19 = (~(-9223372036854775807 - 1));
                            var_20 &= (max((((arr_7 [i_4] [i_1]) ? (~2451774083021298449) : -63)), (49 & 127)));
                            var_21 = (min((~127), -60));
                            var_22 = (arr_2 [i_0]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_23 = (arr_9 [i_0] [i_0] [i_2] [i_0]);
                            var_24 += ((~(-1621674741 >= 209)));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_25 = (max(var_25, (((-1 ? 13654 : 224)))));
                            var_26 = ((((134 ? (arr_6 [i_0 + 2] [i_1] [i_0 + 2]) : (((arr_7 [i_0] [i_0]) ? var_8 : 227)))) == 32749));
                        }
                        var_27 = (~-1);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_28 = (max(var_28, (((-412311900 ? -412311914 : 785312615)))));
                                var_29 = (max(((max(var_4, (arr_24 [i_0 + 2] [i_1] [i_0 + 2] [i_8] [i_2])))), (((arr_22 [i_9]) / (arr_22 [i_1])))));
                            }
                        }
                    }
                    var_30 = ((58561 ? 1534914406 : 105));
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_31 = (min(((((min((arr_1 [i_0] [i_1]), (arr_18 [i_0] [i_0] [i_10] [i_1] [0])))) ? ((min((arr_27 [i_0] [i_1] [i_10] [i_0] [i_10] [i_10] [i_0]), (arr_11 [i_0] [i_0] [i_1] [i_1])))) : (max((arr_28 [i_0] [4] [4] [i_0] [i_0]), (arr_0 [i_0]))))), ((max((((var_5 ? -105 : 1))), (min(var_4, (arr_25 [i_0] [i_0] [i_10] [i_0 + 1]))))))));
                    var_32 = (((((~(arr_23 [i_0 - 4] [i_0 + 1] [i_1])))) ? (3699 + -25762) : ((0 ? 1615532236 : (min((arr_23 [i_0 + 3] [i_1] [i_0 + 3]), 8796093020160))))));
                    var_33 = 9223372036854775807;
                    var_34 ^= ((250 <= (((-(arr_2 [i_0 - 2]))))));
                    var_35 = (((((+(min((arr_27 [i_10] [i_1] [i_1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_0 [i_0])))))) && (arr_0 [i_0])));
                }
                for (int i_11 = 2; i_11 < 13;i_11 += 1)
                {
                    arr_35 [i_1] [1] = min(32749, (min((arr_17 [i_0 + 2] [i_1] [i_11 + 1] [i_11 - 1]), (arr_17 [i_11] [i_11] [i_11] [i_11 - 2]))));
                    var_36 = (max(var_36, ((min((((arr_17 [i_11 - 1] [i_0 + 3] [i_0] [i_0]) >> (((arr_17 [i_11 - 2] [i_0 + 1] [i_0] [i_0]) - 396958467)))), ((~(arr_17 [i_11 + 1] [i_0 + 2] [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_37 = var_2;
    #pragma endscop
}
