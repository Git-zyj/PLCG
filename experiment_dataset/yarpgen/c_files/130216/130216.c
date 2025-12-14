/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [7] [7] [i_0] = ((~(arr_4 [1] [i_2] [i_2])));
                            var_10 = ((var_2 ? ((~(23 != 1))) : (((arr_10 [8] [i_3] [8] [10] [i_0] [i_1 - 1]) ? (~1) : (arr_9 [i_1 - 1])))));
                            var_11 = (max(var_11, (arr_0 [i_1] [18])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [17] [i_0] [i_5] = (((((arr_14 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1]) ? (((arr_3 [i_0]) ? (arr_6 [i_0]) : var_7)) : (((-320415001 && (arr_2 [i_1 + 1] [2] [i_1 + 1])))))) | (~1)));
                            var_12 = (((var_2 / (arr_0 [i_0] [i_5 - 1]))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    var_13 = (((((-127 - 1) ? ((32767 ? 1920 : var_5)) : (((var_6 ? 255 : var_6))))) % (((-((var_4 ? var_9 : var_2)))))));
                    var_14 = (arr_12 [i_6] [i_6] [i_8]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            {
                var_15 = ((+((((min((arr_26 [i_9]), (arr_25 [i_9] [i_9]))) > (((arr_29 [i_10] [i_9]) ? var_2 : (arr_9 [i_10]))))))));
                var_16 = (((((~(arr_13 [i_9] [i_9] [i_10])))) | (((arr_2 [i_10] [i_10] [i_9]) ? (arr_2 [20] [i_9] [i_10]) : (arr_2 [i_9] [i_10] [i_10])))));
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                arr_40 [i_9] [i_11] [i_10] [i_11 + 1] [i_12] [i_9] [i_13] = (-0 / 254);
                                arr_41 [i_12] [i_13] |= ((((((min(127, (arr_21 [i_9] [i_10] [i_10])))) <= var_7)) ? (min(var_9, (arr_8 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1]))) : (((-(!var_0))))));
                                arr_42 [i_11] [i_11] = (max(((((arr_32 [i_11] [i_11]) && (arr_8 [i_9] [i_11 - 1] [13] [13] [i_12] [i_12])))), (min((var_9 + var_4), (-1674266532 == 24469)))));
                                arr_43 [i_9] [i_10] [i_10] [i_12] [i_11] = ((((((84 << (((arr_4 [4] [i_10] [4]) + 10074)))) | ((((arr_19 [i_10] [i_12]) >= 62128))))) & (((20741 >= 1375184224164166307) << ((((~(arr_26 [i_10]))) + 61))))));
                                var_17 = (arr_6 [i_9]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 8;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 7;i_15 += 1)
                    {
                        {
                            var_18 = (max(var_18, 21));
                            var_19 = (min(var_19, 3408));
                            var_20 ^= ((!(((max((arr_15 [i_9] [i_10] [i_15] [i_10] [0] [i_15]), (arr_34 [i_9] [i_10])))))));
                            arr_49 [i_15] [i_15] [i_14] [i_15] = ((!((4294967295 < ((((arr_34 [i_9] [i_15]) ? (arr_22 [i_9] [i_9]) : -1)))))));
                        }
                    }
                }
                var_21 = ((var_1 | ((~(var_0 | var_1)))));
            }
        }
    }
    var_22 = ((((var_6 ? var_9 : (max(1022, 8)))) > ((~(var_6 % -1674266532)))));
    #pragma endscop
}
