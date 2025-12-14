/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (min((((-32594 / 701) ? ((min(-23470, var_14))) : 693)), 8238));
                                var_18 = (arr_8 [9] [i_3] [i_2] [9] [i_2] [i_2]);
                                var_19 = (-8257 / 2241548305);
                                var_20 = (min(var_20, ((max(((-11824 ? (arr_12 [i_1] [i_4]) : (arr_0 [i_1] [i_4]))), (64831 - 361473217))))));
                            }
                        }
                    }
                }
                var_21 = (max(((var_14 * (arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]))), (((arr_10 [i_0] [i_1] [5] [5] [i_1] [i_1]) / (arr_10 [i_0] [i_0] [5] [i_0] [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 11;i_7 += 1)
            {
                {
                    var_22 = ((-((64830 ? (arr_21 [i_7 + 1] [i_7 - 3]) : (arr_21 [i_7 - 1] [i_7 - 2])))));
                    var_23 = min((((701 * 713) ? 8236 : (2094288286 / 49207))), ((-64843 ? 10575882315413830905 : (-1319276267427085551 / 15223))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_24 = ((~(min(2041980332, 657509571))));
                                var_25 = (arr_24 [i_5] [i_7] [i_5] [i_5] [i_5]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_26 = (min((((((~(arr_0 [i_5] [i_5]))) | (arr_9 [i_7 + 2])))), ((((((arr_0 [i_5] [i_5]) ? var_11 : -32741))) / ((8256 ? (arr_15 [i_10]) : 18446744073709551615))))));
                                var_27 = (((((!(arr_6 [i_7] [i_7 - 3] [i_10 + 3] [i_7])))) < ((((arr_28 [i_10] [i_10] [i_10] [i_7] [i_10 + 2] [i_10]) == (arr_6 [i_6] [i_6] [1] [i_10]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
