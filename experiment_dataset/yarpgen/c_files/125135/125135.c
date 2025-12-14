/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_18, var_5));
    var_20 = var_2;
    var_21 = ((10733 || (2146959360 > 115)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((-(~8950248958696393754)));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1 - 3] [i_1] [i_2] [i_1] [i_3] = ((!((((((126 ? var_14 : (arr_6 [i_1] [i_1 - 1] [8])))) * (var_1 / var_16))))));
                        var_22 = (arr_1 [i_1 - 3]);
                        var_23 = (((max((!0), 54530))) ? (((arr_0 [i_3]) ? 108 : (((arr_0 [10]) ? var_18 : var_13)))) : (var_11 || -21882));
                        arr_11 [i_0] [i_1 + 3] [21] [i_3] [8] [i_1] = (~((~(~162))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_14 [i_1] [i_2] [i_1 - 1] [i_1] = (((max(54530, 2028895424)) + (!-116)));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            arr_19 [i_1] [i_2] [i_4] [i_5 - 1] = ((var_18 >= (arr_9 [i_5] [i_5 + 1] [i_5] [i_5 + 2] [i_5 + 2] [i_5 + 4])));
                            arr_20 [i_1] = ((22843 ? 0 : (arr_2 [i_0])));
                            var_24 = 51107;
                            arr_21 [i_0] [i_1 + 1] [16] [i_4] [i_1] = (arr_8 [i_0] [i_0] [i_0]);
                            var_25 = (((arr_6 [i_1] [i_2] [i_5]) ? 3 : var_15));
                        }
                        arr_22 [i_0] [i_1] [i_2] [i_2] [i_4] = ((((min((min(var_8, var_5)), (min(var_5, var_14))))) && (((((max(-32, (arr_8 [i_1 - 3] [i_2] [i_4])))) ? 21488950 : (arr_1 [i_0]))))));
                    }
                    arr_23 [4] [i_1] = 0;
                    var_26 = (min((((arr_8 [2] [i_1 + 2] [i_1]) ? -5449610806311483836 : (arr_8 [i_1] [i_1 - 3] [i_1]))), ((max(var_5, 2007074116)))));
                }
            }
        }
    }
    #pragma endscop
}
