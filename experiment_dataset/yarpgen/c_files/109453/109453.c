/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(!var_12)));
    var_20 = (max(var_20, (((-((~((var_8 ? var_6 : var_15)))))))));
    var_21 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [8] = ((-var_3 / (((arr_7 [i_0] [i_1] [i_1] [0] [i_3] [i_4]) ? (arr_5 [i_0] [0] [i_3]) : (arr_5 [i_0 - 1] [i_1 + 1] [i_3 + 2])))));
                                arr_12 [12] [i_1] [1] [i_1 - 1] = (((arr_5 [i_4] [i_1] [i_0]) * ((var_13 * (arr_4 [i_1 - 1] [i_0 + 1])))));
                                var_22 = (arr_4 [1] [i_1 - 1]);
                            }
                        }
                    }
                }
                var_23 = (min(var_23, ((-(min(((-2840169394788067397 / (arr_9 [i_0]))), var_10))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_18 [i_6] [i_5] [i_5] [0] = (((((((max(108700611, (arr_4 [i_6] [i_1 + 1])))) ? ((var_8 ? (arr_15 [i_0 - 1] [i_5] [i_0 + 1]) : 0)) : ((0 ? (arr_17 [i_0 - 2] [1] [i_1] [i_1] [10] [i_6]) : var_14))))) && var_3));
                            var_24 ^= ((var_3 ? (2147483647 != -2147483647) : (((arr_7 [i_0 - 2] [5] [i_5] [i_5] [i_6] [i_6]) % ((-(arr_1 [i_6])))))));
                            var_25 = ((~((-(arr_14 [5] [i_1 + 1])))));
                            var_26 = (max(var_26, ((min((((!(((var_10 ? (arr_13 [i_1]) : (arr_6 [i_0] [i_1] [7] [i_6]))))))), 63)))));
                        }
                    }
                }
            }
        }
    }
    var_27 = var_14;
    #pragma endscop
}
