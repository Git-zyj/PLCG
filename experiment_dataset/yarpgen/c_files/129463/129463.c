/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (min((min((arr_0 [i_0]), (arr_1 [i_0]))), (min((arr_1 [i_0]), (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (min(((min((arr_1 [i_2]), (arr_1 [i_0])))), (min((arr_3 [i_2] [i_0]), (arr_4 [i_2] [1])))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = (((-((min(-15833, -15849))))));
                    arr_9 [i_0] [i_0] = ((~(min(((521483899133145836 ? 0 : -15833)), -19))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_3] = (min(((-(25651 + -57))), ((-3632 ? ((min(var_0, (arr_12 [i_1] [i_1] [i_1] [i_2])))) : ((40067 * (arr_2 [i_0] [i_1])))))));
                                var_18 -= (min(((24 ? -7489836946409103935 : ((7489836946409103935 << (25 - 25))))), 15833));
                                arr_16 [i_0] [i_3] [18] [i_0] [i_4] [i_4] [i_4] = (~43778);
                            }
                        }
                    }
                }
            }
        }
        arr_17 [2] [i_0] = ((-(min((-975195014 < 1), (min((arr_4 [1] [i_0]), 25))))));
        arr_18 [i_0] [i_0] = var_14;
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = ((-7966712820172834210 ? (arr_19 [i_5 + 2] [i_5]) : 229));
        var_19 -= ((arr_20 [i_5 - 1] [i_5 + 2]) ? 6462 : (arr_19 [i_5] [i_5]));
        var_20 -= ((arr_19 [i_5 + 1] [i_5 + 2]) ? (arr_20 [i_5] [i_5 - 1]) : -7489836946409103946);
    }
    for (int i_6 = 2; i_6 < 18;i_6 += 1)
    {
        arr_25 [i_6] = ((21775 * (min(((-(arr_20 [21] [21]))), -25651))));
        arr_26 [i_6] [i_6] = ((((((arr_22 [i_6]) ? (arr_22 [i_6]) : 14520702987404600032))) ? ((((arr_22 [i_6]) <= (arr_22 [i_6])))) : ((min((arr_22 [i_6]), (arr_22 [i_6]))))));
    }
    var_21 = var_5;
    var_22 = (min((var_8 | var_7), ((min(-5084, -15835)))));
    #pragma endscop
}
