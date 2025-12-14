/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_0;
    var_15 = (min(var_1, var_7));
    var_16 ^= var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = arr_5 [i_0];
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_18 = (min(var_18, (arr_0 [i_1] [i_0])));
                                arr_15 [i_1] [i_0 - 1] [9] [14] [14] [9] = (min((arr_4 [i_2]), var_10));
                                var_19 = ((((((arr_9 [i_2 - 1] [i_2 - 1]) < (arr_9 [i_2 + 2] [i_2 - 3])))) - ((max((min(var_0, (arr_7 [i_0 - 2] [i_2] [i_2] [i_4]))), ((max(3072, (arr_8 [i_3])))))))));
                                arr_16 [i_2] [i_3] = (~67);
                            }
                            for (int i_5 = 1; i_5 < 17;i_5 += 1)
                            {
                                var_20 = ((max((arr_17 [i_0 + 1]), (arr_4 [i_2 - 3]))));
                                arr_20 [i_0] [i_0] [5] [i_0 + 1] [i_1] = ((max((arr_10 [i_2] [i_2] [i_2] [i_1] [i_2] [6]), ((~(arr_7 [i_3] [i_3] [i_5 - 1] [i_3]))))));
                                var_21 -= max((arr_12 [i_2] [i_2 + 2] [i_2] [i_2 + 1] [i_2]), ((~(arr_13 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1] [3] [i_5 - 1]))));
                            }
                            /* vectorizable */
                            for (int i_6 = 4; i_6 < 17;i_6 += 1)
                            {
                                var_22 = (min(var_22, ((((arr_11 [i_2 - 1]) & (arr_1 [i_0 + 1]))))));
                                var_23 = 3271846385;
                            }
                            arr_23 [i_1] [7] [i_1] [14] [i_3] = ((16 << (((((arr_2 [i_1] [i_0]) + 11269)) - 9))));
                            arr_24 [i_1] [i_1] [10] [10] [10] [i_1] = ((!((min((arr_13 [i_0] [i_2 + 2] [i_0] [i_0 - 2] [i_1] [14]), (((arr_22 [i_2] [2] [i_2] [i_2] [i_2 - 3]) ? (arr_5 [i_2]) : 17)))))));
                            var_24 = min(((max(17323, 232))), (arr_17 [i_0 - 1]));
                            var_25 = (arr_17 [i_3]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
