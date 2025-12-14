/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = arr_6 [i_0] [i_1] [i_2 + 2];
                            var_15 = ((~(max(2147483647, (arr_4 [i_2 + 2])))));
                            var_16 ^= (arr_1 [i_3 + 1]);
                            arr_9 [i_1] [i_0] = (max((((arr_5 [i_0] [i_1] [i_2 - 1] [i_3 - 1]) + (var_1 + 7841320202501990125))), var_5));

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_17 *= ((min((arr_6 [i_3 - 1] [13] [i_2 - 1]), -427557890139168611)));
                                var_18 *= (arr_7 [i_0] [3]);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_14 [10] [10] |= (max((((!(arr_7 [i_0] [i_5])))), ((~(arr_7 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_19 = (min((max(((max(var_1, var_11))), (arr_0 [i_0] [i_0]))), (arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] [i_7 - 1])));
                                var_20 = (min(((-7943 ? 0 : (arr_10 [i_1] [i_1] [i_6 - 1] [i_6 - 1] [i_7 - 1] [i_0] [i_1]))), ((4294967295 ? var_11 : (arr_10 [i_1] [i_6] [i_6 + 1] [i_6] [i_7 + 2] [i_0] [7])))));
                            }
                        }
                    }
                    var_21 = ((((!((max(26625, 24939))))) ? ((31 ? (arr_2 [i_0]) : (arr_2 [i_0]))) : 23366));
                    var_22 = (min(var_22, ((((min((arr_19 [1] [i_1] [i_5] [i_0]), 3216074127)) & ((max(var_4, (arr_19 [i_0] [i_1] [i_5] [i_1])))))))));
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_23 *= ((((min(118, (max(-1, 317346354))))) != (((arr_0 [i_0] [i_1]) ? (var_5 & 3) : var_8))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_24 = (((((arr_26 [i_0] [i_1]) ? var_4 : (max(173, var_10)))) < ((max(24320, (arr_17 [i_0] [i_8] [i_0] [i_10]))))));
                                var_25 = (~65519);
                                var_26 *= ((((!(((394934034 + (arr_4 [2])))))) ? (max((arr_7 [i_1] [i_8]), (8 % 65515))) : (arr_26 [i_0] [i_0])));
                                arr_27 [i_0] [i_1] [15] [i_9] [i_10] [20] [i_0] = (max(254, 1));
                            }
                        }
                    }
                    arr_28 [i_0] = (max((max((arr_24 [i_0] [i_0] [i_0]), (arr_1 [i_0]))), ((((arr_26 [i_8] [i_1]) > (arr_26 [i_0] [i_8]))))));
                }
                arr_29 [16] [i_1] |= ((((((arr_2 [8]) ? 1154275573 : (arr_2 [0])))) ? (arr_2 [12]) : (~65535)));
                var_27 = arr_18 [i_0] [18] [18] [18] [2];
                arr_30 [i_0] [i_0] [i_0] = 0;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                {
                    var_28 = var_10;
                    var_29 ^= (-32767 - 1);
                }
            }
        }
    }
    #pragma endscop
}
