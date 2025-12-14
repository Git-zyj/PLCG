/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((-(arr_1 [i_0] [7])));
        var_17 *= (!(arr_2 [i_0] [10]));
        var_18 = ((!(arr_2 [i_0] [i_0])));
        var_19 = -2755819460462016322;
        var_20 = 2755819460462016321;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 = ((((arr_4 [i_1] [i_1]) <= (arr_4 [i_1] [i_1]))));
        var_22 *= ((+(((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))));
        var_23 ^= (((var_13 || (arr_5 [i_1]))));
        var_24 = var_6;
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_25 = min(((min(4095295332, (max(199671961, 38840))))), ((-(arr_20 [i_2] [i_3] [i_4 + 2] [i_4 + 1] [i_4 + 2]))));
                                arr_22 [i_2] [10] [i_3] [i_6] [i_2] [i_6] [i_6] = arr_18 [i_4 + 1] [i_3] [i_6 - 1];
                                var_26 *= (arr_19 [i_2] [i_3] [i_4] [16]);
                            }
                        }
                    }
                    var_27 = ((!((((min((arr_16 [i_2] [i_3] [i_2]), var_13))) && 199671961))));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        arr_27 [16] |= (arr_25 [8]);
        var_28 = max((arr_24 [i_7 + 1] [i_7 + 1]), (((((arr_6 [i_7]) >> (var_8 - 195))))));
        var_29 = ((-1 ? -2755819460462016322 : 1));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_30 [3] = ((min((arr_10 [i_8] [i_8] [i_8]), ((((arr_6 [0]) ? var_10 : 8191))))));
        var_30 -= ((-(((!((min(64, (arr_29 [8])))))))));
        var_31 -= ((!(((-(arr_25 [i_8]))))));
    }
    #pragma endscop
}
