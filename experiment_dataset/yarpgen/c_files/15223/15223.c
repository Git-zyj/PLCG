/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(16, 8890);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_5;
                arr_6 [12] |= 8890;
                arr_7 [i_0] [10] |= ((((max(var_13, (arr_1 [6])))) ? (!var_12) : -var_15));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] [i_0] [3] [i_0] [i_0] = var_15;
                            var_17 = (~var_10);
                            var_18 = 16;

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_19 = ((~((var_3 ? (arr_10 [i_4] [i_4] [i_2] [i_1 - 1] [i_0 - 1]) : ((max((arr_1 [i_0]), var_11)))))));
                                var_20 = (~65523);
                                var_21 = (min(var_21, 63415));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_22 = ((var_15 ? (max(((8 ? var_13 : 8878)), var_5)) : ((var_15 * ((var_6 ? 8 : var_1))))));
                            arr_23 [i_5] &= (min(((min(var_14, (max(var_5, (arr_17 [i_0 - 1] [i_1] [i_6 + 2] [i_0 - 1] [i_1])))))), 8890));
                            arr_24 [8] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = var_3;
                            arr_25 [i_1] [i_5] [i_5] &= (((var_2 > 8890) ? (max(-19, ((var_13 ? 65024 : var_6)))) : ((max(var_1, (arr_17 [i_6 - 1] [3] [i_1 + 2] [i_0 + 1] [4]))))));
                            var_23 = 65504;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
