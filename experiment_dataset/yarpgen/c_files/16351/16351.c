/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((9223372036854775807 & 1) - (((((8661593324707411088 ? var_4 : var_13))) ? var_4 : ((var_14 ? var_12 : var_5))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = ((((var_14 >= (arr_3 [i_1 - 2] [10] [i_2]))) ? -180410125 : (((arr_3 [i_0 - 1] [i_0 - 1] [i_2]) % var_1))));
                    arr_7 [i_0] [i_0] [i_0] [6] |= var_6;
                }
            }
        }
        var_17 -= (~var_9);
        arr_8 [i_0 - 1] [i_0 - 1] = var_1;
        var_18 = (((((arr_1 [i_0]) >> (var_1 - 3828297929884948882))) == (((4783571801823946356 < (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
        arr_9 [i_0] [i_0] = 568583396866513859;
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_13 [i_3] = (arr_10 [1] [i_3]);
        arr_14 [i_3] [i_3] = (957994549 <= 1);
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_18 [i_4] = ((((min((arr_3 [1] [1] [10]), ((1 ? 1 : 1))))) && 180410125));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 13;i_7 += 1)
                {
                    {
                        var_19 = 1;
                        arr_29 [13] [1] [i_6] [7] [i_7 - 2] |= 1;
                        var_20 ^= (((~(max(180410128, 4258026347333674204)))));
                        arr_30 [i_5 - 1] [i_6] [i_5 - 1] = (arr_19 [i_7] [i_5] [i_5]);
                    }
                }
            }
        }
        arr_31 [i_4] [11] = ((~(min(((var_4 ? (arr_22 [i_4] [i_4] [i_4] [i_4]) : 1)), (arr_22 [i_4] [6] [1] [i_4])))));
        var_21 = (~(~var_1));
    }
    for (int i_8 = 2; i_8 < 23;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    arr_39 [i_10] [i_9] [i_10] = (arr_35 [i_8 + 1] [i_8 + 2] [i_8 + 1]);
                    arr_40 [i_8] [i_9] [i_8] &= (arr_36 [i_8] [i_8] [i_8]);
                    var_22 = (max((1 >> 1), ((var_1 * (arr_35 [i_8] [i_9] [i_10])))));
                    arr_41 [i_8] [i_10] [22] = (-8661593324707411088 < 1);
                }
            }
        }
        var_23 += (((arr_36 [i_8 + 2] [i_8 - 2] [i_8 - 2]) ? (min((~-168989123), ((var_13 >> (((arr_38 [15] [15] [15] [i_8]) + 4411077171739300863)))))) : (((-(((arr_32 [1] [12]) / 1819886591)))))));
    }
    var_24 = (0 >= 1);
    var_25 ^= (min(((var_1 != (-957994528 > -33554432))), (1 != -5099542744208597668)));
    #pragma endscop
}
