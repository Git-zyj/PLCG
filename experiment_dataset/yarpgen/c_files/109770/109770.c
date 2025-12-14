/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((min(((max(var_3, var_4))), (max(var_7, var_0)))), var_11));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = ((max(var_7, (arr_1 [i_0]))));
        arr_2 [i_0] = ((((((~var_1) ? 32120 : (arr_1 [i_0])))) ? (((-1533100592 ? 59 : var_7))) : (((arr_1 [i_0]) ? var_4 : (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 ^= ((arr_5 [i_1]) ? ((var_3 | (arr_0 [i_1] [i_1]))) : (((4294967280 ? (arr_5 [i_1]) : var_5))));
        arr_6 [i_1] = ((var_0 == (!-1555436761)));
        var_16 *= var_3;
    }
    for (int i_2 = 4; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (arr_0 [i_2] [i_2]);

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    {
                        var_17 = var_4;
                        var_18 = (min((((arr_13 [i_5] [i_5] [i_4 + 2] [i_2]) ? var_5 : (arr_10 [i_5] [i_4 + 2] [i_4]))), (((arr_10 [i_4 + 2] [i_4 + 2] [i_3]) ? (arr_11 [i_5 + 3] [i_4 + 2] [i_3]) : var_0))));
                    }
                }
            }
            arr_16 [i_3] = (min((arr_15 [i_2 - 1] [i_3] [i_2] [i_3] [i_2]), var_4));
        }
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            arr_20 [i_6] [i_6] = (-363298338 ? 17211 : ((754994028 ? -46 : 0)));
            var_19 = var_3;
            arr_21 [i_6] = (min(((((arr_7 [i_6] [i_2]) ? ((min(1, (arr_7 [i_6 - 1] [i_2])))) : (min(var_5, var_7))))), (arr_10 [i_2] [i_2] [i_2 - 2])));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            var_20 = (((arr_0 [i_7] [i_2]) ? (((var_4 ? (arr_10 [i_2 + 1] [i_2] [i_2]) : (arr_10 [i_2 - 4] [i_2] [i_2])))) : (max(((var_3 ? 10434305684147668984 : (arr_19 [i_7] [i_2] [i_2]))), ((max(var_3, var_9)))))));
            var_21 = (min(var_21, ((((min(1, 1)) ? (arr_12 [i_7] [i_2] [i_2 - 3]) : var_7)))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_22 ^= ((-(arr_19 [i_2 + 2] [i_2] [i_2])));
            var_23 = ((var_8 ? (arr_11 [i_2] [i_2 - 3] [i_2 - 4]) : -3539973269));
            var_24 ^= arr_28 [i_2];
            var_25 = (((arr_15 [i_8] [i_8] [i_8] [i_8] [i_2]) + (((arr_0 [i_8] [i_8]) ? (arr_14 [i_2] [i_2] [i_2] [i_2]) : var_9))));
            arr_29 [i_8] [i_8] = ((1 ? (arr_19 [i_2 - 1] [i_2] [i_2 + 2]) : (var_3 == 1)));
        }
        arr_30 [i_2] |= ((49937 ? ((2302421446 ? 0 : 1)) : ((((arr_18 [i_2 - 3] [i_2] [i_2]) ? (arr_18 [i_2 + 2] [i_2] [i_2]) : var_5)))));
    }
    var_26 = var_5;
    var_27 = (min(var_3, (((((152579442 ? 1 : 249))) ? var_11 : ((min(1, var_1)))))));
    #pragma endscop
}
