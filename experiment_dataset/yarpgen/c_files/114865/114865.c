/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 = (((0 && 40) ? (((arr_1 [i_0 + 2]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 2]))) : (arr_1 [i_0 + 1])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                var_16 = (max(var_16, 1));
                var_17 += (((!var_10) ? 32761 : (min((max(0, (arr_6 [i_0] [i_0] [i_0 + 2]))), ((var_10 / (arr_1 [10])))))));
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_13 [i_0] [8] [i_0 + 2] [i_0] = -98;
                        arr_14 [i_3] [i_3] [i_1] [i_0] = -65;
                        arr_15 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] = (((((arr_5 [i_0 + 2]) ? (arr_4 [i_0] [i_0]) : (var_10 || 1687595366))) & (((min((26 && 355853225), (arr_12 [i_0 + 1] [i_0 + 2] [i_0])))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_5] [i_6] [i_7] [i_7] = 88;
                            var_18 = (min(((((arr_10 [i_0 + 1] [i_0 + 1]) || (arr_10 [i_0 + 1] [1])))), (arr_10 [i_0 + 1] [i_1])));
                            var_19 ^= (((arr_16 [i_0 + 1] [i_0 - 1] [i_0 - 1] [4]) ? ((((arr_16 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1]) || var_13))) : ((((arr_16 [i_0 + 2] [i_0 - 1] [3] [7]) || (arr_1 [i_0 + 2]))))));
                            arr_25 [i_7] [i_6] [i_5] [i_1] [i_0] = ((-((1 ? (!0) : (12 || 0)))));
                        }
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            arr_29 [i_0 + 1] [i_1] [i_5] [i_6] [i_0 + 1] [i_6] [i_8 + 4] &= -53481;
                            var_20 = (max(var_20, (((((var_10 ? ((((arr_21 [i_0 + 2] [i_1] [i_5] [i_6] [i_8]) / -98))) : var_2)) * (((((var_12 ? (arr_8 [i_0] [i_0] [i_5] [2]) : 47)) / (min((arr_8 [i_8 + 1] [i_6] [i_1] [i_0]), var_2))))))))));
                            var_21 += (arr_3 [i_0] [i_1]);
                        }
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            var_22 = (arr_3 [i_9 - 2] [i_0 + 1]);
                            arr_34 [i_0 + 2] [i_1] [i_9] [8] [8] = (((arr_12 [i_0 + 1] [i_0] [i_0 + 2]) ? (arr_12 [i_0 - 1] [i_0] [i_0]) : (arr_12 [i_0 + 1] [i_0 - 1] [1])));
                        }
                        arr_35 [i_0] [i_6] |= (arr_33 [i_0 + 1] [i_0] [i_0] [i_0] [8] [i_0 + 1]);
                    }
                }
            }
            var_23 *= ((-(min(-var_1, (arr_3 [i_0 + 1] [i_1])))));
        }
        var_24 += (min(((((arr_1 [11]) - -1687595356))), (((var_12 + var_12) ? ((((arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 2]) ? 0 : var_7))) : (arr_9 [i_0 - 1] [i_0] [i_0])))));
    }
    #pragma endscop
}
