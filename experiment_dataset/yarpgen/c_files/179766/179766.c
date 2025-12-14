/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_8;
    var_11 -= (max((((var_8 ? (var_8 == var_6) : (var_0 <= var_2)))), ((var_3 ? (max(var_9, 4508452387399043134)) : var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 -= (arr_0 [i_1]);
                arr_7 [i_0] = ((126 ? 9144910857896110641 : (-127 - 1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_13 = (min(var_13, var_0));
                                arr_14 [i_1] [i_2] [i_0] [i_4] = var_9;
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = arr_10 [i_4] [i_3] [i_2] [5] [i_4];
                                arr_16 [i_0] [i_0] [i_2] [i_3] [4] = var_1;
                            }
                            for (int i_5 = 1; i_5 < 18;i_5 += 1)
                            {
                                var_14 -= ((209 ? (((arr_10 [i_1] [i_1] [i_5 + 1] [i_1] [1]) * (arr_10 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]))) : 96));
                                var_15 -= (arr_1 [i_3] [i_1]);
                                arr_20 [i_1] [i_0] [i_5] = (max(((min(var_6, var_5))), (arr_17 [10] [i_0] [8] [i_3] [i_0])));
                                arr_21 [i_0] [i_0] = ((-2278 % ((min(60, 211)))));
                            }
                            var_16 = (max(var_16, ((var_5 + (max((arr_17 [i_0] [i_1] [i_2] [i_1] [i_1]), (arr_17 [i_0] [i_1] [i_2] [i_3 - 1] [i_1])))))));
                            var_17 = (max(var_17, var_9));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
