/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [2] [i_2] [i_1] [2] |= max((((arr_1 [i_1 - 2]) ? var_6 : (arr_1 [i_1 - 1]))), ((42613 * (max((arr_3 [i_0]), 42613)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] = (max((((((max(18446744073709551615, var_7))) ? (arr_13 [i_0] [i_2] [i_2] [i_3] [i_3] [i_3] [i_1]) : (arr_1 [i_0])))), ((var_6 | (arr_12 [i_1 - 1] [i_2 - 1] [i_4 - 2])))));
                                var_12 = ((+(((arr_5 [i_3 + 1]) ? (max(1685064120, (arr_12 [i_1] [i_3] [i_4]))) : var_9))));
                                arr_16 [i_4] [i_3] [i_2] [i_1] [i_0] = -90;
                            }
                        }
                    }
                    arr_17 [i_0] [12] [i_2] |= 1;
                    arr_18 [0] [i_1] [i_2] [i_2] |= ((((((min(107, var_11))) | var_5)) <= ((min(-1, ((max(-90, 22923))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                arr_25 [i_5] [i_5] [i_6] = (((((var_5 >= -2147483638) ? (((~(arr_7 [i_5] [i_6] [i_6])))) : -var_5)) & (((~(-127 - 1))))));
                arr_26 [i_5] [i_5] [i_6] = var_8;
                arr_27 [i_5] [i_6] = (min((((arr_21 [i_5]) ? (arr_10 [i_5] [i_5] [i_6] [i_6]) : var_4)), var_9));
                var_13 = ((var_10 == (65533 / -49)));
            }
        }
    }
    var_14 = var_0;
    #pragma endscop
}
