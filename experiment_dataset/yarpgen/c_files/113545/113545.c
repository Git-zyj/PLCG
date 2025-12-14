/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(var_3, (var_2 || var_13)))) ? var_2 : (var_10 || var_9)));
    var_15 = (var_8 < ((var_2 ? var_7 : var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [6] [i_0] = (max(((((arr_7 [9] [i_1 - 1] [i_2]) < (min((arr_5 [i_0]), (arr_5 [i_0])))))), (((arr_4 [i_1 - 1] [i_1 - 1]) & var_7))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 = var_0;
                                var_17 = var_9;
                                var_18 = (min((arr_5 [i_2]), ((min((min((arr_11 [8] [8] [9] [8]), var_8)), (arr_11 [i_0] [i_1 - 1] [i_2] [i_0]))))));
                                var_19 = (arr_12 [i_0] [i_0] [4] [i_0]);
                                arr_17 [i_0] [i_4] [i_0] [i_3] [4] = ((var_10 ? (-32767 - 1) : (max(((min((arr_2 [i_0]), var_7))), (max((arr_5 [i_4]), (arr_6 [i_3])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
