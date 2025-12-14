/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(var_17, 31040264))) ? (((32758 ? -2147483630 : 65520))) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_19 = (((arr_0 [i_1 - 1]) & (((arr_1 [i_1 - 1]) ? (((arr_0 [i_1]) % (arr_3 [i_0] [i_1] [i_2]))) : (1 <= 2147483642)))));
                    arr_6 [i_1] [i_2] = (arr_5 [i_0]);
                    var_20 = (min(var_20, (!11)));
                    var_21 *= (max(((((((arr_5 [i_0]) * (arr_2 [i_0]))) <= (arr_4 [i_0 + 2] [i_1 - 1] [i_2])))), (arr_1 [i_0])));
                }
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    arr_9 [i_0] [i_1] [i_3] [i_0] = (arr_1 [i_0]);
                    var_22 = (arr_5 [i_3]);
                    var_23 = min(var_8, (arr_2 [i_1 + 1]));
                    arr_10 [i_3] = (min((arr_1 [i_3 + 1]), (min(var_4, (arr_1 [i_3 - 1])))));
                    var_24 = (min((((arr_4 [i_0 + 2] [i_1] [i_3 - 1]) ^ (arr_5 [i_0 - 1]))), (((arr_2 [i_1 - 1]) ? (arr_4 [i_0 - 1] [i_1] [i_3 - 1]) : (arr_5 [i_1 + 1])))));
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_25 = (min(var_25, ((((max(1, 12)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_26 = (min(var_26, 8388607));
                                arr_20 [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                                arr_21 [i_0] [i_0] [i_0] [i_6] [i_5] [i_6] [i_4] = (((!(((arr_4 [i_0] [i_4] [i_5]) || 0)))));
                            }
                        }
                    }
                    var_27 = (arr_4 [i_4] [i_1] [i_0]);
                }
                arr_22 [i_0 + 2] = ((!(arr_15 [i_0 + 2] [i_1] [i_1 - 1] [i_1 + 1])));
            }
        }
    }
    var_28 ^= (!var_6);
    var_29 = -var_14;
    var_30 = var_2;
    #pragma endscop
}
