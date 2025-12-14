/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [13] [i_0] = (arr_2 [10]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 |= (((arr_10 [10] [i_4] [i_4] [i_4] [i_4] [i_4 + 1]) ? (arr_10 [1] [1] [i_4] [i_4] [i_4] [i_4 + 1]) : ((((arr_10 [1] [i_4] [i_4 + 1] [i_4] [i_4] [i_4 - 1]) + (arr_10 [i_4] [i_4] [0] [i_4] [4] [i_4 - 1]))))));
                                arr_15 [1] [i_3] [i_3] [1] [1] = ((var_3 & ((((arr_0 [i_3]) ? (((arr_8 [i_0]) >> (1910886540 - 1910886522))) : -20184)))));
                            }
                        }
                    }
                    arr_16 [i_2] [6] [6] [i_0] = (!1685554194122084051);

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_18 += ((((max((max(-20184, 20185)), ((((arr_0 [i_1]) < 173)))))) >= ((max(20161, 23727)))));
                        arr_19 [i_5] [i_2] [i_1] [2] = ((-(0 >= 4)));
                        arr_20 [12] [i_5] [i_5] [i_2] [i_1] [i_0] = (max(((((min((arr_12 [i_5] [i_5] [i_2] [8] [i_5]), -809085850))) * ((var_2 ? var_11 : 1125899638407168)))), var_12));
                        var_19 = (min(((~((var_3 | (arr_18 [i_5]))))), (((-5 | (((var_10 + 2147483647) >> (var_3 - 3536510189))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
