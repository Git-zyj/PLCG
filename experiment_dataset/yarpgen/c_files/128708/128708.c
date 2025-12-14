/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (min(var_13, (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_15 [12] [i_2] [i_3] [i_4] [8] [i_4] = (max(202, (((arr_8 [i_1] [i_2]) ? (arr_8 [i_3] [i_3]) : var_14))));
                        arr_16 [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] = ((~(max((~18446744073709551615), var_15))));
                    }
                }
            }
        }
        arr_17 [14] = (((((-32765 ? -55 : 209))) ? (max((var_4 << 6), var_4)) : (arr_10 [i_1] [i_1] [11] [i_1])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                {
                    arr_23 [i_6] = (max(((-(!var_3))), (arr_3 [i_5])));
                    arr_24 [i_1] [i_1] [1] = (arr_14 [i_6] [i_5] [i_1] [i_1]);
                    arr_25 [i_5] [i_5] [10] = ((18446744073709551615 ? 186 : 41368));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_19 = (((max(41368, 14782499827815763910)) ^ (min(var_4, var_12))));
                                var_20 = (!var_2);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        arr_32 [i_9] = ((max((arr_21 [i_9] [i_9] [i_9]), (max(var_14, (arr_14 [i_9] [13] [i_9] [i_9]))))));
        var_21 -= (max((arr_1 [i_9]), (max((max((arr_31 [1]), 8104078050530788888)), (arr_31 [i_9])))));
        var_22 += 54354;
        var_23 = -8104078050530788892;
    }
    var_24 = (min((!var_8), ((max(var_8, 24167)))));
    var_25 = -var_17;
    #pragma endscop
}
