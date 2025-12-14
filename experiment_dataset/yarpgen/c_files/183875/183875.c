/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_1;
    var_20 = ((((((var_16 ^ var_15) < ((var_11 ? var_5 : var_12))))) & var_4));
    var_21 = max((min((max(239, var_9)), var_6)), (min(var_1, var_17)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!(((((max((arr_1 [i_0]), var_3))) ? -var_7 : var_9))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_1 - 1] [i_0] = ((((max((((arr_3 [i_0]) ? 129 : (arr_7 [i_0]))), (arr_0 [i_2 + 1] [i_1 + 1])))) - (arr_8 [i_0])));
                    var_22 *= (max(-133, ((var_17 ? (arr_0 [i_1 - 3] [i_2 + 1]) : (arr_0 [i_1 - 3] [i_2 - 1])))));
                    arr_10 [i_0] [i_0] [i_0] = var_5;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_23 *= ((((min((arr_7 [i_0]), 122))) ? (arr_0 [i_0] [i_4]) : (((!(arr_15 [i_4] [i_3] [i_4]))))));
                    var_24 = (arr_8 [i_4]);
                    arr_16 [i_0] [i_4] = (i_0 % 2 == 0) ? ((max((((arr_11 [i_3] [i_3] [i_3]) >> ((((~(arr_3 [i_0]))) + 3963)))), (((((arr_12 [i_0] [i_0] [i_0]) & (arr_11 [i_0] [i_3] [i_4])))))))) : ((max((((arr_11 [i_3] [i_3] [i_3]) >> ((((((~(arr_3 [i_0]))) + 3963)) - 9657)))), (((((arr_12 [i_0] [i_0] [i_0]) & (arr_11 [i_0] [i_3] [i_4]))))))));
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        var_25 = ((-(arr_0 [i_5 + 2] [i_5 - 3])));
        var_26 += (max(((19164 & (arr_14 [1]))), var_15));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                {
                    var_27 = (((arr_4 [i_8] [i_8 + 1] [i_8 - 1]) ? (((arr_4 [i_8] [i_8 - 1] [i_8 - 1]) ? var_4 : (arr_4 [i_8] [i_8 - 1] [i_8 + 1]))) : ((min((arr_4 [i_8] [i_8 - 1] [i_8 - 1]), (arr_4 [i_8] [i_8 - 1] [i_8 + 1]))))));
                    var_28 = 0;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                {
                    var_29 -= (((((var_1 ? var_0 : ((2800186755 ? var_7 : (arr_31 [i_6] [i_9 - 1] [i_10])))))) ? (((((arr_23 [i_6] [i_6]) ? 15 : var_9)) ^ (arr_22 [i_6]))) : ((((4294967295 == (((max((arr_5 [i_6] [i_6]), var_17))))))))));
                    var_30 = (((((((arr_0 [0] [i_6]) ? 1 : 3168163522)))) - (max(var_11, (((arr_29 [i_10] [i_10]) + (arr_31 [i_6] [7] [7])))))));
                }
            }
        }
        var_31 *= var_12;
    }
    #pragma endscop
}
