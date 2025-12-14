/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!var_6) ? (((-12 ? var_5 : (((min(182, 1))))))) : (min(((74 ? 0 : 182)), 9))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_2] = (((((~(arr_2 [i_2 - 1])))) ? (arr_0 [i_2]) : (max((max(-1, (arr_4 [i_1]))), 18))));
                        var_11 = (((arr_7 [i_2 - 1] [i_2 + 1] [i_2 + 1] [8]) ? (min((arr_3 [i_3 - 2] [i_2 - 2]), 3854014618096847113)) : 9));
                        var_12 = (min(var_12, ((((arr_5 [i_0] [i_1]) ? (arr_2 [i_0]) : 204)))));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_14 [i_0] [i_2] = ((((223 ? 18446744073709551615 : 1)) + (min((((!(arr_10 [i_0] [i_2] [i_1] [i_0])))), 18446744073709551606))));
                        var_13 = (min((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), 223));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_17 [i_0] [i_2] [i_2] [i_5] = (-32767 - 1);
                        arr_18 [i_2] [i_2 + 1] [i_1] [i_2] = (max((min((-6098353978962164964 | 1), (((var_2 ? 94 : var_9))))), (~15)));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_21 [i_2] [i_1] = (min((arr_12 [1] [i_2] [1] [i_5]), (((arr_20 [3] [3] [i_2 - 2] [i_2] [i_6]) ? (max((arr_16 [1] [i_1] [i_1] [i_1] [i_1] [1]), var_5)) : (arr_4 [i_2 - 1])))));
                            arr_22 [i_0] [i_2] = 1;
                            arr_23 [i_0] [i_0] [i_0] [i_2] [6] [i_0] [i_0] = (arr_12 [i_0] [i_2] [i_2 - 1] [i_6]);
                        }
                        var_14 = (min(var_14, ((min((min((arr_8 [i_1] [i_2 - 1] [i_2 - 1] [i_1]), ((-(arr_2 [7]))))), (6 & 204))))));
                    }
                    arr_24 [i_1] [i_1] |= ((~(arr_13 [10] [i_0] [i_1] [i_2 - 1] [i_2])));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_27 [i_7] = min((((arr_26 [i_7]) ? 32532 : 75)), (min((((!(arr_25 [i_7])))), (arr_26 [i_7]))));
        arr_28 [i_7] = (min((((((max(1, 18446744073709551608))) && (!2560)))), (arr_25 [i_7])));
    }
    #pragma endscop
}
