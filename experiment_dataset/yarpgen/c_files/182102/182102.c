/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 *= (arr_0 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 ^= (max((((1949901453 ? (arr_0 [i_1]) : var_7))), 47984));
                                var_22 = ((((!(arr_8 [i_3 + 1] [i_3 + 1] [i_2] [i_3 - 3] [i_3]))) ? ((2638839011 >> (34359738367 - 34359738357))) : ((max((arr_7 [i_0] [i_1] [i_1] [i_3] [1]), var_17)))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_14 [20] [i_1] [9] = arr_12 [18] [i_0];

                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        var_23 = (((max(-25894, (arr_3 [i_6 - 2])))) || ((max((arr_3 [i_6 - 2]), (arr_3 [i_6 + 1])))));
                        var_24 = ((-((min((arr_10 [2] [i_1] [i_6 - 2] [i_6 - 2] [i_6 - 2] [2] [1]), (arr_10 [i_1] [i_1] [i_6 - 2] [i_6 - 1] [i_6] [12] [18]))))));
                        var_25 += (((arr_15 [i_6 + 1] [i_6 - 1] [i_6 - 2]) ? ((min((min(var_18, var_6)), (((arr_10 [4] [i_1] [i_1] [i_1] [16] [i_1] [1]) ? -1413257439 : (arr_6 [i_0])))))) : ((1656128285 << ((((34359738364 ? 17552 : (arr_5 [i_0] [i_0] [15] [15]))) - 17521))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_26 = ((~(arr_10 [i_0] [i_0] [i_1] [i_0] [i_5] [i_5] [1])));
                        var_27 += ((-(arr_8 [16] [i_0] [4] [i_7] [i_7])));
                    }
                    var_28 = (min(var_28, ((((max((~11041), (arr_5 [i_5] [i_1] [i_1] [i_0])))) ? ((-(arr_4 [i_0] [i_0]))) : ((max((min(1413257431, 1656128278)), (arr_2 [i_1] [i_5]))))))));
                }
                var_29 &= (arr_0 [12]);
            }
        }
    }
    var_30 = max((min(var_8, ((var_19 ? var_9 : var_9)))), (((~(min(var_18, var_12))))));
    #pragma endscop
}
