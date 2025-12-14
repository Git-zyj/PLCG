/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_11 -= (max((((((arr_3 [i_1] [5]) ? var_8 : var_9)))), (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_1])))));
            arr_4 [12] [i_0] [0] = (((((((((arr_1 [i_0] [3]) ? (arr_0 [i_0]) : (arr_0 [2]))) + 9223372036854775807)) >> (((min(var_2, var_3)) + 5685189927094863691)))) < ((((~var_7) ? ((2457157203 ? 1 : 1)) : ((((arr_3 [0] [6]) >= (arr_0 [i_1])))))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_12 ^= ((var_7 != (var_7 < var_8)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_13 = (((arr_8 [i_0] [i_2] [i_3]) ? ((((!(arr_15 [i_4] [6] [i_3] [i_2] [7] [6] [i_4]))))) : var_4));
                            arr_16 [i_1] [i_4] [i_3] [i_4] = ((var_2 ? (arr_6 [i_0] [i_2] [i_4]) : (arr_6 [i_1] [i_3] [i_4])));
                            arr_17 [i_4] = ((8178749306358960749 ? -8178749306358960758 : ((-8488246999218621654 ? 2457157203 : -9066030668005953920))));
                            arr_18 [i_0] [8] [i_1] [4] [i_0] [i_0] |= -var_9;
                        }
                    }
                }
            }
        }
        var_14 = (((((~var_9) ? (((arr_5 [i_0] [i_0]) ? (arr_0 [13]) : var_9)) : (~var_4)))) ? ((((((arr_12 [11]) ? var_5 : var_3))) ? ((var_10 ? var_4 : (arr_8 [i_0] [i_0] [i_0]))) : (min(var_4, var_5)))) : ((((((~var_6) + 2147483647)) >> ((((var_5 ? var_3 : var_5)) + 5685189927094863701))))));
    }
    var_15 = (min(var_15, (((!64) ? var_4 : (max(var_6, ((var_10 ? var_3 : var_6))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_16 ^= (min((arr_21 [1] [i_6]), (((arr_21 [i_5] [i_6]) ? (arr_21 [i_5] [i_6]) : (arr_21 [i_5] [i_6])))));
                arr_25 [i_5] [i_5] [i_5] = (((((((var_6 ? (arr_24 [5]) : (arr_21 [1] [14])))) ? ((((arr_19 [i_6] [i_5]) ? var_4 : (arr_19 [1] [i_6])))) : ((var_8 ? (arr_22 [i_5] [i_6]) : (arr_20 [i_5])))))) ? (arr_21 [11] [i_6]) : ((((((arr_21 [i_5] [3]) ? (arr_24 [10]) : var_9))) ? (min(var_1, var_0)) : (~var_10))));
                arr_26 [i_5] [i_6] = ((~((((min(var_10, var_5))) ? (((arr_24 [16]) + var_3)) : (((arr_19 [i_5] [i_6]) ? (arr_19 [0] [10]) : var_4))))));
            }
        }
    }
    var_17 = ((+(((var_10 - var_10) ? var_0 : ((var_9 ? var_1 : var_7))))));
    #pragma endscop
}
