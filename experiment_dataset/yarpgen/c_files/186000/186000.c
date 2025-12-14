/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((((var_11 >> (var_11 - 108)))) ? var_4 : (max(var_9, var_4)))), ((((min(var_2, var_1)) < 236)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 = ((((((arr_10 [i_2] [i_0] [i_2] [i_2]) ? (arr_10 [i_0] [i_0] [i_2] [4]) : (arr_1 [i_3])))) ? (((arr_9 [i_0] [10] [10] [i_3]) ? (arr_10 [i_3] [i_1] [i_1] [1]) : (arr_1 [i_2]))) : (((arr_10 [i_0 + 1] [i_1 - 4] [7] [i_1 - 4]) ? (arr_1 [i_0 - 1]) : (arr_10 [i_0 - 1] [i_1 - 3] [i_2] [i_3])))));
                            var_16 = arr_4 [i_0] [i_0 + 1] [1];

                            for (int i_4 = 1; i_4 < 10;i_4 += 1)
                            {
                                var_17 = (min(var_17, 236));
                                var_18 = (((arr_10 [1] [i_1] [i_2] [i_1]) * -18446744073709551615));
                                var_19 = (arr_5 [i_0 + 1] [i_0 + 1] [i_0] [i_0]);
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                arr_15 [i_3] [i_3] [i_5] [i_3] [i_3] = (min(236, 220));
                                var_20 = (((arr_13 [i_5] [i_0 + 1] [i_0 - 1] [i_0] [i_5]) ? ((((!(arr_13 [i_5] [i_0 + 1] [i_0 - 1] [i_0] [i_5]))))) : ((var_3 ? (arr_13 [i_5] [i_5] [i_0 + 1] [i_0] [i_5]) : (arr_13 [i_5] [i_0] [i_0 + 1] [i_0] [i_5])))));
                                var_21 = (max(var_21, (((-(arr_7 [i_0]))))));
                                arr_16 [i_0] [9] [i_2] [i_5] [i_5] = var_1;
                            }
                            for (int i_6 = 1; i_6 < 7;i_6 += 1)
                            {
                                var_22 = ((((((arr_1 [i_1 - 3]) ? (arr_1 [i_1 - 3]) : (arr_1 [i_1 - 1])))) && ((min((arr_1 [i_1 - 1]), (arr_1 [i_1 + 1]))))));
                                var_23 = -35;
                                var_24 = (max(var_24, ((max(var_13, (arr_3 [i_0]))))));
                            }
                            arr_20 [i_0] [i_0] [i_0] [i_0 - 1] = (arr_3 [i_0 - 1]);
                        }
                    }
                }
                var_25 = (max(var_25, (((-64 ? 19844 : 32767)))));

                /* vectorizable */
                for (int i_7 = 2; i_7 < 8;i_7 += 1)
                {
                    var_26 = var_11;
                    var_27 = (min(var_27, (((arr_17 [i_0 + 1] [i_0 - 1] [i_0] [1] [1]) || (arr_19 [i_0] [i_0 - 1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_28 = 215;
                                var_29 = (arr_18 [i_0] [i_0] [i_1] [2] [i_8] [1] [1]);
                                var_30 = (((arr_14 [i_0] [i_0] [i_0 + 1] [i_7] [i_0] [i_0] [i_0]) != (arr_24 [i_0] [i_0] [i_7] [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = var_12;
    #pragma endscop
}
