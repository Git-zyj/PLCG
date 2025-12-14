/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_6 [i_1] [i_1] [i_2] [i_0] = (max((arr_3 [11] [4]), -248000585));
                    arr_7 [i_2] [i_1] [i_0] = ((((((max((arr_1 [11] [i_0]), (-127 - 1)))) ? 127 : var_6)) / (arr_1 [1] [i_0])));
                    var_12 = (min(var_12, (-127 - 1)));
                }
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_13 = ((arr_1 [i_4] [i_5]) & (arr_11 [i_0 + 2] [i_1 - 1] [i_5]));
                                var_14 = (max(var_14, (((-117 ? (arr_3 [i_3 - 1] [i_3 + 1]) : (arr_3 [i_4] [i_0 + 1]))))));
                            }
                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                arr_16 [i_4] [0] [8] [i_4] [i_6] = (!-104);
                                var_15 = (min(var_15, (((var_8 ? (((!(((117 << (((arr_4 [i_0 - 1] [13] [13] [i_0]) - 1320327552810090878)))))))) : (arr_5 [i_4]))))));
                                arr_17 [i_0] [14] [3] [i_4] [i_4] [i_6] = var_8;
                                var_16 ^= (min(((((max(117, (arr_15 [14])))) ? (117 % var_6) : (((!(arr_11 [i_0] [0] [i_3])))))), (arr_8 [i_0])));
                                arr_18 [i_4] [i_4] [i_3] [12] [i_4] = ((((!(arr_2 [7] [i_1]))) ? (arr_4 [i_6] [i_4] [i_3] [14]) : 1234784505));
                            }
                            for (int i_7 = 1; i_7 < 16;i_7 += 1)
                            {
                                var_17 |= ((-(((arr_15 [14]) ? var_3 : (var_0 * var_4)))));
                                var_18 += ((((var_6 ? 117 : (arr_19 [i_0] [i_0] [i_0] [i_0 + 1] [i_7] [i_7] [i_7])))) > (max(-118, ((0 ? (arr_2 [i_4] [16]) : var_11)))));
                            }
                            arr_21 [i_4] [11] [12] [i_4] = ((((-(arr_15 [i_4])))) ? (arr_15 [i_4]) : (((arr_9 [i_0 + 2]) ? -118 : (arr_9 [i_1 - 1]))));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_11;
    #pragma endscop
}
