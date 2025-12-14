/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            var_16 ^= var_3;
            arr_5 [i_1] = ((18446744073709551614 + (6 - 126)));
            var_17 = (arr_4 [i_0] [i_1 - 3]);
        }
        var_18 ^= ((((max((124 + 0), 255))) ? (min((((arr_1 [i_0]) - var_10)), ((min(var_10, var_4))))) : (arr_4 [i_0] [i_0])));
        var_19 = var_10;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_11 [1] [i_2] [i_3] [i_0] |= 6;
                    var_20 = (min(var_20, 72057594037927935));
                }
            }
        }
    }
    var_21 = var_3;

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [0] [i_6] [0] [i_7] [i_4] = (arr_25 [i_6]);
                                arr_28 [i_4] [1] [i_7] [i_8] = ((((((arr_19 [i_4] [i_4] [i_4]) ? (arr_17 [i_4]) : (arr_18 [0] [0] [i_4])))) ? (arr_18 [i_4] [i_5] [i_4]) : ((((arr_17 [i_4]) % (arr_17 [i_4]))))));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_22 = ((var_3 ? (((-731742733387022693 ? (!741975035228319432) : 32767))) : (min(((((arr_22 [i_4] [i_4] [i_4] [11]) | 249))), ((var_11 ? -4 : 72057594037927930))))));
                            var_23 = (((35 * 13942482781076159918) ? 125 : 20831));
                        }
                        arr_33 [i_4] [i_4] [i_4] [10] = ((((min(9223372036854775807, -27))) ? 125 : 13435978028627618756));
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {

                        for (int i_12 = 1; i_12 < 8;i_12 += 1)
                        {
                            arr_39 [i_4] [i_5] [i_6] [i_4] [i_12] = (arr_12 [i_4]);
                            arr_40 [i_4] [i_6] [0] [i_4] [7] [i_6] [i_4] = ((((((arr_24 [i_4] [6] [i_6] [i_11] [i_11] [i_6]) ? (arr_37 [i_4] [i_5] [i_6]) : (min((arr_23 [i_4] [i_5] [i_5] [3]), -11))))) ? ((var_4 ? var_11 : 0)) : var_12));
                            arr_41 [i_4] [i_4] = (max((min(-58166, -8554)), 1));
                            var_24 = var_2;
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            var_25 ^= var_10;
                            arr_44 [i_4] [i_5] [i_6] [3] = var_1;
                        }
                        var_26 = (min(var_26, (arr_15 [i_11])));
                        arr_45 [i_4] = ((72057594037927930 ? 30 : 255));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_27 = (max(((max((arr_22 [i_5] [i_6] [i_4] [i_15]), 78))), (((!-1071220366) / 1))));
                                var_28 = ((120 ? (((min(21171, (arr_42 [i_4] [i_5] [i_6] [i_6] [i_4]))))) : (((((arr_23 [i_4] [i_6] [i_14] [i_6]) ? 72057594037927935 : var_6)) >> ((((arr_12 [i_4]) != 64006)))))));
                                var_29 = ((((var_14 ? (max((arr_25 [4]), -27)) : -26)) >> (72057594037927935 - 72057594037927929)));
                            }
                        }
                    }
                    var_30 ^= (max(65533, (1 <= 248)));
                }
            }
        }
        arr_52 [i_4] = (((-22 < var_12) ? (((((var_1 ? 48 : var_1))))) : 2598624610));
    }
    #pragma endscop
}
