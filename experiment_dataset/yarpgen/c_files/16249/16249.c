/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((~var_6), (~var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 21;i_4 += 1)
                            {
                                var_18 += (max(((~(arr_16 [i_0] [i_1 + 2] [i_2 - 2] [i_0] [i_4 + 1] [i_2 - 1] [i_3 + 2]))), (arr_15 [i_4 - 3] [i_0] [i_3 - 1] [8] [i_1] [i_0])));
                                arr_17 [i_4] [i_4] [i_4] [i_4] [1] [i_4 - 2] = (((((~var_8) < (arr_7 [i_3 + 2] [i_2 - 2]))) ? var_7 : (~-var_1)));
                                var_19 = (((min((arr_11 [i_1 + 1] [i_3 + 1]), (arr_11 [i_1 - 1] [i_3 + 2]))) - (arr_11 [i_1 + 3] [i_3 - 1])));
                                arr_18 [i_0] [i_1] [i_4] [i_0] [i_4 + 1] = (min(((~(min((arr_2 [i_3] [i_4 - 3]), (arr_10 [i_0]))))), ((min(74791480, 1)))));
                                arr_19 [i_0] [i_1 + 1] [i_4] [i_3 - 1] [i_4 - 2] [i_4] = ((((~(arr_9 [i_1 + 1]))) & (arr_3 [i_2 + 1] [i_1 + 2] [i_1 + 2])));
                            }
                            for (int i_5 = 1; i_5 < 1;i_5 += 1)
                            {
                                var_20 *= ((~(((arr_13 [13] [13] [i_1 + 1] [i_5 - 1] [i_5 - 1]) & var_15))));
                                var_21 = (~-109);
                                var_22 = min(((~(arr_21 [i_1] [i_1 - 1] [i_1] [i_2] [i_2 + 3] [i_2]))), (~var_3));
                                arr_24 [i_0] [i_5] [i_2 - 2] [i_2] [i_3 + 2] [i_2] = (arr_13 [i_0] [i_1] [i_2 - 2] [i_3] [i_3]);
                            }
                            var_23 += (((~(arr_14 [10] [i_1] [i_1] [i_1] [i_0]))));
                            arr_25 [i_0] [i_0] [i_3] = ((~(min(var_11, var_8))));
                            var_24 = (~1);
                        }
                    }
                }
                var_25 = (arr_23 [i_0]);
                var_26 = (min((((arr_20 [16] [i_1] [i_0] [i_1 + 3] [i_0] [i_0]) ? var_7 : var_2)), (arr_20 [i_0] [i_1 + 3] [i_1 + 1] [i_1 + 2] [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
