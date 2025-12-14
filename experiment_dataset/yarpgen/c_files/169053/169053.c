/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = (((arr_1 [i_1 + 1] [i_2 + 1]) && (arr_1 [i_1 + 1] [i_2 + 1])));
                                var_13 ^= ((-(arr_2 [i_0] [i_3] [i_1])));
                            }
                        }
                    }
                    var_14 += ((!((((arr_5 [i_1 - 2] [i_1 - 2]) ? (arr_5 [i_1 + 1] [i_1 - 1]) : (arr_8 [i_2 + 1] [i_1] [i_1] [i_1] [i_1]))))));
                    var_15 = (min(((9386980400100811909 ? 237 : 1722177377374089795)), (max(var_11, (((1 ? (arr_9 [i_0]) : 1)))))));
                    arr_10 [i_0] [i_0] [i_0] = ((((arr_2 [i_0] [i_0] [i_0]) < (arr_8 [i_2] [i_0] [i_2] [i_2] [i_2]))));
                }
            }
        }
    }
    var_16 = ((var_0 & ((((max(var_3, var_8))) ? var_2 : var_6))));
    var_17 = var_11;
    var_18 = var_10;
    var_19 = (max((var_8 / var_5), ((var_0 ? (((var_5 ? var_5 : 9))) : 16210773364658651404))));
    #pragma endscop
}
