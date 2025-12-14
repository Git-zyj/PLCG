/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((var_2 != (min((var_1 <= var_2), (var_3 & var_0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_0] = ((!(arr_11 [i_1 - 2] [i_2 + 2] [i_2 + 2])));
                    var_14 *= ((((((arr_7 [i_0]) ? (arr_4 [i_0] [i_0] [i_2]) : (arr_0 [i_0] [i_0])))) != (arr_8 [i_0] [i_0] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((((14644719627306559815 << 4) | 1)))));
                                arr_20 [i_0] [i_1] [i_3] [i_4] = ((((-(arr_8 [i_2] [i_3] [i_4]))) % (arr_6 [i_1 - 3] [i_1])));
                                arr_21 [i_0] [i_3] [i_2] [i_3] [i_4] [i_2] [i_2] = (arr_15 [i_2] [i_2 + 2] [i_2] [i_2 + 2] [i_2 - 1] [i_2 - 2]);
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_1 [i_3] [i_1]) ? (arr_9 [i_1 - 2] [i_2 + 3]) : (arr_8 [i_3] [16] [i_0])));
                                arr_23 [i_1] [i_2] [i_3] [i_4] = (arr_1 [12] [i_1]);
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_16 = ((~(arr_19 [i_0] [i_0] [i_0])));
            var_17 ^= (((arr_16 [i_5] [i_5] [15] [i_0]) ? (((((arr_8 [i_0] [i_0] [i_0]) && (arr_0 [i_0] [11]))))) : (arr_8 [i_5] [i_5] [i_0])));
            arr_27 [i_0] = ((+(((arr_24 [i_0] [i_0] [i_0]) & (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5])))));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            arr_30 [i_0] [i_0] [i_6] = (arr_17 [i_0] [i_0] [i_0] [i_6] [i_6]);
            var_18 = (arr_15 [i_0] [i_0] [16] [i_6] [i_0] [i_6]);
            var_19 = (arr_8 [16] [i_6] [i_0]);
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
        {
            arr_33 [i_0] = ((((((arr_7 [i_7]) || (arr_29 [i_7] [i_0])))) - (arr_13 [i_0] [i_0])));
            var_20 = (max(var_20, ((((arr_18 [i_0] [i_7] [i_7] [i_0] [14] [i_7]) | (arr_18 [i_0] [i_0] [i_0] [i_0] [i_7] [i_7]))))));
            var_21 = ((~(arr_13 [i_0] [i_7])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        arr_38 [i_0] [i_7] [i_8] [i_9] [i_0] = ((27 ? 240 : 33554431));
                        var_22 = (-14499 >= 1);
                        arr_39 [i_0] [i_7] [i_8] [i_9] = (arr_8 [i_9] [i_8] [i_0]);
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_23 = (arr_19 [i_10] [i_10] [i_10]);

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_24 = max(39825, 14494);
            arr_46 [i_11] = ((((min((arr_8 [i_10] [i_11] [i_10]), (arr_10 [i_10] [i_10] [i_11])))) ? (((!(arr_8 [i_11] [i_10] [3])))) : (((!(arr_43 [14]))))));
        }
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_25 = (arr_47 [i_12]);
        var_26 += (((arr_49 [i_12]) / ((max((arr_49 [i_12]), (arr_48 [i_12] [i_12]))))));
        arr_50 [i_12] = ((+((((arr_47 [i_12]) == (arr_47 [i_12]))))));
    }
    #pragma endscop
}
