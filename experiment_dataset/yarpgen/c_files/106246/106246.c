/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 -= var_9;
                    var_16 = (max(var_16, 18446744073709551615));
                    arr_11 [i_1] = (((((12 ? (~-1187295127091597468) : 1))) ? (((min((arr_8 [i_0] [i_1]), 91)))) : ((0 | (arr_6 [i_0] [i_1] [i_2 - 2])))));
                    var_17 = (max(var_17, ((((max(1, var_10))) != ((((arr_10 [i_0] [i_1] [6] [i_2 + 1]) != -6164060321024371722)))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        var_18 ^= (((arr_6 [i_0] [i_0] [i_2 + 3]) ? (var_8 != var_0) : (arr_5 [i_2 + 2] [i_2 + 3] [i_3 + 3])));
                        arr_15 [i_1] [i_3 + 1] [i_2] [i_3 + 1] = (arr_13 [1] [9] [i_1] [i_2] [i_2] [i_3]);
                        var_19 = (((arr_12 [i_2 + 1] [i_1] [i_3 - 1] [i_3 + 2]) ? (arr_12 [i_2 + 2] [i_1] [i_3 - 2] [i_3 - 1]) : (arr_12 [i_2 + 4] [i_1] [i_3 - 1] [i_3 + 1])));
                        var_20 = (((((-3644 ? -8 : (arr_5 [i_0] [i_1] [i_1])))) ? (((((arr_13 [i_0] [i_0] [5] [i_0] [i_2] [i_3]) != (arr_2 [i_0]))))) : var_6));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_21 = var_3;
                            arr_21 [i_0] &= var_3;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_22 *= (arr_13 [i_0] [1] [1] [i_2 - 2] [8] [i_1]);
                            var_23 = (min(var_23, var_12));
                        }
                        var_24 = (max(((var_7 ? ((~(arr_19 [i_0] [i_0] [i_0] [i_1] [i_2 + 3] [i_2 + 2] [i_4]))) : (((max((arr_1 [i_2]), 3630)))))), ((((((var_3 != (arr_10 [i_1] [i_1] [i_0] [i_4])))) != ((min(30, var_1))))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_25 = ((1 ? (((((max(var_2, var_13))) ? (arr_2 [i_0]) : ((1 ? 3122977260 : 1675933313))))) : (((1 != var_3) ? -3658 : (var_11 != var_7)))));
                        var_26 = ((~(max((arr_25 [i_0] [i_7] [i_2 + 3] [i_0] [i_2]), var_2))));
                        var_27 = (1801372405704050651 != var_11);
                        var_28 = var_3;
                    }
                }
            }
        }
    }
    #pragma endscop
}
