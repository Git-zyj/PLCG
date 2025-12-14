/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(var_9, ((3508748332 ? var_19 : var_4)))) != ((min(var_16, var_4)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = (arr_1 [i_0]);
        arr_2 [i_0] = (min(((min(var_18, (arr_1 [i_0])))), -68719476735));
        var_22 -= ((max((arr_1 [i_0]), (arr_0 [i_0] [i_0]))) * (((arr_0 [i_0] [i_0]) * (arr_0 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 16;i_4 += 1)
                {
                    {
                        var_23 = (min(var_23, (arr_1 [4])));
                        var_24 = (min((min((arr_9 [i_3 - 3]), (((arr_12 [i_1]) * -68719476720)))), (arr_8 [1] [i_3] [i_3 - 1])));
                        arr_13 [i_1] [i_3] [i_3] [i_1] = (((arr_8 [i_3 - 1] [i_3] [i_3 + 1]) ? (((((arr_7 [i_3 - 1] [i_3 - 3] [i_3 - 3] [i_4 - 4]) || (arr_11 [i_3 - 4] [i_3 - 2] [i_3 - 1]))))) : (((arr_11 [i_3 + 1] [i_3 - 2] [i_3 - 1]) ? (arr_11 [i_3 + 1] [i_3 - 3] [i_3 - 4]) : (arr_7 [i_3 - 3] [i_3 - 2] [i_3 - 3] [i_4 + 1])))));
                        var_25 ^= (1 > (((arr_8 [i_1] [i_2] [i_3 - 2]) * (arr_8 [i_1] [i_2] [i_3 - 2]))));
                    }
                }
            }
        }
        var_26 = (max(var_26, ((((max(68719476735, 23332)) & (arr_10 [12] [i_1] [12]))))));
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_26 [i_5] [i_5] = (max((((!(arr_14 [i_5])))), (((arr_14 [i_5]) ? (arr_14 [i_5]) : (arr_14 [i_5])))));
                        arr_27 [i_5] [i_5] [9] = 1;
                        arr_28 [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [1] = ((((1 ? 21079 : 18446744073709551615)) >> (var_5 - 545483987)));
                        var_27 = (max(var_27, (arr_18 [i_5] [i_5] [i_5])));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_28 = (max(var_28, (arr_24 [i_5] [i_6] [i_5] [i_9] [i_10] [i_10])));
                                arr_36 [i_5] [i_6] = ((var_16 ? ((((arr_18 [i_9] [i_7 - 1] [i_6]) * ((var_14 ? (arr_23 [i_5]) : var_6))))) : (((arr_18 [i_5] [i_5 - 1] [i_5 - 2]) ? (((arr_21 [i_5] [i_5]) ? var_16 : var_11)) : var_12))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = 1;
    var_30 = (((~(~3395143832))));
    #pragma endscop
}
