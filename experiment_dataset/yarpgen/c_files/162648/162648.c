/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((-(((min(var_0, var_10)))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = max((arr_1 [i_0] [i_0]), ((-(arr_1 [i_0] [i_0]))));
        var_13 = (min((min(-var_9, -16919)), ((min(-1, ((max((arr_1 [i_0] [i_0]), 1))))))));
        var_14 = (((((((((arr_1 [i_0] [i_0]) ? var_6 : 16043))) ? ((var_1 ? (arr_1 [3] [i_0]) : 234)) : var_6))) || ((!(((24 ? 4294967280 : var_4)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = (-((206577602 ? 41 : (arr_0 [i_1] [i_1]))));
        arr_7 [i_1] = ((var_4 ? 9079810843849759125 : 199));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_15 = ((var_8 > 1) ? ((var_11 ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : -97)) : (arr_5 [i_1]));
                    arr_14 [i_1] [0] = var_5;
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        arr_17 [i_4] = (max((min((arr_0 [i_4] [i_4 - 1]), 96)), (arr_16 [i_4 - 2] [i_4])));
        var_16 *= (min(((-((var_1 ? 0 : (arr_15 [2]))))), ((max((arr_0 [i_4 - 2] [i_4 - 2]), (arr_1 [i_4] [0]))))));
        var_17 = (max(((((((var_1 ? (arr_16 [i_4 - 1] [i_4]) : (arr_0 [i_4] [i_4]))) + 9223372036854775807)) >> (((arr_0 [i_4 - 2] [i_4 - 2]) + 228063133390985553)))), (max(28940, (-5277182661435202327 / 5277182661435202327)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                {
                    var_18 = (((((min(0, (-127 - 1)))) ? (arr_16 [i_5] [i_5]) : (arr_19 [i_5] [i_5] [i_5]))));
                    arr_25 [i_4] = (((var_9 || (!3221225472))));
                    arr_26 [i_4] [i_5] [i_4] = (min((((-(arr_16 [i_4] [i_4])))), (3570361442458405433 < -1006303206)));

                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        arr_29 [i_4 - 2] [i_4] [i_5] [i_6] [i_7] = (((var_8 >= var_0) ? ((((!(arr_1 [i_4 + 1] [i_7 + 1]))))) : (min((min(3676084878722843222, 0)), (arr_28 [i_4] [i_4] [i_4])))));
                        arr_30 [i_4] [i_5] [i_6] [4] [i_4] [i_4] = ((-(((((min(var_3, var_4)))) | -4294967277))));
                        var_19 = (max(var_5, (max(0, (!-1006303206)))));
                    }
                }
            }
        }
    }

    for (int i_8 = 2; i_8 < 11;i_8 += 1)
    {
        arr_33 [i_8 - 2] = (min((max((arr_15 [4]), 3676084878722843222)), (((250 ? 0 : 68)))));
        var_20 |= ((max(((var_9 ? 17 : var_0), (min((arr_16 [i_8] [0]), -9223372036854775803))))));
    }
    for (int i_9 = 4; i_9 < 12;i_9 += 1)
    {
        arr_36 [i_9 + 1] = (min((arr_0 [i_9] [21]), (117 || 5)));
        var_21 = -118;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
    {
        arr_39 [i_10] = (arr_10 [i_10] [i_10]);
        arr_40 [i_10] [i_10] = (((((262143 ? 1 : 5876450777700142863))) || (arr_31 [i_10] [i_10])));
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
    {
        var_22 &= ((((max((arr_3 [i_11] [i_11]), var_5))) ? (((arr_11 [i_11] [i_11]) ^ 0)) : (arr_42 [i_11])));
        var_23 = ((-(((arr_32 [i_11]) ? (arr_32 [i_11]) : (arr_32 [i_11])))));
    }
    #pragma endscop
}
