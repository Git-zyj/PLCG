/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_11 [i_3] [i_0] [9] [i_3] [i_3 + 2] = var_8;
                        var_14 = (min(var_14, (arr_10 [10] [8] [i_2] [i_3])));
                        var_15 -= ((-(arr_4 [i_1] [i_2])));
                        arr_12 [i_0] [i_0] = (((((((arr_9 [i_2] [i_2]) ? 33554431 : -33554447)))) >= (((!(((var_13 - (arr_8 [i_0] [i_1] [i_2] [7] [7])))))))));
                    }
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_4] &= arr_5 [i_0] [i_0] [i_2] [i_4];
                        var_16 &= ((min((arr_2 [i_4 - 1] [4]), (max((arr_8 [i_4] [i_2] [i_0] [i_0] [i_0]), (arr_14 [i_0] [i_4] [i_2] [i_4] [i_4]))))));
                    }
                    arr_16 [0] &= -var_2;
                    arr_17 [i_0] = (-1 >= (((((min(var_13, -33554437))) ? var_9 : (arr_9 [i_0] [i_2 - 1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            {
                arr_22 [i_5] [i_5] [i_5] = ((-(((((67 ? (arr_19 [i_5] [i_5]) : (arr_20 [i_6])))) ? (~-67) : ((((arr_21 [i_5] [i_6]) <= var_2)))))));
                arr_23 [i_5] [i_5] [i_6] = ((21105 ? ((max(((110 ? 1589446385 : -1589446390)), (max((arr_19 [i_5] [i_6 - 1]), var_9))))) : ((var_8 ? 24 : (1589446405 * 2136951854)))));
                arr_24 [i_5] [i_6] = (((((!((max((arr_21 [i_6] [0]), var_4)))))) | (((!(arr_18 [11]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                arr_38 [i_7] [i_8] [i_9] [i_10] [i_8] [i_9] [3] = ((((((arr_37 [3] [6] [i_9] [i_9] [i_9]) ? var_0 : 3618596652)) + (((33554431 << (var_8 - 5305763722062985901)))))));
                                var_17 &= ((((((arr_34 [i_9] [i_9] [i_11] [i_9] [i_9]) & (arr_34 [i_7 + 1] [i_7 + 1] [i_11] [i_10] [i_11])))) && (((var_4 ? (arr_34 [i_7] [i_8] [i_11] [i_10] [i_7]) : var_9)))));
                            }
                        }
                    }
                }
                var_18 = ((((min((arr_28 [i_8] [i_8]), (arr_27 [i_7] [i_8])))) ? ((((arr_20 [i_8 + 2]) ? (arr_21 [i_7 - 1] [i_7 - 1]) : (arr_21 [i_7 - 1] [i_7])))) : (arr_21 [i_7 - 1] [i_7 - 1])));
            }
        }
    }
    #pragma endscop
}
