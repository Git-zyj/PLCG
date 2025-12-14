/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = (max((min((((var_1 ? var_2 : 1112898351))), 0)), (((2032 ? 1 : var_6)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = ((var_14 ? ((~(arr_2 [i_0]))) : (arr_1 [i_0] [i_0])));
        var_19 = (min(var_19, (((~(((-9223372036854775807 - 1) ? -905474207 : -905474224)))))));
        var_20 = ((163 ? ((min(18846, 1))) : (arr_2 [i_0])));
        var_21 += ((((((0 >> (140737488355327 - 140737488355322))))) ? (arr_2 [i_0]) : (min((((0 ? var_9 : (arr_1 [i_0] [i_0])))), 24434))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        var_22 |= ((~(((arr_0 [i_1] [i_3 + 1]) ? 0 : 1))));
                        arr_11 [i_0] [i_2] [i_2] [i_3] = 57788;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_23 = (max(var_23, var_8));

        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            var_24 = (max(((~(arr_14 [i_4] [i_5] [i_5 + 1]))), (arr_14 [i_4] [i_5] [i_5 - 2])));
            arr_18 [i_4] [i_4] [i_5 + 1] = (((((max((arr_2 [i_4]), (arr_17 [i_4] [i_5 - 1])))) ? ((var_15 + (arr_0 [i_4] [i_5]))) : (arr_9 [i_4] [i_4] [i_4]))));

            /* vectorizable */
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_25 = (min(var_25, 101));
                            var_26 = -905474224;
                            var_27 ^= 1;
                        }
                    }
                }
                var_28 -= ((477376398 << (var_13 - 2763045195)));
                arr_28 [i_4] [i_5] [i_4] = ((31 ? 28743 : (~var_12)));
            }
            var_29 = (max(var_29, (((((arr_16 [0]) / (arr_16 [8])))))));
            arr_29 [14] [i_5] [i_5 + 1] |= (arr_17 [i_4] [i_5]);
        }
        arr_30 [i_4] = -24434;
        arr_31 [i_4] = var_9;
    }
    #pragma endscop
}
