/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 ^= (((arr_2 [16]) != var_16));
        var_19 ^= (arr_0 [i_0]);
        arr_3 [i_0] = -1360027510;
        var_20 = ((-64 ? -71 : -1546));
        var_21 = (arr_2 [i_0]);
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_22 |= (((max((max(var_14, (arr_1 [0] [0]))), (((!(arr_5 [i_1 - 2])))))) * ((((!((max(1, 6106310585712288505)))))))));
        arr_6 [i_1] = (arr_4 [i_1 - 1] [i_1]);
        var_23 = ((!((((arr_4 [i_1 - 2] [i_1]) ? (arr_4 [i_1] [i_1 + 1]) : (arr_4 [i_1 + 1] [i_1 - 2]))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_24 ^= (arr_2 [20]);
            arr_10 [1] |= (var_3 * (arr_5 [i_2]));
            var_25 = (arr_4 [i_1 - 1] [i_1 - 1]);
            arr_11 [i_1] [i_1 - 1] [i_1] = ((((((arr_8 [i_2]) ? (arr_9 [i_1] [i_2]) : (arr_5 [i_1])))) ? var_6 : (arr_2 [14])));
            var_26 = arr_5 [i_1];
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_27 += (((1 || (arr_13 [1]))));
            arr_14 [i_1 - 2] [1] [1] = (max(-var_8, (arr_2 [12])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_28 ^= (arr_1 [i_5] [22]);
                        var_29 *= 17811954465540460335;
                        var_30 ^= ((-(arr_9 [i_1 - 2] [i_1 - 2])));
                        arr_23 [i_6] [i_1] = (!(((4277829657 << (((arr_1 [i_6] [i_6]) - 15165269626688170361))))));
                    }
                }
            }
            arr_24 [i_1 - 2] [i_1] = arr_19 [i_1 + 1] [i_4] [i_4];
            var_31 += 1;
            arr_25 [i_1 - 1] [i_4] [i_1 - 1] = ((!(arr_16 [i_1 - 2])));
        }
    }
    #pragma endscop
}
