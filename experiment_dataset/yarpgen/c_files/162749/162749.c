/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((var_9 & var_1), var_9));
    var_13 = ((var_6 ? ((((!-3951921085046215609) > (min(536870904, var_7))))) : var_7));
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 17;i_4 += 1)
                            {
                                arr_11 [i_0] [i_2] [i_3] [i_4 - 2] = ((((~(((arr_10 [i_0] [i_1] [i_4] [i_3] [i_4]) ? (arr_7 [i_0] [i_0] [i_1] [i_2] [i_3 + 2] [i_4 - 2]) : (arr_4 [i_0]))))) ^ (((var_10 << (var_5 - 241))))));
                                var_15 = ((((((((arr_6 [i_0]) - (arr_8 [i_0] [1] [i_0] [i_0] [14])))) - (max((arr_2 [17]), (arr_8 [i_0] [i_1] [i_2] [i_1] [i_0]))))) * (arr_3 [i_1])));
                                arr_12 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] = (max((((((var_11 ? 3951921085046215608 : var_7))) ? (arr_9 [i_4 - 1] [i_1 - 1]) : -3951921085046215609)), (((!(arr_0 [i_0] [i_1 + 3]))))));
                            }
                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                var_16 = ((-2947213821274092036 ? -81 : 15));
                                arr_15 [i_0] [i_0] [i_2] [i_3 - 2] [i_5] = ((!(!75)));
                                var_17 = ((~(min((max((arr_3 [i_0]), (arr_8 [i_0] [i_1] [i_1] [i_0] [i_5]))), (((65468 ? 76 : var_8)))))));
                                arr_16 [16] [i_1] [i_2] [i_3] [i_5] = (((((4095 | (arr_8 [i_0] [i_1] [i_2] [1] [i_1 + 2])))) ? (((!(arr_0 [i_3 - 2] [i_5])))) : (!76)));
                                arr_17 [i_0] [i_0] [13] = 4120786672386894062;
                            }
                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 16;i_6 += 1)
                            {
                                var_18 = (((arr_2 [i_3 + 1]) ? ((var_1 ? (arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_6] [i_6]) : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_1 [i_3] [i_6])));
                                var_19 = ((-(arr_5 [i_3 + 1] [i_1] [i_2])));
                            }
                            arr_22 [i_0] [i_1 + 2] [i_2] [i_3] [i_2] [i_2] = (max(17703749906039717080, 1));
                            var_20 = var_8;
                        }
                    }
                }
                arr_23 [i_1] [i_0] = ((((var_4 ? ((var_4 + (arr_20 [i_0] [i_0] [5] [i_0] [i_0] [5]))) : ((255 ? var_8 : (arr_13 [i_1] [5] [i_1] [i_0] [i_0] [i_0] [i_0]))))) == ((max(var_6, (~0))))));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_21 = (i_7 % 2 == zero) ? ((((arr_24 [i_7] [i_7]) + (arr_5 [i_0] [i_1] [i_7])))) : ((((arr_24 [i_7] [i_7]) - (arr_5 [i_0] [i_1] [i_7]))));
                    var_22 = (((((65486 ? -51 : var_8))) ? (((var_11 ? 63803 : (arr_25 [i_7] [i_1] [i_7])))) : var_3));
                }
                var_23 = min((((!(53557 ^ -663638225)))), (min(((max((arr_10 [i_0] [i_1] [i_1] [i_0] [i_0]), -4112))), ((var_10 >> (((arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1] [i_1]) - 5701253442068272392)))))));
            }
        }
    }
    var_24 = (((((var_7 ? 9429 : var_3)) ^ var_10)));
    #pragma endscop
}
