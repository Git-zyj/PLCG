/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_11 = ((0 && ((-33955555 || (arr_0 [i_0] [6])))));
        var_12 = (max(var_12, (((var_2 % ((var_7 ? (arr_0 [i_0] [i_0 - 2]) : -33955555)))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = (11146241500820012795 || 33955555);
            arr_5 [i_0] [i_0 + 3] [6] = (((-33955555 && var_6) ? (arr_1 [i_0 + 3]) : (~var_5)));
        }
        var_13 = ((-16384 < (arr_3 [i_0 - 1] [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 8;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3 + 2] [i_4] [i_2] = var_4;

                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_14 = (~1);
                        arr_19 [i_4] = (arr_11 [i_4] [i_5]);
                        var_15 = ((~(!1203350147)));
                        var_16 = (~33955555);
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_17 = (max(var_17, (((-(arr_13 [i_6]))))));
                        var_18 = ((((arr_17 [i_2 - 1]) ? 0 : 524284)));
                    }
                    arr_24 [i_4] = ((-1203350147 > (((arr_21 [i_2] [i_2] [1] [4] [i_2 + 2] [i_2]) ? (arr_13 [i_4]) : var_8))));
                    arr_25 [i_2] [i_2 - 1] [i_4] [6] = ((var_5 ? (arr_1 [i_2 + 1]) : (((33955538 ? (arr_13 [i_4]) : 33955555)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                {
                    arr_33 [i_2 - 1] [i_2] [i_2 + 2] [i_2] &= (((arr_3 [i_2 - 1] [i_8 + 1]) * (((arr_15 [i_2] [i_7] [i_7] [i_2]) ? var_7 : 33955555))));
                    arr_34 [i_2 + 2] [i_7] [i_8] [i_2 + 2] = (((arr_20 [1] [i_8] [i_8 + 1] [i_8 + 1]) >> ((((-(arr_29 [i_7]))) - 8483613838450061758))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            {
                var_19 = (min(var_19, ((min(1, (((~var_2) ? 1 : 0)))))));
                var_20 = (max(((((max(-682369448, 734790636))) ? (arr_38 [i_9] [i_10]) : (1558736564 & 6134))), (arr_38 [i_10] [i_9])));
            }
        }
    }
    var_21 = var_3;
    var_22 |= ((var_5 & ((((min(var_4, 7837306149308758346))) ? (min(7513363956995956223, 11)) : ((min(1747772299, var_2)))))));
    #pragma endscop
}
