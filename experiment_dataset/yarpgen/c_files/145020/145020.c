/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_3 [i_0] [1] [i_0]);
                arr_6 [i_1] [i_0] = (245 / 49830);
            }
        }
    }
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_15 = (arr_13 [i_2]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {

                            for (int i_6 = 4; i_6 < 12;i_6 += 1)
                            {
                                arr_24 [i_2] [i_2] [i_4] [i_5] [i_2] = 15702;
                                arr_25 [i_2] [i_2] [i_3] [i_4] [2] [i_6] = (min((((((((arr_19 [i_6] [i_5] [i_4] [i_3] [i_2] [i_2]) ? (arr_2 [i_2] [i_3] [i_6]) : (arr_22 [i_2] [i_2] [i_4] [8])))) || ((5402577334297020784 && (arr_1 [i_3])))))), (arr_18 [i_2] [i_3] [2] [i_5])));
                            }
                            /* vectorizable */
                            for (int i_7 = 4; i_7 < 12;i_7 += 1)
                            {
                                arr_28 [i_2] [10] [10] [10] [i_7] [2] [13] = -5597779869586980757;
                                var_16 = (arr_20 [i_2] [i_3] [i_7 - 1] [i_7 - 1] [i_7 + 1]);
                                arr_29 [i_7] [i_2] [9] [i_2] = (arr_19 [8] [i_7 - 1] [i_3] [i_5] [i_3] [i_5]);
                                var_17 |= (40041 - -5402577334297020804);
                            }

                            for (int i_8 = 0; i_8 < 14;i_8 += 1)
                            {
                                var_18 = ((((max((arr_30 [i_3]), (min(0, 22523))))) / (arr_22 [i_8] [i_5] [i_3] [i_3])));
                                arr_32 [i_2] [2] [i_2] [i_5] [i_8] [i_4] [2] = (max((arr_3 [i_4] [i_4] [i_8]), (min((min(52, (arr_8 [i_3]))), 5402577334297020818))));
                                arr_33 [i_8] [i_5] [2] [i_4] [i_2] [i_2] [i_2] = (((min((arr_0 [i_8]), (arr_0 [i_4]))) + ((-(arr_0 [i_4])))));
                                var_19 = arr_21 [i_4];
                            }
                            arr_34 [i_2] [i_2] [i_4] [i_5] = (arr_7 [i_5]);
                            arr_35 [8] [i_3] [i_3] [i_3] [9] [i_5] = arr_0 [i_4];
                            var_20 = (min(11424156664329989240, 1));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
