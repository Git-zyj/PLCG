/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (((((var_4 ? (var_5 * var_6) : ((var_1 ? var_5 : var_12))))) ? var_4 : (((min((!1), 32767))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [7] = 0;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_9 [i_0] [9] = var_4;
            var_15 = (!27558);

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                arr_12 [i_0] [i_0] [1] &= 1;
                var_16 = (!var_2);
                var_17 = (var_8 - (arr_0 [i_1] [i_2]));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_18 *= var_3;
                var_19 = (((((52814 ? 27558 : 56))) || var_10));
                var_20 ^= (arr_11 [i_0] [i_1]);
                var_21 = (max(var_21, (arr_7 [8] [i_1] [4])));
                var_22 = (max(var_22, ((((arr_10 [i_0]) << (arr_10 [i_3]))))));
            }
            var_23 = (var_11 * 0);
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_24 = (((((arr_18 [i_4]) || (arr_19 [i_4] [i_4]))) ? (((var_1 | 44777) & ((70 << (200 - 186))))) : (((var_2 != (((((arr_17 [i_4]) || 1)))))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_29 [i_6] = (((min((arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] [i_7]), var_10))) && (((var_8 ? (arr_27 [17] [i_5] [5] [17] [17] [13]) : (arr_27 [i_4] [i_5] [i_5] [i_6] [i_7] [i_4])))));
                        var_25 ^= ((((arr_24 [i_4] [6] [i_5]) == (arr_17 [i_4]))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    var_26 = 63686290;
                    var_27 ^= ((min((arr_22 [i_9] [i_4]), 1752523359)));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_28 = 1;
                                var_29 = (((var_10 / (arr_36 [i_4] [i_8]))));
                            }
                        }
                    }
                    var_30 = ((((min(((((arr_37 [i_4] [i_4] [i_4] [i_9]) != (arr_30 [i_9])))), (arr_26 [i_4] [i_8] [i_8] [i_9])))) * (0 << 0)));
                }
            }
        }
        var_31 -= ((((((min((arr_35 [i_4] [13] [i_4] [19]), var_13)) != (arr_35 [i_4] [i_4] [i_4] [i_4])))) == (-2147483647 - 1)));
    }
    var_32 = (max(var_0, var_1));
    #pragma endscop
}
