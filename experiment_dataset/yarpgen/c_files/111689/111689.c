/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((var_13 ? (arr_2 [i_1] [i_0]) : ((var_3 ? (arr_3 [i_0] [i_1 - 3] [i_0]) : 13493277069375460271))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (min(((max((min(var_15, var_6)), ((((arr_8 [i_0] [i_0] [i_0] [i_0]) >= 13493277069375460274)))))), (((!2710640833405563646) | (((arr_8 [i_0] [i_1] [i_2] [i_0]) ^ (arr_6 [i_1] [i_2])))))));
                    arr_10 [i_2] [i_2] [i_1] [i_2] = (arr_3 [i_1 + 1] [i_2] [i_2]);
                    var_20 = ((((arr_2 [i_1 - 1] [i_1 - 1]) && ((((arr_8 [i_0] [i_1] [i_1] [i_2]) ? (arr_7 [i_0]) : 2834219817))))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_13 [i_0] [i_1] [i_3] = (((arr_3 [i_1 - 3] [i_1] [i_1 - 1]) ? (((((arr_12 [i_0] [i_1]) - (arr_11 [i_0]))) - var_3)) : ((((((((arr_7 [i_0]) >= (arr_6 [i_0] [i_1]))))) & (var_6 + 1))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_21 = 6156306458184760541;
                                var_22 = 255;
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_3] [i_1] = ((((((arr_14 [i_0] [i_0] [i_3] [i_1]) ^ (arr_18 [i_1 - 3] [i_1] [i_1] [i_1 - 2])))) ? ((((!(arr_8 [i_1 + 1] [i_1 - 3] [i_1 - 2] [i_1 - 3]))))) : (arr_2 [i_0] [i_3])));
                }
            }
        }
    }
    var_23 = (min(var_12, ((((min(var_13, var_11))) ? (var_10 + var_7) : -61012))));
    var_24 = var_7;
    var_25 = 19;

    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = ((((min((max((arr_20 [i_6]), (arr_21 [i_6]))), (arr_21 [i_6])))) ? (arr_20 [i_6]) : (arr_21 [i_6])));

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_26 = -20256;
            arr_25 [i_6] [i_6] = (!-1);
            arr_26 [i_6] = ((((((((var_11 ? 2834219817 : 1))) ? 31 : var_8))) ? var_18 : var_0));
            arr_27 [i_6] = arr_20 [i_6];
            arr_28 [i_6] = ((7546 ? 4953467004334091341 : 19047));
        }
    }
    #pragma endscop
}
