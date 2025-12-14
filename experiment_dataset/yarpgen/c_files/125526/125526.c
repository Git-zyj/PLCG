/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = ((5044343136903814441 ? 0 : -588194132));
        var_13 &= (((arr_0 [i_0] [i_0]) / (((arr_0 [15] [i_0]) ? 1 : (arr_0 [i_0] [i_0])))));
        var_14 = (((min((arr_1 [i_0] [i_0]), 0)) * 0));
        arr_2 [i_0] = var_8;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = (((arr_4 [i_0] [i_0] [i_1]) ? (~1) : (arr_4 [i_1] [i_1] [0])));
            var_16 = ((-(arr_0 [i_0] [i_1])));
            arr_5 [i_0] [i_1] [i_0] &= (((arr_1 [i_0] [i_1]) << (((arr_4 [i_0] [i_1] [i_1]) - 1886950242))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [1] = var_5;
            arr_11 [i_2] &= (arr_3 [i_0] [i_0]);
            var_17 = (((arr_8 [i_2]) | (((min(1579721603, var_3)) * (arr_8 [i_0])))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_18 = (((((arr_6 [i_0] [i_0] [i_0]) % 1)) >= (arr_9 [i_0] [i_0] [0])));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_19 &= (arr_4 [i_3] [i_3] [i_0]);
                            var_20 = (16368 >= 1579721603);
                            var_21 *= 3019491899540187597;
                        }
                    }
                }
                arr_22 [i_0] [i_4] [i_4] = -2101048881;
                var_22 = (arr_7 [i_0]);
            }
            var_23 = 1;
            var_24 = 1;
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_25 = (arr_3 [1] [i_7]);
            var_26 *= (+(min((arr_18 [i_0] [i_0] [i_0] [i_0] [4] [i_0]), var_5)));
            var_27 = (arr_24 [i_0]);
            var_28 = 1;
            arr_25 [i_0] [i_0] = (max(1, 1073709056));
        }
    }
    var_29 = (max(var_29, ((min((((max(var_11, var_10)) & (min(18, var_10)))), (0 ^ var_7))))));

    /* vectorizable */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_30 = 2147483647;
        var_31 = (((arr_26 [i_8]) ? (arr_27 [i_8]) : (arr_27 [i_8])));
    }
    #pragma endscop
}
