/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 ^= ((max((max(29762, 29741)), var_2)));

                            for (int i_4 = 3; i_4 < 11;i_4 += 1)
                            {
                                var_16 = ((((~(arr_1 [i_2 + 2]))) * (255 - 19189)));
                                var_17 = 24009;
                                arr_11 [i_1] [i_1] = (min(var_11, (arr_1 [i_4])));
                                arr_12 [i_4 - 2] [i_1] [i_2] [i_1] = (max((max((arr_6 [i_0] [i_0] [2] [i_0]), (((arr_4 [i_0]) ^ 255)))), (arr_8 [8] [i_3 + 1] [i_2] [i_1] [i_0])));
                            }
                            for (int i_5 = 1; i_5 < 11;i_5 += 1)
                            {
                                var_18 ^= (max((184673450 | 2100138191), (arr_8 [i_5 + 3] [i_5] [i_3 - 1] [i_2 - 1] [i_2])));
                                var_19 ^= min(((max((max((arr_6 [i_0] [i_1] [i_2] [i_5]), -1)), (max((arr_13 [i_0] [i_0] [i_2 - 1] [i_3] [i_5]), 35791))))), (max(255, -1)));
                                arr_15 [i_1] [i_1] = ((((max((max(var_0, (arr_6 [i_0] [i_2] [i_3 - 4] [i_5]))), (((3 || (arr_9 [i_0] [i_1] [i_0])))))))) / (min((((arr_13 [i_0] [i_1] [i_1] [i_3 + 3] [i_5 - 1]) ? 224 : (arr_2 [i_0] [i_0] [i_0]))), ((-113 ? (arr_6 [5] [5] [i_2] [i_3 - 3]) : 1)))));
                                arr_16 [i_1] = max(-6315647834043417114, (min(var_0, ((1 ? -126 : (arr_2 [i_0] [i_1] [i_0]))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 4; i_6 < 12;i_6 += 1)
                            {
                                var_20 = (min(var_20, ((((((-1 ? 52077 : 65535))) < ((-6776184813842142489 ? 1119160603 : var_5)))))));
                                arr_19 [i_0] [i_0] [i_1] [8] [i_2 + 2] [i_3] [i_6] = (((arr_8 [i_0] [i_6 - 2] [i_3] [i_2 + 3] [i_3 + 3]) * (arr_3 [i_1] [i_1])));
                            }
                            arr_20 [i_1] [i_2] [i_1] [i_1] = 2718355764321392788;
                        }
                    }
                }
                arr_21 [i_0] [i_1] [i_1] = (((3 && 65523) < (max((((arr_0 [i_1]) ? 74 : var_7)), (((-6315647834043417114 + 9223372036854775807) >> (((arr_7 [i_0] [i_1]) - 88))))))));
            }
        }
    }
    var_21 = min((max((min(var_4, var_7)), ((max(255, var_11))))), var_13);
    var_22 = (min(31, ((max((min(var_9, var_5)), (var_3 >= var_6))))));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            {
                var_23 = (min(var_23, ((min(((((31 / -5381036818993075502) ? 52077 : 255))), (((((min((arr_22 [i_7] [i_8]), (arr_29 [16]))) + 9223372036854775807)) >> ((((max(var_9, 183))) - 179)))))))));

                /* vectorizable */
                for (int i_9 = 4; i_9 < 24;i_9 += 1)
                {
                    var_24 ^= (((arr_32 [i_9]) / ((((1 > (arr_31 [i_9] [5] [i_7])))))));
                    var_25 = (min(var_25, ((((arr_32 [i_9]) + 234)))));
                    arr_33 [13] [i_8] [i_9] [i_9 - 3] = (arr_28 [i_8]);
                    arr_34 [i_8] = 207;
                }
                arr_35 [i_8] [i_8] = (((29 + 149) + (arr_28 [i_8])));
            }
        }
    }
    #pragma endscop
}
