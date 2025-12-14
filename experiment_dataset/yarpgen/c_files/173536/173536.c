/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = (((-var_14 / var_13) << (!17114229645117304734)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_21 = (((arr_1 [i_0 + 1]) ? -2864439577213960661 : 9125563871275007493));

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            arr_5 [14] = 125;
            var_22 = (max(var_22, var_7));
            arr_6 [i_0] [i_1] = var_10;
            var_23 *= ((((arr_0 [i_0]) ? (arr_0 [i_1]) : var_2)));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_0] [i_0] = ((var_1 ^ (arr_2 [i_0] [i_0 + 2] [i_2])));
            arr_10 [i_0] [i_2] = (var_7 ? (arr_7 [i_0] [i_0 + 2] [i_2]) : (arr_7 [i_0] [i_0 - 1] [i_2]));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_15 [i_3] [1] = (((arr_7 [i_0] [i_0] [i_0 + 3]) > (arr_7 [i_0] [13] [i_0 + 2])));
            var_24 = (min(var_24, (arr_0 [i_3])));
            arr_16 [i_0] = ((var_17 & (((-(arr_2 [4] [i_3] [i_3]))))));
            var_25 = (min(var_25, ((((arr_3 [i_0 + 1]) ? var_15 : (arr_3 [i_3]))))));
        }
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        arr_19 [i_4] |= (max(var_5, (min(10700939855479801497, -126))));
        var_26 += -23;
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                {
                    var_27 = (((arr_23 [i_6 - 2] [i_4 + 2] [i_6]) | (arr_25 [i_4] [i_4] [i_4 + 1])));
                    var_28 = ((-(max(var_8, (arr_23 [1] [1] [i_6])))));
                    arr_26 [i_5] [2] [i_5 + 4] = (arr_12 [8] [i_4]);
                    arr_27 [i_6 - 2] [i_5] = ((min((((arr_20 [i_6 + 1] [i_4]) + var_9)), (arr_4 [i_4] [i_4]))));
                }
            }
        }
        var_29 = ((-var_10 > (127 & var_18)));
    }
    for (int i_7 = 3; i_7 < 11;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_32 [i_7] = -1;
            var_30 |= (max((min((max((arr_2 [i_7] [8] [i_8]), var_3)), (((~(arr_30 [i_7] [i_8] [6])))))), ((~(arr_31 [i_8] [i_7 - 2] [6])))));
            var_31 = ((-(arr_22 [i_7 + 3] [i_7] [i_7 - 1] [i_7 + 1])));
        }
        arr_33 [i_7] = ((((max(255, 6723))) || ((!(arr_7 [i_7 - 3] [i_7 - 3] [i_7 + 2])))));
        var_32 = ((((((arr_20 [i_7 + 3] [i_7 - 3]) & (arr_2 [i_7] [0] [i_7])))) || (((var_14 ? (arr_2 [i_7 + 2] [i_7 + 2] [i_7 - 1]) : (arr_14 [i_7] [i_7 - 2]))))));
    }
    #pragma endscop
}
