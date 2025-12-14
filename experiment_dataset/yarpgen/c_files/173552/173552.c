/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 12865;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 = (23150 + 5755786598567226474);
                    arr_9 [4] |= ((3073214927364422015 ? -39 : 32936));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_12 ^= (max(282986484426200989, 1));
                            arr_15 [i_0] [i_2 + 2] [i_1] [i_2 + 2] [i_1] [i_0] [i_0] = ((!(((((min((arr_3 [i_3 - 2] [i_0 - 1]), (arr_13 [i_2] [i_1])))) ? 32936 : (~111))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            var_13 = ((-5755786598567226454 ? (arr_14 [i_1] [i_3 - 2] [i_3] [i_3] [i_0] [i_1]) : (arr_14 [i_1] [i_3 + 1] [i_3] [i_3] [i_1] [i_1])));
                            var_14 = -32936;
                            arr_18 [i_2] [i_1] [i_2] [i_1] [i_0] = ((287396354 ? -21763 : 24));
                        }
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            var_15 = arr_5 [i_3] [i_3] [i_2];
                            var_16 = (min(var_16, ((((((((arr_20 [i_3] [i_1 - 2] [i_1]) ? (arr_2 [i_3] [i_2]) : var_1))) ? (max(149, (arr_7 [i_0] [i_0] [i_0] [i_0]))) : var_7))))));
                        }

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_17 = -1521075308;
                            var_18 *= 113;
                        }
                        arr_24 [1] [i_1] [i_1] [i_2] [i_1] = (max(-4071, -810395866));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_19 = (((((var_0 ? (arr_25 [i_0 + 2] [i_0 + 2] [i_1] [i_1 + 1]) : var_2))) ? ((max((arr_25 [i_0 - 2] [i_1 + 1] [i_1] [i_1 + 1]), 469702116))) : (min(var_4, (arr_25 [i_0 + 2] [i_1] [i_1] [i_1 + 1])))));

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_20 -= ((-((~(arr_6 [i_0] [i_0])))));
                            var_21 = (max(var_21, var_9));
                        }
                    }
                    var_22 ^= (arr_22 [6]);
                }
            }
        }
    }
    #pragma endscop
}
