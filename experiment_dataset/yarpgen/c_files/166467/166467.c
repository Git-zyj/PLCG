/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_10 & (var_2 / var_10))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (min(((var_9 ? (arr_1 [i_0]) : (arr_0 [i_0]))), (((268435455 < (arr_0 [i_0]))))));
        arr_2 [i_0] = (max((arr_1 [i_0]), ((var_9 ? (-268435458 - 0) : var_8))));
        var_16 = (max(17300559354052146144, (((min(4228176622, (arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = -51;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [9] [i_4] [i_2] [i_3] [i_4] [i_0] [i_3] = var_4;
                                var_18 = (max(var_18, (((((var_0 / (((var_4 / (arr_10 [i_0] [i_1] [8] [i_0] [1] [i_4])))))) > (arr_10 [1] [i_1] [i_1] [1] [i_4] [i_4]))))));
                                var_19 = (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]);
                                var_20 = (min(var_20, (((arr_4 [i_2] [i_0]) ? (((arr_6 [i_4] [i_4] [i_4] [i_4]) ? ((var_3 ? 11890451845669138072 : 37)) : -6608469977143897391)) : (arr_3 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
