/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((+((((max((-32767 - 1), 244))) / ((min(var_0, var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (min((arr_0 [15] [i_1]), 11));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (arr_2 [i_0] [i_0] [i_0]);
                                arr_11 [i_0] [i_1] [i_0] [7] [i_0] [i_4 + 1] = ((+(((((arr_4 [i_1 - 4]) ? (arr_7 [i_0] [22] [i_2] [i_3] [i_4] [i_1]) : var_0)) - 141922179718176824))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_17 = ((((~(arr_5 [i_6] [i_0 + 2] [i_0 + 2]))) + ((((var_4 ? (arr_4 [5]) : var_2)) + -923150904))));
                                var_18 = ((var_12 == (((-((var_2 ? 1677410081 : 14649)))))));
                                var_19 = (min(0, 130));
                                var_20 = (((~(arr_10 [i_0 - 1] [i_0 + 2] [i_1 + 1] [i_5 + 2] [i_0 - 1] [i_7] [i_7]))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_21 = (min(((~(arr_25 [i_0] [i_0] [i_8] [i_0]))), (arr_4 [i_0])));
                                arr_29 [i_0] [i_8] [i_8] = (min((min((((!(arr_18 [i_10] [i_9] [i_8] [i_0])))), (((arr_24 [i_0] [i_0] [i_8] [i_9]) >> (var_10 - 142))))), (((var_2 == ((((arr_28 [i_8]) >= var_12))))))));
                                arr_30 [i_10] [i_9] [i_8] [i_8] [i_1 + 1] [10] = (arr_17 [i_0] [i_0] [i_8] [i_8] [i_9] [i_10]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((var_4 == (min(((max(var_1, 26678))), (max(var_4, var_12))))));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            {
                arr_35 [i_11] = (min((~var_2), var_10));
                var_23 ^= (max(var_12, var_4));
            }
        }
    }
    #pragma endscop
}
