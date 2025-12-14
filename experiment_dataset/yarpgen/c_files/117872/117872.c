/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_3] [i_2] [i_3] [1] = var_9;
                                arr_13 [i_0] [1] [i_2] [i_3] [i_4] [i_4] = (max(0, (arr_5 [i_4] [i_1] [1])));
                                var_19 = (max(var_19, (((!((((-1288120266 & var_16) ? ((var_9 ? -27677 : -26132)) : ((max(var_2, (arr_9 [6] [i_4]))))))))))));
                            }
                        }
                    }
                    var_20 = ((!(arr_5 [i_0] [i_1] [i_2])));
                }
            }
        }
        var_21 ^= (arr_8 [i_0] [i_0] [1] [i_0] [12]);
        var_22 = (min(var_22, ((((((2147483646 ? -27677 : 3145728)) == (arr_5 [i_0] [i_0] [i_0])))))));
        var_23 |= ((((((arr_6 [i_0] [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : 188))) ? ((-1472510244 ? 5044556450919483979 : -9441)) : (arr_7 [i_0] [i_0] [i_0] [1])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_24 -= (arr_0 [i_5]);
        var_25 = (arr_11 [16] [i_5] [i_5] [i_5] [i_5] [i_5]);

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_26 = (((arr_5 [i_5] [i_6] [i_6]) ? (arr_2 [i_5] [i_5] [i_5]) : (((arr_14 [i_5] [i_5]) ? var_2 : (arr_7 [i_5] [i_5] [i_5] [i_6])))));
            arr_18 [i_5] = (arr_10 [i_5]);
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_21 [i_7] [i_5] [14] = 1;
            arr_22 [i_5] [i_7] [i_7] = (arr_16 [i_5]);
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_26 [i_5] [8] = 3145728;
            arr_27 [i_5] [i_5] [i_5] = (((arr_11 [i_5] [i_8] [i_5] [i_8] [10] [i_8]) ? (arr_6 [i_5] [i_8]) : (arr_11 [i_8] [18] [i_5] [i_5] [i_5] [i_5])));
        }
        var_27 = (min(var_27, (1 < 7583694273800510599)));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_28 = (min(var_28, ((((((max(1, var_14)) >= ((-5473 ? 27666 : -1)))) ? (max(((~(arr_24 [i_9]))), (!1))) : ((max(13268, (-127 - 1)))))))));
        var_29 = (max(var_29, 111));
        var_30 = 992;
        arr_30 [i_9] [i_9] = ((((arr_25 [i_9] [i_9]) | -var_1)));
        arr_31 [i_9] = 763013180;
    }
    for (int i_10 = 2; i_10 < 17;i_10 += 1)
    {
        arr_35 [i_10] [i_10 + 1] = (arr_9 [i_10] [0]);
        arr_36 [i_10] = max((arr_4 [i_10]), (1683679845 % 3771408038));
        var_31 = (((((((((arr_6 [i_10] [i_10]) != (arr_32 [i_10 + 1])))) % (arr_6 [i_10] [11])))) ? (arr_6 [i_10 - 2] [i_10 - 2]) : -32641));
        var_32 = (arr_34 [2]);
    }
    var_33 = var_16;
    #pragma endscop
}
