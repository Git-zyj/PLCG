/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min(46315, (~63))), ((((~var_5) >= var_18)))));
    var_20 = (!var_13);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = ((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 46504);
        var_22 = (((26477 / var_14) ? 26456 : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_23 = ((!((max((arr_2 [i_1 - 2] [i_1 + 2]), (arr_2 [i_1] [i_1 + 2]))))));
        arr_5 [i_1 + 2] = arr_2 [i_1 + 2] [i_1 - 2];
        arr_6 [i_1] = (arr_4 [i_1 + 1]);
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_24 = (((arr_7 [i_2 - 1]) ? ((((min((arr_3 [i_2] [i_2]), -26478))) ? 26456 : (max((arr_1 [i_2 - 1] [i_2]), (arr_9 [3]))))) : -26493));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_25 = ((var_11 >> (-26460 + 26470)));

                    for (int i_5 = 4; i_5 < 7;i_5 += 1)
                    {
                        var_26 = ((((((arr_15 [i_2 + 1] [i_2] [i_2]) ? (arr_18 [i_2]) : var_10))) ? ((-(arr_11 [i_5 - 3] [i_5 + 4] [i_5 - 1]))) : (arr_7 [i_2 - 1])));
                        var_27 *= (arr_16 [i_5 - 1] [i_5 + 3] [i_5 + 2] [i_2 + 1]);

                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            arr_23 [i_2] [i_3] [5] [i_5] [i_4] = (min(var_15, (arr_9 [i_6 - 1])));
                            arr_24 [i_2 - 1] [i_4] [i_5 + 4] [i_6] = (~34230);
                            var_28 = (max((arr_9 [i_2]), ((((arr_21 [i_5] [i_5 - 2] [i_5 + 4] [i_6 - 1] [i_6]) && 46)))));
                        }
                        var_29 = (((((((arr_22 [i_2] [5] [i_2 + 1]) ? 3840 : 9223372036854775807))) ? (min((arr_20 [10] [10] [i_4] [i_5]), -26493)) : (max(26493, (arr_18 [i_4]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
