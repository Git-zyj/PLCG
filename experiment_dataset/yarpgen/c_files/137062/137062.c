/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_17 += (arr_11 [i_0 - 1] [15] [i_1] [i_1] [i_1 + 2] [i_4 - 2]);
                            arr_12 [1] [i_2] [i_2] [i_2] [i_2] = var_15;
                        }
                    }
                }
            }
            arr_13 [i_0] [i_0] [18] = ((-(arr_1 [i_1 + 2])));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            var_18 = (((arr_5 [i_0 - 1] [i_0 - 1] [i_5 + 1] [i_5]) ? var_2 : var_2));
            var_19 = 3171440629847346544;
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_24 [i_6] [i_7] [i_6] [i_6] = (arr_8 [i_0] [i_8] [i_7 - 1] [i_8] [i_8] [i_0]);
                        var_20 |= ((((((-((max((arr_3 [i_7] [i_8]), var_12))))) + 2147483647)) >> (!45066)));
                        var_21 = (min(((((arr_3 [i_7 + 2] [i_0 - 1]) >= ((~(arr_6 [i_6])))))), (((arr_6 [i_6]) | ((110 ? var_13 : var_10))))));
                        arr_25 [i_0] [i_6] [i_6] = (var_3 >> (((((arr_10 [i_8] [i_6] [7] [i_8] [i_6] [1] [i_0 - 1]) | (arr_18 [i_6]))) + 6476112016143687699)));
                        var_22 = (((arr_11 [i_0] [i_6] [15] [i_8] [i_7] [i_0]) ^ (arr_18 [i_0])));
                    }
                }
            }
        }
        var_23 = var_11;
        var_24 = ((~(min(-22969, (((arr_16 [i_0] [2]) ? 32767 : (arr_23 [3] [i_0])))))));
    }
    var_25 += var_9;
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 20;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_37 [20] [i_10] [15] [i_9] [15] = (((arr_26 [i_9]) ? (var_5 <= var_11) : -102));
                            var_26 = (min(var_26, (arr_28 [i_10 - 2] [i_11 + 2] [10])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_27 = ((-((~((49065 >> (((arr_41 [i_9] [1] [i_13] [i_9] [i_14] [4]) - 4214612394))))))));
                            var_28 = var_11;
                            var_29 -= ((var_5 >= ((var_2 ? (((arr_29 [0]) >> (var_6 + 16323))) : (-127 - 1)))));
                        }
                    }
                }
                var_30 = (min((max(var_0, (arr_36 [i_10 - 1] [i_10] [i_10] [i_10] [i_9] [i_9 + 3]))), -5));
                var_31 += ((-((var_2 ? (arr_42 [i_10 - 2] [i_10] [i_9 - 1] [3]) : (arr_42 [i_10 - 1] [i_10] [i_9 - 1] [18])))));
            }
        }
    }
    var_32 = ((!((max(-var_12, 1)))));
    #pragma endscop
}
