/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 &= 19897;
    var_18 = (max(var_11, (-var_3 + var_2)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = ((-((var_4 & (arr_0 [i_0])))));
                    arr_9 [i_0] [i_0] [i_0] [i_1] = (((((!(arr_0 [i_0 + 3])))) << (arr_0 [i_0 - 3])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 -= ((-((((min(var_15, 1))) << (((arr_8 [8] [8]) - 9103024147582954029))))));
                        var_21 = var_2;
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_22 = var_5;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_23 = 32764;
                            var_24 = (((-32764 ? 4740634080574670627 : 9379767828339311287)));
                        }
                        var_25 = (((arr_11 [7] [i_1] [12] [i_2 + 1] [i_4]) & ((max(1, 13706109993134880995)))));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_19 [i_2] [1] [i_1] [7] [1] = -var_13;
                            var_26 += 1;
                            var_27 = (max(var_27, ((max((arr_15 [i_2 + 2] [i_1] [i_0 - 1] [i_4] [i_4]), (arr_18 [i_1] [i_2]))))));
                            var_28 = var_14;
                            var_29 = (max(var_29, ((max((((arr_2 [i_0 - 2]) << ((((~(arr_5 [i_4] [i_4]))) - 2429279185)))), ((~(~var_1))))))));
                        }
                        var_30 = var_1;
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        arr_22 [i_1] [i_2 - 1] [i_1] = 3881710043;
                        var_31 |= (((arr_2 [i_7 + 3]) ? -var_7 : (arr_0 [i_1])));
                        arr_23 [i_0 - 1] [i_1] [i_1] [i_7] = arr_7 [i_1] [i_1] [i_2] [i_7 + 2];
                        arr_24 [16] [14] [16] |= (((arr_0 [i_0 + 3]) ? (arr_14 [16] [i_7 + 2] [i_2 - 1] [8] [i_0 - 2] [16]) : (arr_14 [i_0] [i_0] [i_7] [i_1] [i_0] [6])));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_32 = (min(var_32, (arr_26 [i_8] [i_8] [i_8] [i_8])));
                        arr_29 [i_0] [i_1] [i_1] [i_1] = (arr_10 [5] [i_1] [i_1] [i_1] [i_1] [i_0]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
