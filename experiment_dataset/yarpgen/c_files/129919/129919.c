/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((4835 ? (-9223372036854775807 - 1) : 13)))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_3] [i_3] [i_3] = var_7;
                        var_14 = (((arr_11 [i_0] [11] [i_0] [11]) <= ((var_1 ? (((var_12 != (arr_9 [i_3] [i_0] [i_0] [i_0])))) : ((min(var_5, (arr_7 [i_0] [i_1] [i_0 - 2]))))))));
                    }
                }
            }
        }
        var_15 = (((((~var_10) ? 855034083 : var_8)) <= var_5));
        var_16 = (min(var_16, (((+((min((arr_3 [i_0 + 2] [i_0]), 15))))))));

        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_17 = (min(var_17, (((min(var_7, (((!(arr_17 [i_0]))))))))));
                        var_18 = (((((((max(var_7, 127))) + (arr_5 [i_0] [i_0])))) ? var_3 : (arr_19 [i_6])));
                    }
                }
            }
            var_19 = (!var_8);
            var_20 = (((var_1 - var_6) != (arr_9 [i_0] [i_0] [2] [i_0])));
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
        {
            var_21 = ((((((arr_9 [0] [i_7] [i_7] [8]) <= 125)) ? 1141783968 : 41)));
            var_22 = (min(var_22, var_9));
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
        {
            var_23 -= ((((((((var_1 / (arr_20 [i_8] [0])))) ? ((var_2 ? var_4 : var_0)) : (max((arr_5 [i_8] [8]), var_10))))) ? ((-((4278472490 ? 16384 : 8977)))) : ((var_1 ? ((var_9 / (arr_0 [i_0]))) : var_2))));
            var_24 = (((((var_7 ? (arr_6 [1] [1] [1]) : var_3)) / (~var_1))));
            var_25 = ((((((arr_20 [i_0] [i_0 + 2]) & (arr_25 [i_0] [i_0 + 2] [2])))) ? (((-var_7 ? (arr_22 [i_0 - 1] [i_0 - 1]) : var_9))) : (max(1, 3439933232))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_26 = ((((-var_0 ? (arr_11 [3] [6] [3] [6]) : (min(var_3, (arr_15 [i_9] [i_10]))))) | (~16387)));
                            var_27 = (((arr_14 [9] [5]) ? (max((arr_14 [i_0 + 1] [9]), ((var_0 | (arr_13 [i_0] [i_11]))))) : ((((max(var_6, var_5))) << (((arr_15 [i_0] [i_8]) - 1457312378))))));
                            var_28 = (max((var_9 | 4850), (min(((((arr_13 [i_0] [i_0]) ? 46277 : var_2))), ((~(arr_34 [i_11] [i_8])))))));
                        }
                    }
                }
            }
        }
        arr_37 [i_0 - 2] = ((((~-13304) ? (((arr_3 [i_0] [i_0]) - var_9)) : ((var_4 >> (((arr_3 [i_0] [i_0]) + 14753)))))));
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        var_29 = var_10;
        var_30 = var_5;
        var_31 = ((((((~var_3) ^ var_9))) ? var_10 : ((13836 ? 4278472480 : 0))));
    }
    var_32 = (min(var_32, ((min((var_10 ^ var_5), (((!((max(var_6, var_2)))))))))));
    #pragma endscop
}
