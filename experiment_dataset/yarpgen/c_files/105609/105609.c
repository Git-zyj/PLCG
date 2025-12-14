/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 -= ((-1 > ((max(-1, 1)))));
                    var_20 = var_2;
                }
            }
        }
    }
    var_21 = var_6;
    var_22 = (min(var_22, ((max(((-9 + ((14595094318067915798 ? var_7 : var_7)))), ((max((max(var_2, var_2)), (!var_1)))))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_23 |= max((((((2022700095 > (arr_10 [i_3]))) || var_11))), var_13);
                var_24 += (((-6321660934679673381 & 2154667002) <= var_12));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_25 = (((max((!var_6), ((15577679464574840575 * (arr_8 [i_3]))))) * (var_14 * var_13)));

                            for (int i_7 = 0; i_7 < 21;i_7 += 1)
                            {
                                var_26 = (1 + 5581395957155044372);
                                var_27 = ((max(var_1, (arr_9 [i_3]))));
                                var_28 += (max((max((arr_16 [1] [i_6] [i_5] [i_5] [i_4] [i_3]), (arr_16 [i_3] [4] [13] [i_5] [i_6] [i_7]))), (((arr_10 [19]) ? (arr_16 [9] [i_4] [i_5] [16] [i_4] [i_6]) : (arr_16 [i_3] [i_4] [i_5] [17] [i_6] [i_7])))));
                                var_29 *= max(((((((-30517 + 2147483647) >> (var_2 - 43)))) ? (arr_12 [i_6]) : (max(2154667002, var_13)))), ((max(((-30523 ? var_2 : 35982)), (((arr_9 [0]) + var_0))))));
                            }
                            /* vectorizable */
                            for (int i_8 = 3; i_8 < 18;i_8 += 1)
                            {
                                arr_22 [i_4] [i_4] [1] = (!var_15);
                                var_30 += ((((2140300280 ? (arr_16 [15] [i_4] [i_4] [i_4] [i_4] [i_4]) : var_6)) <= (((-(arr_19 [i_3] [19] [i_5]))))));
                                var_31 = -var_5;
                            }
                            for (int i_9 = 1; i_9 < 18;i_9 += 1)
                            {
                                var_32 = ((~(((arr_24 [i_9 + 2] [i_9 + 2] [i_4] [i_9 + 2] [i_4] [i_9 + 2] [i_9 + 2]) ? (arr_24 [i_9 - 1] [i_9 + 2] [i_4] [i_9 + 1] [i_4] [i_9 - 1] [i_9 + 2]) : (arr_24 [i_9 + 1] [i_9 - 1] [i_4] [i_9 - 1] [i_4] [i_9 + 1] [i_9 + 3])))));
                                var_33 = (max((((!(arr_11 [i_9 + 2] [i_4] [i_9 + 2])))), (min(-9074, 71))));
                                arr_25 [i_3] [i_4] [i_5] [i_6] [i_4] = (min((((23656 <= (min(15577679464574840571, (arr_17 [i_6] [i_4] [i_6] [13] [i_6] [i_6] [20])))))), (max((arr_21 [i_9 - 1]), var_2))));
                                var_34 = (((35986 + (arr_10 [i_6]))));
                                arr_26 [i_3] [i_4] [i_4] [i_9] = (1 == 78);
                            }
                            var_35 -= (arr_17 [i_3] [i_6] [i_5] [i_6] [i_3] [i_4] [0]);
                            arr_27 [i_3] [i_4] [i_4] [i_6] = (!var_7);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
