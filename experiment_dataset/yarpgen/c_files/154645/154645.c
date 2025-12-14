/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((((max(var_8, (min(var_2, var_7))))) && var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_13 = (i_0 % 2 == 0) ? (((-((-(((arr_0 [i_0] [i_0]) << (((arr_2 [i_0]) - 3154))))))))) : (((-((-(((arr_0 [i_0] [i_0]) << (((((arr_2 [i_0]) - 3154)) - 35969)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_14 *= (arr_1 [20]);
                            var_15 += (!((((arr_9 [20] [i_1] [i_2] [18] [i_3 + 1]) | (arr_9 [i_0] [i_0] [14] [8] [i_3 + 1])))));

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                arr_13 [i_1] [i_1] [i_0] = ((25487 | (((42 || (arr_4 [i_0] [i_1] [i_0]))))));
                                var_16 ^= ((228978930 ? 123 : (-32767 - 1)));
                            }
                        }
                    }
                }
                var_17 = (arr_3 [20] [i_1] [20]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_18 ^= 122;
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_19 = 1;
                                var_20 = ((1 ? (((arr_7 [i_9] [i_6] [i_8 - 1] [i_9 - 1]) ? (arr_7 [1] [i_6] [i_8 - 1] [i_9 - 1]) : (arr_7 [i_5] [i_6] [i_8 + 1] [i_9 - 1]))) : 34903));
                                var_21 = arr_3 [i_5] [i_6] [i_6];
                                var_22 = (((arr_21 [8] [8]) ? 1 : 7014448425238042947));
                            }
                        }
                    }
                }
                var_23 = (max(var_23, (((((((arr_23 [4] [i_5] [i_5] [0]) / (arr_10 [i_5] [i_5] [i_5] [i_6] [i_5] [15] [i_6])))) ? ((9147 ? (arr_21 [i_6] [i_6]) : -15)) : ((1720040533389999692 >> (((min(7014448425238042931, 9143)) - 9110)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 13;i_11 += 1)
        {
            {
                var_24 ^= ((!((max(-19, 123)))));
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_25 = (max(var_25, ((((arr_35 [i_13] [i_13] [i_11] [i_11] [6] [i_13]) / (arr_35 [i_13] [i_11 + 1] [i_11] [i_12] [i_11 + 1] [8]))))));
                            arr_36 [i_10] [i_10] [i_10] [i_11] = 14;
                            arr_37 [i_13] [i_11] [i_12] [i_11] [1] [1] = ((((((!(arr_33 [i_13] [i_12 + 4] [i_13] [i_11] [i_13 - 3] [i_13]))))) - -7014448425238042948));
                            var_26 = (max((arr_35 [i_11] [i_12] [i_11 + 2] [1] [i_10] [i_11]), 27517));
                        }
                    }
                }
                arr_38 [4] [i_11] = 10614;
            }
        }
    }
    #pragma endscop
}
