/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(((-1476507747 ? -var_5 : ((var_4 ? var_9 : 1476507746)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (arr_3 [i_0] [i_1]);
                var_18 = (arr_2 [i_1] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_19 = (((((-((-(arr_7 [i_3 + 1] [i_2] [i_0])))))) ? -var_0 : (((arr_11 [i_0] [i_1] [i_2] [i_3 + 1] [i_4]) ? (arr_11 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_3 [i_0] [i_0])))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0] = ((((39 ? (arr_11 [i_3 + 2] [i_1] [i_4 - 2] [i_3] [i_3 + 3]) : (arr_11 [i_3 + 2] [i_1 + 2] [i_4 - 1] [i_3] [i_4 - 1]))) + -126));
                                var_20 ^= ((((arr_9 [i_4 - 1] [i_1 - 1]) ? (arr_9 [i_4 - 1] [i_1 - 2]) : (arr_9 [i_4 + 1] [i_1 + 4]))) >= (arr_9 [i_3] [i_2]));
                                arr_14 [i_0] [i_1] [i_3] [i_0] = ((((min(196, (((arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]) << (1 - 1)))))) >= 4294967295));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_17 [i_5] [i_0] [i_5] = (((arr_11 [i_5] [i_1 - 2] [i_1 + 3] [i_1 - 3] [i_0]) || (((-(((!(arr_5 [i_0] [i_1] [i_5])))))))));
                    var_21 = (((((-((185 >> (99670694 - 99670676)))))) ? (((arr_7 [i_1 - 1] [i_1] [i_1 - 2]) ? (arr_15 [i_0] [i_0]) : (min((arr_1 [i_0] [i_5]), (arr_7 [i_0] [i_1] [i_0]))))) : (((((min(8263, (arr_9 [i_0] [i_5])))) ? var_9 : (44557 > var_2))))));
                    arr_18 [i_0] [i_0] [i_0] [i_1] = (((arr_6 [i_0]) % var_10));
                    arr_19 [i_0] = ((((arr_10 [i_0] [i_1] [i_1 - 2] [i_1 + 3] [i_1 + 2] [i_1 - 2]) + (arr_16 [i_0] [i_0] [i_1 + 1]))));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_22 = 219;
                    var_23 = ((var_9 | ((((arr_21 [i_0] [i_0] [i_1 + 4] [i_0]) <= (arr_21 [i_1] [i_1] [i_1 + 3] [i_0]))))));
                    arr_22 [i_0] [i_1] [i_0] [i_0] = (arr_6 [i_0]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 6;i_8 += 1)
                        {
                            {
                                var_24 = (arr_1 [i_7] [i_1 - 1]);
                                var_25 = ((-9122659007680508845 / (arr_15 [i_0] [i_8 - 1])));
                                var_26 = (arr_1 [i_0] [i_0]);
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-9122659007680508875 ? 1 : (arr_9 [i_0] [i_6])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
