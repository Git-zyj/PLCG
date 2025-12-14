/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_4 ? var_4 : var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    var_21 += -7687167191587370478;
                    var_22 = var_12;
                    arr_7 [i_1] [i_1] = ((-2079982843 ? 1 : 1));
                }
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    arr_11 [6] |= (min(((+(((arr_2 [i_3]) ? var_1 : 1)))), (arr_0 [i_1])));
                    var_23 = (((((((min(1, (arr_2 [i_0])))) ? 0 : (arr_8 [0] [i_1] [i_1])))) ? -1 : (((min(43, (arr_1 [i_0])))))));
                    arr_12 [i_1] = (min(((-(arr_2 [i_1]))), (!1)));
                }
                arr_13 [i_1] = (((max(var_2, ((0 ? var_3 : 213)))) + ((((arr_3 [i_0] [i_1] [i_1]) ? 0 : (arr_3 [i_0] [i_1] [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            {
                var_24 = (max(var_24, ((((((((min(var_9, (arr_17 [i_5] [i_4])))) ? (((86 ? 0 : 86))) : (((arr_16 [i_5]) + (arr_17 [i_4] [i_4])))))) && (arr_16 [i_4 + 1]))))));
                arr_19 [i_5] = (min(var_19, (max(var_14, ((0 ? (arr_15 [i_4] [i_5 - 1]) : (arr_18 [i_4 + 3] [i_4 + 2])))))));
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_28 [i_5] = ((~((~((~(arr_25 [i_4 + 2] [i_4] [i_4])))))));
                                var_25 = (max((((!(arr_17 [i_8] [i_4 + 2])))), ((0 ? 1836807217 : ((((arr_23 [i_4] [i_5] [5] [i_5]) ? var_0 : -79)))))));
                                arr_29 [10] [i_5] = ((max(((1 ? 1 : var_4)), 4)));
                                var_26 = (arr_17 [i_6 + 1] [i_4 + 2]);
                                arr_30 [i_8] [i_7] [6] [6] [i_5 - 2] [i_4 + 3] |= 65525;
                            }
                        }
                    }
                }
                arr_31 [i_4] [i_5] [i_5] = ((((((~var_18) ? (((!(arr_20 [i_4] [i_5] [i_4] [i_5])))) : 4095))) ? ((((18401078055429586092 ? 0 : (arr_27 [i_4] [i_4] [i_4] [5] [i_4] [5] [5]))))) : (min((arr_22 [i_4 + 2] [i_5 - 3] [9] [i_5 - 2]), -11193))));
                var_27 += (min((arr_16 [i_4]), 1));
            }
        }
    }
    #pragma endscop
}
