/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((-var_15 ? var_3 : -var_13)) / ((((43 ? 43 : var_12))))));
    var_21 = var_17;
    var_22 = (~3741865262);

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_23 = ((+(((var_3 / var_14) ? var_4 : ((var_5 ? (arr_4 [17] [11] [i_2 - 2]) : 553102050))))));
                    var_24 = ((((((!((max((arr_4 [i_0 - 3] [i_1] [8]), (arr_5 [i_0 + 3] [i_0 + 3] [i_1] [3])))))))) * (max((((var_18 ? var_16 : (arr_6 [i_1] [i_2 - 1])))), ((var_17 ? var_4 : 0))))));
                    var_25 |= arr_3 [16] [16] [4];
                    var_26 = (arr_1 [i_0]);
                    var_27 = (min(var_27, (((((((min((arr_6 [i_0 - 3] [i_0]), 9223372036854775807))) ? (((max((arr_2 [i_0]), var_17)))) : (((arr_1 [i_1]) ? (arr_1 [1]) : (arr_4 [i_0] [i_0] [12]))))) / (255 | 12560))))));
                }
            }
        }
        var_28 += ((((max((arr_7 [i_0 + 4] [i_0 + 1] [i_0 + 3]), 36669))) ? (arr_5 [i_0 + 1] [9] [i_0 + 2] [i_0 + 2]) : (arr_6 [i_0] [i_0 - 1])));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_12 [i_3] = (((((167 ? 1331781521638059855 : 28802))) ? var_9 : (arr_7 [i_3] [i_3] [i_3])));
        arr_13 [i_3] = (arr_8 [i_3]);
        var_29 = (arr_5 [i_3] [i_3] [i_3] [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        arr_18 [i_4] = (((arr_14 [i_4]) ? (arr_14 [i_4]) : var_3));
        arr_19 [i_4] [i_4] = ((var_3 ? (arr_3 [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_3 [i_4 + 1] [i_4 + 1] [i_4 + 1])));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_23 [i_5] = (min(((-(var_1 > var_12))), 32767));
        var_30 = (max(var_16, (((4294967283 > (arr_22 [i_5]))))));
        var_31 |= (((((var_18 ? -274485802 : (arr_22 [6]))) ? var_1 : ((var_2 ? var_7 : (arr_20 [i_5] [i_5]))))));
        arr_24 [i_5] [i_5] = (((~155) ? -18265 : ((min(36665, (arr_22 [i_5]))))));
    }
    #pragma endscop
}
