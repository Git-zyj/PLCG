/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((52 ^ (min(var_1, var_6))))));
    var_21 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (((2260710840580392494 / var_9) != (((var_14 ? (arr_4 [11] [i_0] [i_2]) : (arr_3 [i_0] [i_1]))))));
                    arr_10 [i_2] [i_1] [i_1] [i_0] = var_4;
                    var_22 = var_18;
                    arr_11 [i_1] [i_0] = (((arr_3 [i_0] [i_1]) ? (((~1839631424) << (-112 + 125))) : (!-121)));
                    arr_12 [i_2] [i_1] [i_0] [i_0] = (((arr_1 [i_2] [i_1]) ? ((383795144 | (arr_1 [i_2] [i_2]))) : ((((!(arr_1 [i_2] [i_1])))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_23 |= var_10;
                    arr_21 [i_3] [i_4 - 3] [i_5] = 1931063788;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_24 = ((((((~121) ? 5690876648092750167 : (115 != -21)))) || (arr_23 [i_7] [6] [i_4] [i_4] [i_3])));
                                arr_27 [i_7] [i_3] [i_5] [i_4 + 1] [i_3] = -120;
                                arr_28 [i_6 + 1] = 50;
                                arr_29 [i_3 + 2] [2] [i_5] [i_6] [i_7] = (((((arr_25 [i_6 + 1] [i_4 - 3] [i_4 - 4] [i_3 + 1] [i_3 + 2]) & (111 & 115))) & 122));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_25 = var_18;
                        var_26 = ((~((var_19 ? (((~(arr_15 [i_5])))) : ((-1158165784787610567 + (arr_18 [i_3] [i_8] [7])))))));
                    }
                    var_27 -= (max((((arr_14 [i_5] [i_4]) + 25)), (--115)));
                }
            }
        }
    }
    var_28 ^= var_0;
    #pragma endscop
}
