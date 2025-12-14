/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(max((~var_12), var_11))));
    var_20 = (((max(((var_12 ? var_3 : var_0)), var_4))) ? -37 : ((var_7 ? -1562848969 : (var_3 / 64))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (max(((((arr_1 [i_0 - 2]) <= (arr_4 [i_0] [i_1])))), -1562848959));
                var_22 |= ((min(var_16, (min((arr_0 [i_0] [i_0]), (arr_2 [i_0] [i_1]))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_23 = ((max((((64 && (arr_3 [i_0 - 2] [11])))), ((-1562848969 ? var_9 : 11556)))));
                    var_24 = (max(((min((min(var_6, -1562848969)), (min(-1562848969, (arr_2 [i_0 + 1] [i_0 + 1])))))), ((max(4294967295, var_5)))));
                    var_25 = 29;
                    arr_8 [3] [i_2] [i_1] [i_0] = (max((((!(arr_2 [i_0 - 2] [i_2])))), (max(var_6, (arr_2 [i_0 + 1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_26 = ((!(~32736)));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0 - 2] = (var_7 | 65532);
                                arr_16 [i_3] [1] [0] [i_4] = (((((-(min(-4367681733418580105, var_14))))) && ((max((arr_2 [i_0 - 2] [i_1]), 32767)))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_27 = -29;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_24 [4] [4] [i_5] [i_6] [i_7] = ((!((((((var_16 ? -46 : -1562848959))) ? var_11 : (arr_22 [i_7] [i_7] [3] [i_6] [i_7 - 1]))))));
                                var_28 = ((+((max((-32767 - 1), (arr_6 [i_7 - 1] [i_0 - 2]))))));
                                var_29 ^= ((var_5 ? var_4 : var_13));
                                arr_25 [i_0] [7] [i_5] [i_7] [0] [i_5] [i_0] = ((-1562848978 ? (((((35993612646875136 ? var_12 : (arr_12 [i_7 + 1] [i_1] [i_5])))) ? ((min(-1186933755, -1562848969))) : (arr_12 [i_0] [i_0 + 1] [i_6]))) : ((max(((min((arr_1 [i_7]), 1))), (max(1562848961, var_3)))))));
                            }
                        }
                    }
                    var_30 = 5046;
                    var_31 = var_10;
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_28 [6] = var_3;
        var_32 |= ((((~((39880 ? (arr_26 [i_8]) : -104)))) << ((1088 ? (((arr_27 [i_8]) ? 0 : (arr_27 [i_8]))) : (max((arr_27 [i_8]), 1562848961))))));
        var_33 = ((((-804 + (2 ^ -9495))) < (arr_27 [i_8])));
    }
    #pragma endscop
}
