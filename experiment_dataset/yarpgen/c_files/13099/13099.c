/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (arr_1 [i_0 - 1] [i_0]);

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_2] = ((~((224 * (((11340193339101403003 < (arr_9 [i_0] [i_0]))))))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        var_21 += 45101;
                        arr_13 [i_0 - 2] [i_1] [i_2] [i_0] [i_2] = -22657;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] = (((127 ? 2009546505 : (arr_8 [i_0] [i_0] [i_0] [i_0]))));
                                var_22 -= 75;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    var_23 += (!16383);
                    var_24 = (min(var_24, (((arr_21 [i_0 - 3] [i_0 - 3] [i_6 + 3]) == -32))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                var_25 ^= ((((20409 ? 25 : -17156))) > ((-25 ? (((arr_6 [i_8] [i_8] [i_8]) - 16)) : (arr_1 [i_7] [i_8]))));
                arr_27 [i_7] [i_7] [i_8] = (((~(arr_20 [i_7] [i_8]))));
                arr_28 [i_7] [i_7] [i_7] = ((((!(-40 && 18446744073709551606))) || ((20434 && (arr_12 [1] [1] [i_7] [19] [i_8] [i_8])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                var_26 += (1 - 45101);
                                arr_40 [i_9] [i_9] [i_11] [i_13] = 17;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            {
                                var_27 -= (arr_41 [6] [6] [6] [6]);
                                var_28 = (min(var_28, (((239 && ((!(((arr_7 [20]) || (arr_8 [i_9] [i_16] [i_14] [i_15]))))))))));
                                arr_47 [i_9] [i_9] [i_9] [i_9] [i_9] = ((((((arr_45 [i_9] [i_9] [13] [i_15] [i_15]) != -15360))) ^ ((25 ^ (arr_43 [i_9] [i_10] [18] [i_15])))));
                            }
                        }
                    }
                }
                arr_48 [i_9] = (((arr_37 [10] [i_9] [i_10] [i_10] [i_10]) ? -1 : (((arr_46 [i_10] [i_10] [i_9] [i_9] [i_9]) - (arr_46 [i_9] [i_10] [i_9] [i_10] [i_10])))));
                var_29 = ((~(12041970775292368244 != -120)));
                arr_49 [i_9] [i_10] = (arr_5 [i_9]);
            }
        }
    }
    #pragma endscop
}
