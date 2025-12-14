/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 |= ((((~(arr_9 [i_0] [i_1 + 1]))) * var_17));
                            var_20 = (max(var_20, 49573));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_21 = (max(var_21, (arr_11 [i_0] [i_0] [9] [1])));
                    var_22 *= max((((~((max((arr_10 [1] [1] [i_4] [i_4]), 49585)))))), (max((arr_12 [i_0] [15] [14]), (((arr_13 [i_0] [i_1] [i_0] [i_0]) | (arr_4 [i_0]))))));
                    var_23 -= (max(((max((arr_7 [i_0] [i_1 + 1] [i_1 + 1]), (arr_7 [i_0] [i_1 - 2] [i_1 + 1])))), ((53 ? 275301583 : (arr_7 [i_1] [i_1 - 2] [i_1 - 2])))));
                    var_24 = (min(var_24, ((((var_14 & ((-(arr_11 [i_0] [i_1] [i_4] [i_4])))))))));
                    var_25 *= ((~(((arr_9 [13] [i_1 - 2]) ? (arr_9 [i_0] [i_1 - 1]) : (arr_9 [i_4] [i_1 + 1])))));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_26 = (max(var_26, ((max((((((~(arr_4 [9])))) ? (arr_14 [9] [i_5] [i_5] [i_0]) : 13014658215963894882)), ((((!(arr_2 [7] [i_5]))))))))));
                    arr_18 [17] [i_1] [i_1] [i_1] &= (!188);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_27 ^= (arr_0 [i_6]);
                                var_28 = (max(var_28, (max((~16804), (max((((arr_16 [i_0]) | (arr_7 [i_0] [i_0] [i_0]))), ((max((arr_13 [i_0] [i_0] [i_0] [i_6]), (arr_21 [i_7] [i_7] [i_7] [i_7] [10] [i_7] [i_7]))))))))));
                                var_29 = (min(var_29, (!-6523576645610673588)));
                                var_30 = (min(var_30, ((((((!(arr_16 [i_5]))))) ? ((~(((2768336691 && (arr_14 [i_5] [10] [1] [i_5])))))) : (~23361)))));
                            }
                        }
                    }
                    var_31 ^= arr_22 [i_0] [i_5] [i_5] [i_5] [i_5] [i_5] [i_0];
                }
            }
        }
    }
    var_32 = (max(var_32, ((max(2586641604, 1341158220)))));
    #pragma endscop
}
