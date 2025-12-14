/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 -= (min((arr_3 [i_0]), var_0));
        arr_4 [i_0] = ((((((!(arr_1 [i_0]))))) <= ((var_6 + (((arr_0 [i_0]) + var_1))))));
        var_11 -= -41158;
        var_12 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = (max(((17746387416336324352 ? 73 : 51)), ((-(arr_5 [i_1] [i_1])))));
        arr_8 [i_1] = (max(var_2, ((((arr_5 [i_1] [i_1]) < (arr_5 [i_1] [i_1]))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_13 = var_3;
                arr_13 [i_3] [i_3] = ((-(arr_9 [i_2])));
                arr_14 [i_2] [i_3] = (min(((((arr_6 [i_2]) / (arr_6 [i_2])))), (max(4294967295, (arr_6 [i_2])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_29 [i_5] [i_5] = ((((max((arr_5 [i_5] [i_5]), var_3))) != (((arr_17 [i_5 - 1] [i_5]) ? (((min(var_8, (arr_6 [i_6]))))) : (((arr_16 [i_4] [i_4]) & (arr_17 [i_5] [i_5])))))));
                                var_14 = (arr_22 [i_4] [i_4]);
                            }
                        }
                    }
                    arr_30 [i_5] [i_5] [i_5] = (((arr_21 [i_4] [i_4] [i_4]) ? ((((var_1 << (((arr_15 [i_6]) - 8682208688960395477)))))) : (min((arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]), (((arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) + var_2))))));
                    var_15 = (var_6 >= -var_6);
                    var_16 = (max(var_6, ((~(-9223372036854775807 - 1)))));
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_34 [i_9] [i_9] = ((-((-((~(arr_2 [i_9] [i_9])))))));
        var_17 = ((var_4 + ((-(arr_18 [i_9] [i_9] [i_9])))));
        var_18 = ((((((var_9 ? (arr_31 [i_9] [i_9]) : (arr_22 [i_9] [i_9]))) > (((var_9 ? var_4 : 5407)))))) ^ var_5);
        var_19 = (((((((var_9 ? var_9 : var_7))) ? ((max(var_4, var_8))) : (~var_8)))) && ((var_8 >= ((var_9 ? var_3 : var_4)))));
    }
    #pragma endscop
}
