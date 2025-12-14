/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= -6592054518760225292;
    var_12 = (min((((max(61, 6592054518760225292)) % var_8)), ((var_6 ? ((var_0 ? 6592054518760225290 : var_9)) : var_0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_13 = 249;
                        arr_11 [i_1] [i_2] [i_1] = 6592054518760225286;

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_14 = ((-((-(arr_14 [i_0] [i_1] [i_1] [i_3])))));
                            var_15 = ((247 && (arr_8 [i_0] [i_1] [i_3] [i_4])));
                        }
                    }
                }
            }
        }
        arr_16 [9] = 246;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_16 += (-(arr_18 [i_5]));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_24 [i_6] [i_5] [i_5] = (arr_19 [i_6]);
            /* LoopNest 2 */
            for (int i_7 = 4; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_17 = (min(var_17, 238));
                        arr_31 [i_5] [i_6] = ((0 || (arr_26 [i_7 - 3] [i_7 + 1] [i_7 - 4] [i_7 - 3])));
                        var_18 = (((arr_27 [i_5] [15] [i_5] [1]) ? var_0 : (((arr_27 [i_5] [i_7] [i_5] [i_7]) * (arr_30 [2])))));
                        arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = 108;
                    }
                }
            }
            arr_33 [i_5] [11] = (0 ? 0 : -6592054518760225293);
            var_19 ^= ((((((249332256 == (arr_19 [i_5]))))) - (((arr_26 [i_6] [i_6] [i_5] [i_5]) << (6592054518760225291 - 6592054518760225269)))));
        }
        arr_34 [i_5] = (24723369 || 249);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_20 = (min(var_20, 18446744073709551615));
        var_21 = (((arr_19 [i_9]) <= (arr_29 [i_9] [i_9])));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 21;i_12 += 1)
            {
                {
                    var_22 = 40846;
                    arr_45 [i_11] [i_11] [i_12] [i_12] = ((-(arr_40 [i_12 - 1])));
                    var_23 = ((((-(arr_39 [i_11])))) ? 18446744073709551615 : 6592054518760225286);
                    arr_46 [5] [i_11] = ((~108) <= ((var_2 ? 3556679506578501430 : var_4)));
                }
            }
        }
        var_24 = (((arr_40 [i_10]) != (((var_9 - (arr_43 [i_10] [i_10] [i_10] [i_10]))))));
        var_25 = ((((arr_44 [i_10] [6] [i_10] [10]) + (arr_42 [i_10] [i_10]))));
    }
    #pragma endscop
}
