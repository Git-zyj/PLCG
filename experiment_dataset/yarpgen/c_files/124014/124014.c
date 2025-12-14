/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0] [i_0]);
        var_12 = (min(var_12, ((((((arr_1 [2]) + 2147483647)) << (((((arr_0 [i_0]) + 1046325812)) - 14)))))));
        var_13 *= (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = ((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1]));
        var_14 = (max(var_14, (arr_6 [1])));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_2] [i_2] [1] = var_10;

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_15 ^= (arr_16 [i_4]);
                        arr_18 [1] [i_2] [i_2] [i_1] = (arr_17 [14] [i_1] [i_2 + 1] [i_2 - 1] [i_2] [i_3 - 1]);
                        arr_19 [i_2 - 1] [i_2] [i_1] [i_1] [i_1] [i_2 + 1] = (((arr_11 [i_1] [i_1] [i_1]) * ((((arr_6 [i_1]) ? (arr_5 [11] [i_1]) : (arr_8 [11] [i_1]))))));
                        var_16 -= (arr_12 [8] [i_3 - 1] [i_4]);
                    }
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            arr_24 [i_1] [i_5] [i_1] [i_1] [i_1] [i_1] = (((arr_13 [i_1] [i_2 - 2] [i_1]) >= (arr_12 [4] [i_2] [4])));
                            arr_25 [i_1] [i_2 - 3] [4] [i_1] [i_6] [i_1] = (arr_11 [1] [i_2 - 1] [i_2 + 1]);
                            var_17 = ((!(arr_17 [i_6 - 1] [i_5 - 2] [i_1] [i_2 - 2] [i_2 - 2] [i_1])));
                        }
                        arr_26 [i_1] = arr_9 [i_1];
                    }
                }
            }
        }
        var_18 ^= ((arr_8 [1] [i_1]) && (arr_13 [i_1] [i_1] [14]));
    }
    #pragma endscop
}
