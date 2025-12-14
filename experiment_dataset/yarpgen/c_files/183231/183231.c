/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_10 ? 11841701886626389060 : var_8)) + var_8)) / (var_16 - -var_6)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_3;
                                var_20 = ((((min(var_8, var_15))) >= (min((arr_3 [i_0] [i_0]), ((var_10 ? (arr_2 [i_4]) : (arr_10 [i_0] [i_0] [i_2] [i_3 - 1] [i_0])))))));
                            }
                        }
                    }
                    arr_15 [i_0] = (arr_7 [i_2 + 2] [i_1] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
