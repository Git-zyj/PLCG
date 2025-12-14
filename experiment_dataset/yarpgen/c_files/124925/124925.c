/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 *= ((var_4 || ((!((min(var_6, var_9)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_22 = (max(var_22, ((((arr_1 [i_0]) <= ((var_8 % (arr_1 [i_0]))))))));
        arr_3 [i_0] = 26;
        arr_4 [3] = var_12;
    }
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {
        arr_9 [i_1] = min((min((arr_5 [i_1 - 4]), (arr_5 [i_1 - 1]))), (arr_5 [i_1 + 1]));
        arr_10 [i_1] = (!14075718379667964004);
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        arr_13 [i_2] = (!1089861500);
        arr_14 [i_2] = (min(221, (arr_0 [i_2 - 1] [i_2 - 1])));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_18 [i_2 + 1] [i_2] [i_3] = (((((~(arr_15 [i_2 - 1] [5])))) ? 0 : var_19));
            var_23 |= ((((~-14) ? (arr_5 [i_2 - 1]) : (min(var_1, var_18)))) ^ (min(var_7, (arr_1 [i_2 - 1]))));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_24 = (max((((arr_0 [i_2] [i_4]) / var_19)), (arr_1 [i_2 - 1])));
            var_25 = (arr_19 [i_2 + 1] [i_2]);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_28 [i_2] [i_4] [i_5] = (((arr_0 [i_2] [i_4]) ? (arr_7 [13] [i_2 + 1]) : (((!((min((arr_26 [i_4] [i_5] [i_5]), (arr_7 [i_2] [i_2 - 1])))))))));
                            arr_29 [i_6] [5] [i_2] = (max((arr_26 [i_6 + 2] [i_5] [i_5]), var_13));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
