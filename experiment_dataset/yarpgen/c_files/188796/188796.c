/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (3648121957 * 65);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = 0;
        var_20 = (((arr_0 [i_0]) || ((max(26061, 0)))));
        var_21 *= ((11 * (!7695283811118929884)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [1] = (max(((~(arr_6 [i_2 - 4] [i_2] [i_2 - 4] [i_2 - 4]))), ((((arr_7 [i_2 - 4] [i_2] [i_2] [i_2 - 4]) || (arr_7 [i_2 - 4] [i_2] [i_2 - 4] [i_2 - 4]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_22 *= ((-644002892 || ((!(arr_6 [i_2] [i_3] [i_2 - 4] [i_2])))));
                                arr_15 [i_0] [i_3] [i_1 + 1] [i_3] [i_3] [10] &= (max((max((max(85, (arr_3 [i_0]))), (((1697713476 == (arr_14 [i_0] [i_0] [i_0] [6])))))), ((max((arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2 + 1] [14]), 10623)))));
                                arr_16 [i_4] [i_3] [i_2] [i_1] [i_0] = arr_5 [15];
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_20 [i_5] [i_5] |= 9157473674161370904;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    {
                        var_23 = 1;
                        var_24 = (max((arr_28 [i_8] [i_8 + 1] [i_8 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]), (max((arr_6 [i_8 + 1] [i_5] [i_5] [i_7 + 1]), (arr_28 [i_8] [i_8 - 1] [i_8 - 1] [i_7 + 1] [0] [i_7 + 1])))));
                        arr_29 [i_5] [i_7] [i_5] [i_5] &= (max(((max((((770156185 < (arr_3 [i_5])))), 0))), (arr_10 [i_8 + 1] [i_7 - 1] [20] [i_7 - 1])));
                    }
                }
            }
        }
        arr_30 [i_5] = ((~((max((arr_25 [i_5]), (arr_24 [0] [i_5] [i_5]))))));

        /* vectorizable */
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            arr_35 [i_5] [2] [i_5] &= ((!(arr_7 [18] [i_5] [i_9 + 1] [i_9 - 2])));
            arr_36 [i_5] [i_5] = (arr_12 [i_5] [i_5] [i_5] [i_9 - 1] [i_9 + 1]);
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            var_25 = ((-(((!(arr_27 [i_5] [i_10]))))));
            var_26 *= -9157473674161370904;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 10;i_12 += 1)
                {
                    {
                        var_27 -= (arr_44 [i_12] [i_12] [i_12 - 3] [i_5]);
                        arr_46 [i_5] [i_10] [i_11] [i_11] [i_12] = (arr_45 [i_5] [i_10] [i_5] [i_5] [i_12 - 2]);
                        var_28 *= (arr_43 [i_5] [i_5] [i_5] [i_5]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
