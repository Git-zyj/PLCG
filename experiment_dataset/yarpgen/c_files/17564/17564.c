/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_11 = (min(((((((-(arr_2 [i_0]))) + 2147483647)) << ((((var_0 ? 65520 : var_9)) - 65520)))), (((0 <= ((var_6 ? (arr_3 [i_0] [i_0]) : 309196038634199682)))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_8 [10] [i_1] = var_10;

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_13 [i_1] [1] = 666575287;
                var_12 = (max(var_12, (((~(arr_3 [i_1] [i_1 - 1]))))));
            }
            arr_14 [i_0 + 2] [i_1] [i_0] = (((arr_12 [i_0] [i_1]) ? var_3 : 42107));
            arr_15 [1] &= (((((arr_3 [i_0 + 1] [i_0]) + 9223372036854775807)) << (-5856846725963254148 + 5856846725963254148)));
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_22 [i_0] [i_3 - 2] [i_3] = ((((max(-239, 52171))) ? var_3 : ((((!(!var_2)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_29 [i_3] [i_6] = ((23407 ? ((min((arr_16 [i_0] [i_3]), (min(var_1, (arr_23 [i_0] [i_0] [i_6])))))) : (((arr_24 [i_0 - 1] [i_3 + 1]) ? (arr_24 [i_0 + 3] [i_3 + 1]) : var_8))));
                                var_13 = (~(((arr_11 [i_3] [i_3] [i_0]) % (arr_23 [i_5 - 1] [i_6] [i_6 + 1]))));
                                var_14 = (max((((arr_7 [i_0] [i_0]) ? 14 : 5749592655917804082)), ((((arr_27 [i_3] [i_6 + 1] [i_6 - 1] [2] [i_6] [i_6 - 1]) ? (min(255, 1201323861007267050)) : var_4)))));
                                var_15 = ((((min(((max((arr_3 [i_4] [i_3]), var_3))), ((-5171975741501734580 ? var_4 : var_5))))) ? (min(var_4, var_3)) : (arr_19 [i_5 + 1] [i_3] [i_3] [i_5])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_35 [i_3] [i_3] [i_3] = ((!(1099511627775 % -var_5)));
                                arr_36 [i_8] [14] [i_3] [i_3] [i_3 - 3] [i_3 - 3] [i_0] = (((max((arr_4 [i_0 - 2] [i_0 - 1]), (arr_21 [i_0 + 3] [i_3 - 1] [i_3]))) % (((((23429 ? var_3 : var_8))) ? ((((arr_11 [i_3] [i_7] [i_3]) ? (arr_16 [i_3 - 3] [i_3 - 3]) : 1))) : (max(42104, 2251799813685247))))));
                                arr_37 [i_0] [i_0] [i_4] [i_0] [i_3] [i_8] = (arr_19 [i_0] [i_3 - 3] [i_3] [i_3 - 3]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    {
                        var_16 = (max(var_3, ((-var_0 ? var_7 : (((min((arr_45 [i_10] [i_10] [i_12]), (arr_11 [i_10] [i_10] [i_10])))))))));
                        var_17 = (((min(var_7, (arr_4 [i_10 - 1] [i_10 - 1]))) % 255));
                        var_18 = (((((((arr_9 [i_10 - 1] [i_10 - 1] [i_10 - 1]) || 22188)))) ^ (min(0, -237109776))));

                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_19 = (min(var_19, ((max(((((4 / var_4) != var_0))), (arr_17 [i_11] [i_11] [i_11]))))));
                            var_20 = (((!8002) ? ((12695 ? 1024 : 1)) : 30099));
                            arr_53 [i_10] [i_10] [i_11] [i_10] = ((((((!0) ? (arr_10 [i_10 - 1] [i_10 - 1]) : (min(var_2, var_6))))) ? var_1 : var_6));
                            var_21 = (max(var_21, -4294967285));
                            var_22 ^= ((((((max(1, (arr_6 [i_9] [i_10 - 1])))))) ? ((~(arr_16 [i_9] [i_10 - 1]))) : ((-((min(var_9, var_2)))))));
                        }
                        var_23 ^= (max((((!(arr_44 [i_9] [i_11])))), var_9));
                    }
                }
            }
        }
        var_24 = (max((arr_28 [i_9]), (((var_6 % var_5) + var_7))));
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        arr_56 [i_14] = min((((((max((arr_23 [i_14] [8] [i_14]), 1))) >> 1))), (max(var_1, -1)));
        arr_57 [i_14] = (((((arr_7 [i_14] [i_14]) && ((max(-1488983250, var_10))))) ? (max((arr_38 [i_14]), var_7)) : ((((724 && ((min(var_7, (arr_23 [i_14] [i_14] [i_14]))))))))));
        var_25 ^= var_4;
    }
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                {
                    var_26 = (min(var_26, (((((arr_63 [i_15] [i_15] [i_17] [i_15]) ? (min(var_8, 1)) : ((((arr_59 [i_16] [i_15]) ? 1 : var_1))))) - ((((arr_64 [i_15] [i_16]) + ((var_10 ? 166 : 506344735)))))))));
                    var_27 = (max(var_27, (arr_63 [i_17] [i_17] [i_17] [i_17])));
                }
            }
        }
        var_28 -= 0;
    }
    #pragma endscop
}
