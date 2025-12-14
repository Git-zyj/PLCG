/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_4 ? ((((max(var_17, 1217798915))))) : var_17));
    var_19 = var_8;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (max(1217798900, (((arr_1 [i_0]) ? var_17 : (arr_0 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [1] [1] [i_3] = (((var_12 & 11003217157409733364) ? var_3 : (max(var_7, ((1217798906 ? 3077168389 : 3678))))));
                        var_20 *= var_16;
                        var_21 *= (arr_8 [i_1 + 2] [i_0]);
                    }
                }
            }
        }
        arr_13 [7] |= (((arr_7 [i_0]) / (max(1217798906, (arr_9 [i_0] [i_0] [i_0])))));
        var_22 = var_9;
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    arr_24 [i_4] [i_4] [i_4] = (((((arr_22 [i_4] [i_4] [1]) ? (arr_22 [i_6] [i_5] [i_4]) : (arr_22 [i_4] [1] [i_4])))) ? ((var_5 ^ (arr_15 [i_4] [i_5]))) : var_3);
                    arr_25 [i_6] = (max((max(var_9, (arr_17 [i_6] [i_5]))), ((min((arr_14 [17] [i_4]), (arr_14 [i_5] [i_6]))))));
                }
            }
        }
        var_23 -= var_3;
        var_24 += ((5573909229258607307 ? 12785236774526553821 : 10503));
        var_25 = (arr_14 [i_4] [i_4]);
        arr_26 [i_4] = ((var_2 ? ((-(arr_19 [i_4] [14] [14]))) : ((var_15 ? (arr_21 [i_4] [i_4] [i_4]) : (arr_19 [i_4] [i_4] [i_4])))));
    }
    var_26 = (min(146, ((var_9 ? (max(-122, 3077168389)) : (((var_15 ? var_14 : var_0)))))));
    #pragma endscop
}
