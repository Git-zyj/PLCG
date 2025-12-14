/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_21 = var_3;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = (((arr_5 [i_3] [i_3] [i_3] [i_3 - 1]) < var_12));
                        var_22 = 29724;
                        var_23 *= (((var_2 ? -29729 : var_1)));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_24 = (-var_18 < 29724);
                            var_25 = ((var_6 < (arr_13 [i_0] [i_4] [i_0 - 2] [i_3 - 2] [i_4])));
                            var_26 &= (((arr_13 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_3 + 4] [i_3 + 4]) * (arr_5 [i_0] [i_1] [i_2] [i_4])));
                            var_27 *= (((arr_6 [i_0] [i_3 + 4] [4]) / var_1));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_28 = ((var_4 >> (3880580421 - 3880580391)));
                            arr_16 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_2] = (((((29735 ? (arr_5 [i_0] [i_1] [i_2] [0]) : 3880580421))) ? (arr_9 [i_0 + 1]) : var_7));
                        }
                    }
                }
            }
        }
        var_29 = 414386874;
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_30 *= (max(var_7, (max((arr_19 [i_6]), var_4))));
        arr_20 [i_6] = ((((arr_19 [i_6]) ? (arr_19 [i_6]) : 866407867)));
    }
    #pragma endscop
}
