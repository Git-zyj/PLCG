/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(var_2 > var_8)));
    var_13 = 2193754058;
    var_14 |= (((3842 ? var_9 : var_9)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_1 [i_1]);
                var_15 = (((((0 ? (arr_4 [i_0 - 1] [i_0] [i_0 + 1]) : -570490466))) ? var_7 : ((((((arr_2 [i_0]) ? var_5 : 124)) / (((max((arr_3 [i_1]), -45)))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((((-(arr_8 [i_2]))) / 268431360));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_16 = ((~(((!var_7) ? -var_8 : (((((arr_10 [i_2]) == 1))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] &= var_7;
                                var_17 = min(0, (((var_1 - (arr_15 [i_2] [i_2] [i_2])))));
                            }
                        }
                    }
                }
            }
        }
        var_18 = (!((max((arr_11 [i_2]), (arr_14 [i_2] [i_2])))));
        var_19 ^= (0 <= 1);
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 20;i_9 += 1)
            {
                {
                    var_20 ^= (124 < -62);
                    arr_31 [i_8] [i_8] [i_9] = var_2;
                    var_21 = ((!((min((((var_9 ? (arr_24 [i_8]) : (arr_24 [0])))), ((-45 ? -8439505974178775899 : (arr_29 [i_7] [i_8] [i_9]))))))));
                    arr_32 [i_7] [i_8] [i_8 - 1] [i_9] = ((var_4 ? (max((arr_12 [i_7] [i_8]), var_7)) : (((-(arr_12 [i_7] [i_9]))))));
                    var_22 -= (((((((arr_25 [0] [i_8 + 2] [1]) || -125)))) < ((~(arr_25 [i_9] [i_9] [12])))));
                }
            }
        }
        arr_33 [i_7] [i_7] = arr_16 [i_7] [i_7] [i_7] [14] [i_7] [i_7];
        var_23 -= var_1;
        arr_34 [i_7] = var_10;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
    {
        arr_38 [i_10] = (~(arr_23 [i_10] [i_10]));

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            arr_41 [i_11] [i_11] = (((arr_8 [i_10]) ? ((-24722 ? 0 : var_9)) : 11330));
            arr_42 [i_11] = ((var_6 ? (arr_19 [i_10] [i_11] [i_11] [i_10] [i_10] [i_10] [i_11]) : -16165));
        }
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    var_24 ^= (arr_23 [i_12 - 1] [i_10]);
                    arr_49 [i_10] [i_12] [i_13] = ((24739 ? (arr_47 [i_12 - 2] [12] [i_12 - 1] [i_12 + 1]) : (arr_11 [i_12 - 3])));
                    arr_50 [i_13] [i_12 - 2] [i_10] = (!(~1440946571));
                }
            }
        }
    }
    #pragma endscop
}
