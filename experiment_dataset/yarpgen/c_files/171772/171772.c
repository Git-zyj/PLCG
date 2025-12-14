/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 ? var_1 : var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);
        arr_2 [i_0] = 29729;
        arr_3 [i_0] = ((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]));
        var_13 = (((arr_1 [i_0]) > (arr_1 [i_0])));
        var_14 = ((((35801 ? (arr_0 [i_0]) : (arr_0 [i_0]))) + var_7));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = (((((arr_6 [i_1] [i_1]) ? 29736 : (29729 >= var_0))) ^ (arr_6 [i_1 + 2] [1])));
        var_15 = (29729 * 35807);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_16 = (arr_4 [i_2] [i_1 + 1]);
                                var_17 = var_2;
                                var_18 = 0;
                                var_19 = arr_16 [i_1] [i_1] [i_1] [i_1 - 3] [i_1 - 3];
                            }
                        }
                    }
                    var_20 = var_9;
                }
            }
        }
        var_21 = var_10;
        var_22 ^= ((((var_6 || (arr_11 [i_1] [i_1 + 3] [i_1 + 3] [i_1 - 3]))) || (arr_9 [i_1 + 2] [i_1 - 1])));
    }
    for (int i_6 = 4; i_6 < 16;i_6 += 1)
    {
        var_23 = 65535;
        var_24 = 65535;
        arr_20 [i_6] [i_6] = (((arr_18 [i_6 + 1] [i_6 + 1]) ? (arr_18 [i_6 - 3] [i_6 + 1]) : (arr_18 [i_6 - 3] [i_6 - 1])));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    {
                        var_25 = (max(var_25, ((((arr_26 [i_6] [i_6] [i_7] [i_6]) + (((max((arr_18 [i_6] [i_7]), var_0)))))))));
                        arr_28 [i_9] [i_7] [i_7] [i_9 + 3] = (arr_24 [0] [i_8] [i_8] [i_6]);
                        arr_29 [i_9] [i_9] = (((arr_23 [i_9 + 3] [i_9 + 3] [13] [i_9]) - (arr_23 [i_9 + 3] [7] [i_8] [i_7])));
                    }
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_26 = var_6;
        var_27 = arr_9 [i_10] [i_10];
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_28 ^= (((((((-5453288441143718373 - (arr_32 [i_11])))) && var_10)) ? 13199745464385772283 : (((((max(65517, var_8)))) * ((109 ? (arr_32 [i_11]) : (arr_33 [12])))))));
        var_29 |= (((((0 || -5453288441143718374) ? (((arr_32 [i_11]) ? 4089073130 : 9843846832359177505)) : var_10)) == (((-(arr_32 [i_11]))))));
    }
    for (int i_12 = 1; i_12 < 18;i_12 += 1)
    {
        var_30 = ((~(((var_8 % 32755) ? var_6 : (arr_34 [i_12])))));
        var_31 = arr_32 [i_12];
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        var_32 = (21 / -198395460);
        arr_40 [i_13] = ((((max((arr_39 [i_13]), (arr_39 [i_13])))) ? var_8 : ((((arr_39 [i_13]) ? (arr_39 [i_13]) : (arr_39 [i_13]))))));
        arr_41 [i_13] = (arr_38 [i_13]);
    }
    var_33 = (max(var_33, var_4));
    #pragma endscop
}
