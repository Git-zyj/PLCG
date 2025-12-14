/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((((((((max(56, 160)))) - ((4097929305467523984 / (arr_0 [i_1 - 1])))))) ? (((arr_4 [i_0] [i_1 - 1]) / var_5)) : (arr_3 [i_0]))))));
                arr_5 [i_0] = (((arr_4 [6] [i_1]) ? (((2488129677 * (arr_2 [i_0] [i_0] [i_1 + 2])))) : (((arr_2 [i_0] [i_0] [i_1]) ? ((0 ? -5836265755112952696 : 128)) : -21974))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_12 = (min(((+(((arr_10 [i_2]) ? 54 : 245)))), (arr_9 [i_0] [i_1] [3] [i_1 + 2] [1])));

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_13 = 4062;
                                var_14 = (((((arr_2 [i_0] [i_1 - 1] [i_0]) + 9223372036854775807)) >> (-265666726 - 75)));
                            }
                            var_15 = (min(var_15, (((((((arr_1 [i_1 - 1]) | var_2))) ? (max((min(7463210882560730904, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), -82)) : 33554424)))));
                            arr_14 [i_0] [5] [i_2] [i_0] [i_0] [i_0] = ((((arr_2 [i_0] [i_1 + 2] [i_3 - 2]) ? var_7 : 29525)));
                            arr_15 [i_3 + 1] [i_2] [i_1 + 1] [i_0] = ((((((arr_3 [i_1 + 1]) ? (arr_2 [i_0] [i_0] [i_0]) : var_4))) * ((min(var_6, (arr_12 [i_0] [4] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_0] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                arr_22 [i_6] [i_6] [17] = (arr_16 [i_5] [i_6]);
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_16 = var_6;
                                arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] = var_5;
                            }
                        }
                    }
                }
                var_17 = (((arr_29 [i_5] [0] [0] [i_5] [i_6]) ? (min(((~(arr_19 [i_5] [i_6]))), (((var_2 >> (90 - 75)))))) : (((265666731 ? (((arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] [i_5]) << (-7463210882560730890 + 7463210882560730899))) : 19696)))));
            }
        }
    }
    var_18 = ((var_5 || (((-7128930274613848615 && -72) && (166 || -8181385676127805045)))));
    var_19 = var_2;
    #pragma endscop
}
