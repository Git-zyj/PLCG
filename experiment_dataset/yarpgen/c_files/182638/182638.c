/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(var_6, ((max(var_3, 5647520975554554447)))))) || (((9223372036854775807 != 55318) <= ((var_1 ? var_4 : var_11))))));
    var_18 = (7828418750034541642 | var_8);

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_19 = ((!((!(arr_0 [i_0 + 2])))));
        var_20 = var_8;
        arr_2 [i_0] = (max(((((max((arr_1 [i_0]), 570245696))) && (arr_1 [i_0 + 1]))), (((!var_12) || ((max(var_6, var_14)))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_14 [i_1] [i_2] [i_4] [i_1] [i_3] = (arr_0 [i_4]);
                                arr_15 [i_3] [i_4] [i_3] [i_3] [i_2] [i_3] = ((~((-(arr_4 [i_5 - 2])))));
                                var_21 = var_1;
                                var_22 = ((var_12 ? (((arr_5 [i_5]) ? ((var_15 ? 2047 : var_15)) : (var_16 || 29))) : (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1])));
                                var_23 ^= -2047;
                            }
                        }
                    }
                    arr_16 [i_2] [i_3] [i_2] [i_2] = min(34, ((+((((arr_7 [i_3]) || var_15))))));
                    var_24 = (((max(var_3, ((-(arr_13 [i_1] [i_3] [i_2] [i_1] [8]))))) <= -var_15));
                    arr_17 [i_3] [i_3] [i_3] [i_2] = ((((arr_0 [i_1]) ? 4094 : 11)));
                    arr_18 [i_3] [i_2] = ((((5460834059034881143 ? ((max((arr_10 [i_1] [i_1] [i_1]), (arr_7 [i_1])))) : (~7828418750034541642))) << (((((arr_5 [i_1]) & (arr_6 [i_3]))) - 94611405659111443))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_25 = 7;
                    var_26 ^= (max(4068, (((arr_13 [i_1] [10] [i_6] [i_6 + 3] [i_7]) ? (arr_4 [i_1]) : ((((arr_3 [i_1]) || 29571)))))));
                }
            }
        }
        var_27 ^= (((((min(var_7, (arr_12 [4] [i_1] [i_1] [4] [i_1])))) || (((-58 + (arr_26 [i_1] [i_1] [i_1] [i_1])))))));
    }
    var_28 -= var_1;
    #pragma endscop
}
