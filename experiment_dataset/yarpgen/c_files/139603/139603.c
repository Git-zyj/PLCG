/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_0 ? (((((min(0, 1))) - var_1))) : var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_2;
                var_13 = (max(-90, ((((arr_2 [i_0]) == -80)))));
                var_14 = var_3;
                var_15 = ((((max((arr_1 [i_1 - 2] [i_1]), (arr_1 [i_1 + 1] [i_1])))) ? (max(var_4, (arr_1 [i_1 + 2] [i_1 + 2]))) : ((((arr_1 [i_1 + 1] [i_1]) ? (arr_1 [i_1 + 2] [i_1 + 2]) : (arr_1 [i_1 + 2] [i_1]))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((min((arr_9 [i_2 + 1]), (arr_9 [i_2 - 1]))));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 24;i_4 += 1)
            {
                {
                    arr_16 [i_2] = ((((var_11 ^ (arr_7 [i_2 + 1])))) ? var_6 : (arr_7 [i_2 - 1]));
                    var_16 = (max(((var_5 ? var_2 : (arr_8 [i_2 + 1]))), ((max(21, var_10)))));
                }
            }
        }
        arr_17 [i_2 - 1] [i_2] = ((((max((arr_6 [i_2]), var_3))) ? 0 : ((max((arr_13 [i_2]), (arr_13 [i_2]))))));
    }
    for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_17 = -107;
            arr_22 [i_5] [i_5 - 1] [i_6] = ((59600 ? (((arr_19 [i_5 - 1]) ? (arr_19 [i_5 - 1]) : var_11)) : ((min(6600, ((60 ? 27 : (arr_20 [i_6] [i_5]))))))));
            var_18 = (min(var_18, ((((min((arr_11 [i_5 - 1] [i_5] [i_5 + 1]), (arr_11 [i_5 - 1] [i_5] [i_5 + 1])))) ? -58 : ((max((arr_11 [i_5 - 1] [i_5 - 1] [i_5 + 1]), var_3)))))));
        }
        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            var_19 |= (min((arr_8 [i_5 - 1]), (~49453)));
            arr_25 [i_5 - 1] [i_5] [i_7] = (min(var_9, var_6));
            arr_26 [6] [21] = (((158 * 21) ? (0 && -92) : 50));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    var_20 = ((46 >> (((max((125 * 223), -93)) - 27860))));
                    var_21 = (min(((max(206, -109))), (arr_11 [i_5 - 1] [i_8] [5])));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                arr_38 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_10] [i_5] = (!7472);
                                var_22 = ((((max((arr_24 [i_5 - 1] [i_5 - 1]), (arr_24 [i_8] [i_10 - 1]))))) * (((arr_24 [i_5 + 1] [i_5 + 1]) ? 9046663019251417143 : (arr_24 [i_5 - 1] [i_5 + 1]))));
                            }
                        }
                    }
                    var_23 = (min(var_23, ((((arr_30 [i_5] [11] [i_5] [i_5]) % ((min(var_6, 206))))))));
                }
            }
        }
        var_24 ^= (((((((max(1296, (arr_30 [i_5] [i_5 + 1] [i_5 - 1] [i_5])))) ? ((var_6 ? -124 : var_9)) : 128))) ? var_2 : (max(var_10, var_3))));
    }
    for (int i_12 = 1; i_12 < 24;i_12 += 1) /* same iter space */
    {
        var_25 = min(var_5, (min((arr_15 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 - 1]), (arr_15 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 - 1]))));
        arr_41 [i_12] = (187 ^ 535822336);
        arr_42 [i_12] = (max(8926, -98));
        var_26 = var_4;
    }
    #pragma endscop
}
