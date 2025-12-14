/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 -= var_9;
        var_14 = (arr_0 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            {
                var_15 = (max(var_15, ((((!var_8) ? (((((var_5 ? (arr_3 [i_1] [i_1]) : 143))) ? (var_2 && 1) : ((var_0 ? var_11 : -1111328527)))) : (574846338 || var_7))))));
                arr_6 [i_1] &= (-var_2 * 0);
                arr_7 [1] [i_1] [i_2] = ((((((((arr_3 [i_1] [i_1]) | -32)) / 19851))) ? -var_8 : ((+(((arr_4 [i_1]) * var_2))))));
            }
        }
    }
    var_16 = (max(var_2, ((10 ? var_2 : var_6))));
    var_17 = ((var_8 ? (((((max(var_7, var_3))) ? 1 : (2493391465 < var_6)))) : (max(var_0, (max(3744651347, var_0))))));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_18 [i_3 - 3] [17] [i_5] [17] = ((min(((var_9 < (arr_16 [i_3] [i_4] [i_5] [i_5]))), var_6)));
                            var_18 = (((((arr_2 [i_3 - 3]) - (arr_17 [1] [1] [i_3] [i_3 + 3] [i_3 - 2] [i_4 + 2]))) << ((((var_7 ? -var_6 : 4890577148559379986)) + 31))));
                        }
                    }
                }

                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    arr_22 [i_3] [i_3] [i_7 - 1] [i_7 + 2] |= ((939524096 ? var_6 : ((-(arr_15 [i_3] [i_4] [i_7])))));
                    var_19 -= (((max(var_9, (arr_8 [i_4])))) ? ((max((arr_8 [i_3 + 1]), (arr_8 [i_4 + 2])))) : ((var_0 ? 2096128 : var_8)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_20 = (((((-(arr_20 [i_8]))))) > ((((((arr_9 [i_4] [12]) ? 9278842617845720774 : var_10))) ? 1 : ((13889 ? var_2 : 14584841670356828850)))));
                                arr_27 [i_3] [i_3 + 3] [i_4] [i_7] [i_8] [i_8] [i_4] = ((((-(arr_9 [i_3 - 1] [i_4 + 3]))) >> (((arr_17 [i_3] [i_4] [i_7] [i_8] [13] [i_9]) + 2130641878))));
                                arr_28 [i_4] [19] [i_8] [19] = (((max(252, 544585493))));
                                var_21 = -2765215057321810941;
                            }
                        }
                    }
                }
                arr_29 [i_4] = (max((min((max(14712817612832294226, (arr_24 [i_3 - 3] [i_3 - 3] [20]))), (var_9 > 1939278658918784294))), (((-5044299165254318953 ? (max((arr_5 [i_3] [i_4]), 1)) : var_11)))));
            }
        }
    }
    #pragma endscop
}
