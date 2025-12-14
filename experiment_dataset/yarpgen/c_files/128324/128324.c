/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min((!536869888), (min(var_13, var_15))))) && 1798221766729241017);
    var_17 = (min(var_17, (((max(var_7, ((0 ? var_11 : 536869861))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 += ((max((((arr_2 [i_0]) ? (arr_2 [i_0]) : -536869864)), (-5330629263500820140 > var_6))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [1] [i_2] = 655623418;
                            var_19 = (min(var_19, var_12));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                arr_14 [i_0] [i_0] [i_3] [i_2] [i_2] [i_4] |= var_15;
                                var_20 = (min(var_20, 1));
                                var_21 += (((arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_1 - 1]) ? (arr_4 [8] [8] [i_0]) : 252));
                            }
                            var_22 *= (arr_3 [i_0] [i_1 - 1]);
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_23 -= ((((-5330629263500820140 ? var_2 : var_6))) ? ((var_11 / (arr_15 [i_0] [i_1] [i_0]))) : (arr_20 [i_1 - 1] [i_1 - 1] [i_6] [i_1 - 1] [i_6]));
                        arr_21 [i_0] [i_0] [i_0] [i_0] = ((+(((arr_18 [i_0] [i_0] [1]) ? var_14 : 3875))));
                        var_24 = ((var_12 | (arr_15 [i_1] [i_1 - 1] [i_1 - 1])));
                        arr_22 [i_0] [i_0] [i_0] [2] = var_14;
                    }
                    var_25 *= var_4;
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_26 = (max(var_26, ((max(-5330629263500820140, ((min((arr_17 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1])))))))));
                    var_27 = (((min((((arr_8 [i_7] [7] [i_1] [i_0]) % (arr_8 [i_7] [i_1] [i_1] [i_7]))), var_1)) > (arr_2 [i_1])));
                }
            }
        }
    }
    var_28 = (((var_3 / var_9) * ((0 ? ((var_8 ? var_5 : var_3)) : (((min(1, 3887))))))));
    #pragma endscop
}
