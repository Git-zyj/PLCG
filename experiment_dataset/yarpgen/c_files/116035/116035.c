/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_7 ? var_14 : ((var_10 ? (max((-9223372036854775807 - 1), 62422)) : (!var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [7] [i_1] = var_3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 11;i_4 += 1)
                            {
                                arr_14 [i_2] [i_1] [i_2] [i_1] [i_2] = (((127 + 121) <= var_16));
                                arr_15 [i_2] [i_3] [7] [i_0 - 2] [i_2] = (max(((-((9223372036854775807 ? 2799010445 : -125)))), (arr_7 [13] [3] [i_2] [i_3])));
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                arr_18 [i_0] [i_1] [i_2] [5] [i_2] [i_3] = (min((arr_16 [i_0] [i_0] [i_0] [3] [i_0] [i_0]), -9223372036854775797));
                                var_19 = (((arr_5 [i_1 + 1] [i_1] [i_1]) << ((((((var_12 ? var_7 : (arr_5 [i_1 + 1] [i_1 + 1] [i_1]))) + 750)) - 4))));
                            }
                            var_20 = 41297;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
