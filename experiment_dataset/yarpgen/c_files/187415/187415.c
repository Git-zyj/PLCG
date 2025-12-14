/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = var_3;
        var_14 = ((((((((-461645243 ? var_7 : var_0))) ? ((461645243 % (arr_0 [i_0]))) : (arr_0 [i_0])))) ? (max(((max(2147483647, (arr_0 [i_0])))), 0)) : (((-(min(var_8, (arr_1 [i_0]))))))));
        arr_2 [i_0] = ((((arr_0 [i_0]) ? ((-77902253 ? 0 : 461645253)) : var_4)));
        arr_3 [i_0] = (min(15, ((((arr_0 [i_0]) != (arr_0 [i_0]))))));
        var_15 = (max(var_15, (!-18864)));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((((-461645241 >= (arr_4 [i_1 - 1]))) ? (((arr_9 [i_1] [i_1] [i_1 - 1]) << (((arr_7 [0] [5]) + 79965938)))) : ((((arr_0 [i_4]) || (arr_9 [i_1] [8] [i_1 - 1])))))))));
                                var_17 ^= ((-(min(2663866061210726838, (arr_13 [5] [i_3] [i_3] [i_5])))));
                                var_18 = var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_19 = (arr_0 [i_6]);
                                arr_23 [i_1] [i_1] [i_1] [i_6] [1] = (arr_1 [i_6]);
                            }
                        }
                    }
                    var_20 = (arr_17 [9] [9] [5] [i_2] [i_1] [i_1]);
                    var_21 += -1138620599;
                }
            }
        }
        arr_24 [i_1] = (arr_14 [i_1] [i_1 - 2] [4] [4]);
        var_22 = (min(var_22, ((min((((!(arr_16 [i_1 - 1])))), (((arr_16 [i_1 - 1]) << (((arr_16 [i_1 - 1]) - 434615094)))))))));
        var_23 = (max(var_23, (((!(arr_19 [i_1 - 2] [5] [i_1] [i_1]))))));
        arr_25 [10] = (((((0 - (arr_5 [i_1 - 2])))) ? ((var_0 ? 461645266 : 461645251)) : (((!(arr_18 [i_1 - 1] [i_1 - 1]))))));
    }
    var_24 = 18446744073709551615;
    #pragma endscop
}
