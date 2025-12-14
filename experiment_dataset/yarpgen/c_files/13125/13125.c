/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = (~(((((arr_3 [1] [1]) ? 34 : 6645207164361781991)) >> ((((arr_0 [i_0] [4]) || var_8))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [i_0] = 197;
                    arr_8 [8] [0] [8] &= (((((1 == (arr_0 [7] [i_1])))) <= (((~(arr_2 [i_0 - 1]))))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_20 *= (min(var_2, (min((arr_5 [i_0] [6] [i_0 + 1]), (arr_6 [i_0 + 1] [i_3])))));
                    var_21 += var_9;
                }
                var_22 &= (max(((((((arr_0 [i_0] [10]) ? (arr_5 [4] [8] [1]) : 2046600143)) << ((12055 ? var_13 : (arr_10 [1])))))), (arr_5 [6] [2] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            arr_20 [i_4] [i_4] [i_6] [i_5] [1] [i_7] = (min((arr_16 [18] [18] [i_5]), (arr_16 [18] [5] [i_5])));
                            arr_21 [i_5] [0] [i_5] [0] [i_4] = (arr_11 [19]);
                            var_23 = (min(var_23, (((((max((arr_18 [i_6 - 3] [i_6]), (arr_18 [i_6 + 1] [i_6])))) ? ((~(arr_18 [i_6 - 2] [i_6]))) : ((((arr_18 [i_6 - 2] [i_6]) <= (arr_18 [i_6 + 1] [i_6])))))))));
                            var_24 = (max(var_24, var_10));
                        }
                    }
                }

                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    arr_25 [i_5] [i_5] [i_5] [i_5] = ((((((arr_23 [i_8 - 1] [8]) * (((arr_23 [19] [i_5]) / (arr_11 [i_5])))))) ? (arr_19 [17] [1] [4] [i_5]) : (((((19808 ? (arr_17 [17] [17] [0] [0] [i_8]) : 62363))) ? (arr_11 [i_8 - 1]) : (arr_12 [i_8 - 1])))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                arr_33 [3] [13] [13] [i_9] [i_5] = (656507695 >> -1023535612);
                                arr_34 [i_5] [1] [i_8] [14] [i_5] = (((((arr_19 [i_5] [4] [i_5] [i_5]) && (arr_31 [3] [11] [i_5] [11] [6] [i_5] [8]))) ? (((arr_19 [i_4] [i_4] [i_4] [i_5]) ? (arr_31 [1] [i_5] [i_8] [1] [4] [i_9] [3]) : (arr_31 [1] [1] [12] [1] [1] [15] [i_8 - 1]))) : (((arr_31 [10] [1] [1] [i_9] [15] [10] [12]) ? (arr_19 [10] [14] [16] [i_5]) : (arr_31 [i_4] [15] [15] [i_8 - 1] [18] [1] [1])))));
                                var_25 -= ((~(((arr_12 [i_9 + 4]) / ((((arr_22 [1] [6] [1]) * 1)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
