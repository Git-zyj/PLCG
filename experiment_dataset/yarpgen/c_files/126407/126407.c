/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_10 ? (((-var_1 <= (~-26525)))) : ((max((var_5 || 134), (min(var_1, var_1)))))));
    var_17 = 1;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = ((var_3 <= ((((arr_1 [i_0]) == (arr_1 [i_0]))))));
        var_19 = 7555287759945855306;
        var_20 = (max((max(var_8, (arr_1 [i_0]))), ((min((arr_1 [16]), -54)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_21 -= (var_5 || var_14);
                        var_22 = (79 <= 20833);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_12 [i_4] = (~114);
        arr_13 [i_4] = var_15;
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_25 [i_5] [i_6] [i_7] = var_15;
                    arr_26 [i_5] [i_5] [i_6] [i_7] = 3520661946;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        var_23 = (min((var_2 / var_2), (var_6 == var_3)));
                        var_24 |= (((-127 - 1) ? 0 : 1632351735404853470));
                        var_25 ^= (((!(arr_22 [i_10] [14] [i_8] [i_5]))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    {
                        var_26 = ((!var_0) ? 142 : ((((((var_3 ? (arr_43 [i_5] [11] [i_12] [i_13]) : (-32767 - 1)))) <= (-64 ^ var_15)))));
                        arr_48 [i_13] [i_13] [i_11] [i_13] [i_13] = (max((16814392338304698134 + 56786), (((-((-(arr_14 [i_13]))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                {
                    var_27 = ((-(~107)));
                    var_28 = (var_3 >= 7555287759945855309);
                }
            }
        }
    }
    #pragma endscop
}
