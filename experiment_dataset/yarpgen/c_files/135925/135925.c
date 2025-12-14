/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (var_4 + var_8)));
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = ((!(arr_1 [16])));
                arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 2] = ((!(((arr_1 [i_1 + 2]) || (arr_1 [i_1 - 2])))));
                var_13 = var_1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, var_8));
                            var_15 &= (((-127 - 1) ^ 8445));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_16 -= (((arr_0 [13] [i_1 - 1]) & (!var_6)));
                                arr_17 [i_0] [i_0] [i_2] [i_0 + 1] [i_0] [16] [16] = (arr_10 [i_0]);
                            }
                            for (int i_5 = 3; i_5 < 22;i_5 += 1)
                            {
                                var_17 = (min(var_17, ((max(var_7, var_7)))));
                                var_18 = ((((((~(arr_6 [i_0]))) + (((!(-127 - 1)))))) * ((~((-(arr_16 [i_2] [i_2] [i_2])))))));
                                var_19 = (arr_0 [i_0 + 1] [16]);
                            }
                            arr_21 [i_0] [i_2] = (arr_14 [i_3] [i_3] [i_3] [i_3] [i_3]);
                            var_20 = (arr_19 [i_0] [i_2] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [8]);
                        }
                    }
                }
                var_21 -= ((-119 ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : var_5));
            }
        }
    }
    #pragma endscop
}
