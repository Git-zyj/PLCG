/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((min(var_9, var_6)) ? var_7 : ((1593519160 ? 0 : -63378390))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (max(15, var_1));
        arr_3 [i_0] [7] = ((((~(((arr_1 [i_0]) | (arr_1 [i_0])))))) ^ (((!15156) ? (max(2535336499, (arr_0 [i_0]))) : (arr_1 [i_0]))));
        var_15 *= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_16 = (arr_2 [i_1] [i_1]);
        var_17 = (max(var_17, (arr_6 [i_1] [i_1])));
        var_18 = arr_7 [i_1] [i_1];

        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            arr_12 [i_1] = ((~(max((((103 >> (56 - 36)))), ((1 ? (arr_0 [5]) : (arr_10 [i_1] [i_1] [i_2])))))));
            var_19 += (((((((min(var_4, 12518688486888726864))) ? (((arr_10 [6] [i_2 - 2] [i_2]) ? 995 : (arr_8 [i_1] [4]))) : (arr_7 [i_1] [i_2])))) ? (!var_12) : (((~(arr_6 [i_1] [i_1]))))));
            arr_13 [i_1] = var_10;
        }
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            arr_16 [i_1] [i_1] [i_3] = 65526;
            arr_17 [i_1] [i_1] = (((((21 ? (max(18446744073709551615, 22)) : ((var_10 ? 159 : var_2))))) ? ((min((((arr_14 [i_3] [i_1]) % 96)), (((arr_11 [i_1] [i_1] [i_3]) & (arr_5 [i_3])))))) : (arr_0 [i_1])));
            arr_18 [8] |= ((((!((((arr_1 [i_1]) & (arr_0 [i_1])))))) ? (((min(63378389, var_4)) + (arr_15 [2] [3]))) : (!6)));
            arr_19 [i_1] [i_1] [i_1] = (((arr_9 [i_3 - 3] [i_3 - 3]) ? (max(-24876, (arr_9 [i_3 - 3] [i_3 - 3]))) : (arr_9 [i_3 - 1] [7])));
            arr_20 [i_1] [i_3 - 1] = (((arr_9 [i_1] [i_1]) ? (((arr_11 [i_1] [i_1] [i_3 - 2]) ? (((65530 ? var_5 : -63378369))) : (arr_11 [i_1] [i_1] [i_3 + 1]))) : (arr_5 [3])));
        }
        var_20 = (max(var_20, ((max((arr_4 [i_1]), (arr_4 [i_1]))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_23 [i_4] = (arr_2 [i_4] [i_4]);
        arr_24 [i_4] = var_1;
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_33 [i_5] [2] [i_5] = (var_1 ? -2064760555 : (((arr_30 [i_4] [0] [i_5] [i_6]) ? 11679983005859877209 : 2428098666926183161)));
                    var_21 = 2792908511;
                    var_22 = (((~3072) ? ((8 ? var_4 : (arr_32 [i_5]))) : (((arr_32 [i_5]) ? var_11 : 1))));
                    arr_34 [i_5] [i_6] [i_6] = var_3;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    arr_41 [i_4] [4] [4] = var_11;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_47 [i_9] [i_9] [i_4] [i_10] = ((!(((var_7 ? (arr_14 [4] [4]) : var_7)))));
                                var_23 = (min(var_23, (arr_39 [i_4] [9] [i_7 - 1] [i_4])));
                                arr_48 [i_10] = var_7;
                                arr_49 [i_8] [i_8] [2] [i_8] [i_4] &= ((((((arr_25 [i_8] [i_8] [i_8]) ^ 18446744073709551607))) ? (~69269232549888) : (((~(arr_15 [i_7] [i_7]))))));
                                arr_50 [i_4] [i_7 + 1] [i_8] [i_10] [i_10] [i_10] = 3261792495;
                            }
                        }
                    }
                    arr_51 [i_4] [i_4] [i_4] = ((var_5 ? (arr_7 [2] [i_7]) : ((var_12 ? (arr_26 [i_4] [i_7]) : (arr_45 [1] [3] [3] [i_7 + 1] [3])))));
                }
            }
        }
    }
    var_24 = (min(var_24, ((max((((((var_6 ? var_12 : 3))) ? (!287104476244869120) : (~var_0))), ((min(var_10, 24876))))))));
    var_25 = var_8;
    #pragma endscop
}
