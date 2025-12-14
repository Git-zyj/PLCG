/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (((((var_1 ? (min((arr_0 [3]), (arr_3 [i_0] [i_0] [i_0]))) : (arr_3 [i_0] [i_0] [i_1 - 2])))) ? ((max(9223372036854775807, -156211381))) : (!-2126622114)));
                var_14 += (((((-(arr_2 [4] [i_1 - 2] [4])))) ? ((-1470568283 / (max(var_10, (arr_2 [16] [i_1] [i_1]))))) : (((((2607796734 != 26070) <= (arr_4 [i_1 + 3] [i_1 - 2] [i_1 + 4])))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_15 = (min(var_15, var_0));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = -2126622114;
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -26072;
                                var_17 ^= -2090425689140520599;
                                arr_12 [i_4] [i_0] [i_0] [i_0] [i_0] = (((((2126622086 ? (-32767 - 1) : 16440586936680573012))) ? 1231472717 : (((!((min((arr_9 [i_0]), (arr_7 [12] [i_1] [i_3] [i_4])))))))));
                                var_18 = (min(var_7, -5822));
                            }
                        }
                    }
                    var_19 = (max(-27262, 1532911469));
                }
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    var_20 *= ((((!(arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_19 [i_0] [i_6] [i_0] = ((((~((((arr_10 [i_0] [i_0] [i_0] [2] [i_0]) == 2540016475))))) == (((arr_16 [i_7 - 1] [2] [i_7 - 1] [i_7 - 4] [i_7 - 2] [i_7 - 4]) ^ (arr_18 [i_0] [i_1 + 1] [i_1])))));
                                arr_20 [i_0] = (max(-var_10, (max((~64033), -1))));
                                var_21 *= (((arr_2 [2] [i_6] [i_6]) == ((min((max((arr_13 [i_0]), (-32767 - 1))), (max((arr_10 [i_0] [i_1 - 3] [i_7 + 2] [i_7 + 2] [12]), (arr_16 [i_0] [i_0] [1] [5] [i_0] [i_0]))))))));
                            }
                        }
                    }
                    var_22 = (max((((arr_8 [i_0] [i_0] [i_1] [i_0] [14] [i_5 + 3]) ? (arr_8 [i_5] [i_1] [i_1 - 2] [i_1 + 2] [i_0] [i_0]) : (arr_8 [i_5] [i_1 + 3] [i_5] [i_1 + 3] [i_1 + 3] [i_1 + 2]))), (arr_14 [i_0] [i_0])));
                    arr_21 [i_0] [i_0] [i_5] = (arr_3 [8] [i_1] [i_1]);
                }
            }
        }
    }
    var_23 = -var_8;
    var_24 = ((((((var_0 ? var_7 : var_0)) != var_2)) ? (min(var_4, ((var_1 ? 83 : 224)))) : var_2));
    var_25 = (!var_3);
    var_26 = var_6;
    #pragma endscop
}
