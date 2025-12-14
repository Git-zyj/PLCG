/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_4;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_13 += (arr_0 [i_0 + 1]);
        var_14 = var_7;
        arr_2 [i_0] = (((arr_1 [i_0] [i_0 + 1]) * (((!(arr_1 [i_0] [i_0]))))));
        var_15 = (((arr_0 [i_0]) ? (((((10 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? ((0 ? -2020870042 : 1545014705)) : (min(2020870026, 1)))) : (arr_0 [i_0])));
        var_16 = ((1 & (arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_17 = (arr_4 [i_1] [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_3 - 1] [i_2] [i_1] = (arr_6 [i_3] [i_1]);
                        var_18 = ((((((arr_5 [i_1]) % (arr_5 [i_1])))) ? ((max((arr_5 [i_1]), -8))) : (min(4611686018427256832, (arr_5 [i_1])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                {
                    var_19 = ((-9 ? ((((!(arr_4 [i_6 + 4] [i_1 - 2]))))) : (min((57479 >= var_1), (min((arr_6 [i_1] [i_1]), (arr_10 [i_5] [i_5] [i_6] [i_1])))))));
                    arr_18 [i_1] [i_1] [i_6 - 1] = max((arr_16 [i_5] [i_5] [i_1] [i_5]), (min((min((arr_4 [i_1] [i_6 + 3]), (arr_5 [i_1]))), (((arr_4 [i_6 + 1] [i_5]) ? 1893646311 : -17444)))));

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_20 = ((((!(((var_8 & (arr_6 [i_1] [i_1])))))) ? ((((min(1, 226199754))) ? (arr_19 [i_1] [i_6] [i_5] [i_1]) : (arr_8 [i_1] [i_1] [i_1]))) : (min((arr_11 [i_6] [i_6]), ((min(0, -17446)))))));
                        arr_21 [i_1] = (min((((arr_9 [i_1] [i_6] [i_6]) ? (arr_5 [i_1]) : var_2)), -17444));
                        arr_22 [i_1] = (((10 && 0) && ((((arr_5 [i_1]) ? ((var_4 ? (arr_14 [i_6] [i_7]) : (arr_7 [i_1] [i_1] [i_7]))) : (min((arr_14 [i_1] [i_1]), 0)))))));
                        arr_23 [i_1] [i_5] [i_1] [i_7] = (((((arr_5 [i_1]) + (arr_5 [i_1])))) ? ((max((149 && -1346535860), (min(1, (arr_4 [i_1] [i_5])))))) : (min((arr_6 [i_1] [i_1]), (((!(arr_14 [i_5] [i_5])))))));
                    }
                }
            }
        }
        var_21 = (arr_9 [i_1] [i_1] [i_1]);
    }
    #pragma endscop
}
