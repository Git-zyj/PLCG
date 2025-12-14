/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = -0;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = (max(var_6, ((~((12607104160460608821 ? (arr_1 [i_0] [i_0]) : 5839639913248942795))))));
        var_22 = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_5));
        var_23 = ((60463422 & ((~((min(1, 223)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_24 = var_4;
        var_25 = var_16;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_17 [i_2] [i_5] [i_2] [i_5] [i_2] [i_2] = 60463432;
                        arr_18 [i_2] [i_2] [i_2] [i_5] = var_1;
                        var_26 &= ((-(((arr_14 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) ? (arr_13 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2]) : (arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])))));
                        var_27 = (min((arr_5 [i_2]), (((arr_8 [i_3 - 2] [i_4 + 2]) ? 2126 : (arr_8 [i_3 - 2] [i_4 + 2])))));
                    }
                }
            }
        }
        arr_19 [i_2] [i_2] = ((-(arr_12 [i_2])));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_28 = (((((((arr_4 [i_2] [i_2]) ? var_1 : 60463414)))) ? var_8 : ((((arr_13 [i_2] [i_2] [i_2] [i_2]) ? (arr_8 [i_6 + 2] [i_6 + 2]) : (((arr_4 [i_2] [i_2]) % (arr_26 [i_8]))))))));
                        arr_28 [i_7] [i_7] [i_7] [i_7] = ((((!(arr_14 [i_2] [i_2] [i_2] [i_2]))) ? ((((((max((arr_15 [i_2] [i_2] [i_2] [i_2]), -60463433))) == var_18)))) : var_16));
                        var_29 = (min(var_29, (arr_1 [i_2] [i_2])));
                        var_30 = ((((((arr_0 [i_6 - 2] [i_6 - 2]) & (arr_0 [i_6 - 1] [i_6 - 1])))) | (46 - var_16)));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_32 [i_9] [0] &= ((2132 ? (((min(var_3, 60463433)))) : (max(210, (arr_6 [i_9])))));
        var_31 *= max(((min((arr_5 [i_9]), (arr_5 [i_9])))), 12607104160460608820);
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    var_32 -= (!-2131517411);
                    var_33 = ((~(arr_6 [i_10])));

                    for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
                    {
                        arr_42 [i_10] = 8191;
                        var_34 = (~28263);
                    }
                    for (int i_14 = 0; i_14 < 0;i_14 += 1) /* same iter space */
                    {
                        arr_46 [i_10] [i_10] [i_10] [i_10] |= var_13;
                        var_35 &= ((max(65535, -1822049029)));
                        arr_47 [i_10] [i_10] [i_10] [i_10] = (((max(((524287 ? var_15 : 5839639913248942795)), var_9)) % -1042444031053779849));
                    }
                    for (int i_15 = 0; i_15 < 0;i_15 += 1) /* same iter space */
                    {
                        var_36 = var_18;
                        var_37 = arr_41 [i_12] [i_12];
                    }
                    var_38 = (min(-5839639913248942790, ((((max((arr_15 [i_10] [i_10] [i_10] [i_10]), (arr_20 [i_10] [i_10])))) ? (((max(221, var_2)))) : var_16))));
                }
            }
        }
    }
    #pragma endscop
}
