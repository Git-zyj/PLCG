/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_12));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = (max(((max(var_13, (arr_0 [i_0])))), ((-var_9 | (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_20 ^= (max(((-(arr_6 [i_4] [i_2]))), ((max((arr_13 [21] [i_2] [i_2]), (arr_7 [i_2]))))));
                            arr_17 [i_4 - 1] [i_3] [i_0] [i_1] [i_0] = (max((arr_0 [i_0]), (max((arr_14 [i_0]), (((arr_8 [i_0] [18]) ? var_8 : (arr_5 [i_3] [i_3])))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] = (((max(468232037351874265, 127)) - (arr_5 [i_3 + 2] [i_4 - 1])));
                        }
                    }
                }
            }

            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_21 = (max((max(((-122 ? 127 : 4294967295)), 122)), 4294967295));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                            arr_27 [i_0] [i_5 + 1] [i_1] [i_0] = ((((max((arr_6 [i_0] [17]), (arr_6 [i_5 - 3] [i_1])))) ? ((min((((arr_11 [i_0] [i_1] [i_6] [i_7]) ? (arr_16 [i_0] [i_1] [i_5 - 1] [i_6] [i_0]) : 0)), var_3))) : (max((arr_5 [i_6] [i_6]), (arr_24 [i_0] [i_0] [i_5] [i_6] [i_0])))));
                            arr_28 [i_0] [i_0] [i_0] [i_1] [18] [i_6] [i_7] = 122;
                        }
                    }
                }
                arr_29 [i_0] [i_0] [i_0] = (((arr_3 [i_5]) > 121));
                var_22 = (((max((arr_19 [i_1] [i_5 + 1] [i_0]), (arr_19 [i_1] [i_5 - 1] [i_0])))) | (arr_11 [i_1] [i_5 - 3] [18] [i_5 - 2]));
            }
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                arr_32 [i_0] [i_0] [i_8] [i_8 - 1] = (max((min(((max((arr_22 [i_0] [i_1] [i_8 + 1] [i_8]), (arr_14 [i_0])))), (min((arr_6 [i_8] [i_1]), var_10)))), ((18220 ? (arr_23 [i_0] [i_1] [i_0] [i_1] [i_8 + 1]) : 122))));
                arr_33 [i_0] [i_1] [i_0] = (((((((((arr_9 [i_8] [i_8] [i_8] [i_8]) | var_10)) < (max(18446744073709551615, 1)))))) | (arr_16 [i_8 - 1] [12] [i_1] [i_8] [i_0])));
                var_23 = (((((arr_2 [i_0] [i_1]) ? var_2 : (arr_2 [i_0] [i_1])))) ? (max(((max((arr_14 [i_0]), (arr_8 [i_0] [i_1])))), ((-(arr_9 [i_0] [i_1] [i_1] [i_8]))))) : ((max(-var_5, (arr_20 [i_0] [i_1] [17] [i_8 - 1])))));
            }
            var_24 = (min((arr_23 [i_0] [i_0] [i_1] [i_1] [i_1]), ((2598850634475327392 ? (arr_7 [i_0]) : var_6))));
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            arr_37 [i_9] &= ((((arr_19 [i_0] [i_9] [i_9]) ? (!0) : (arr_10 [i_0] [i_0] [i_0]))) | (arr_22 [i_0] [i_9] [i_0] [i_9]));
            var_25 ^= ((var_12 ? ((~(arr_34 [19]))) : (((-9223372036854775807 - 1) ? (-2147483647 - 1) : 12))));
            var_26 = arr_35 [i_0];
        }
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        arr_41 [i_10] = (min((arr_39 [i_10]), (arr_40 [i_10])));
        var_27 = (max(var_27, (((!(arr_38 [i_10]))))));
        arr_42 [i_10] [i_10] |= var_11;
    }
    var_28 = var_10;
    #pragma endscop
}
