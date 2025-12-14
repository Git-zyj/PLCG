/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += -1587244640235752537;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] &= (max((min(((var_1 ? (arr_3 [i_0] [i_1] [i_0]) : var_2)), ((min(var_2, (arr_0 [i_0])))))), ((((-(arr_2 [i_0])))))));
                arr_6 [i_0] = ((((((min((arr_0 [i_0]), var_9))) ? (4370018707767161961 <= var_10) : (arr_4 [i_0] [i_1] [i_0 + 3]))) >= ((min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))))));
                arr_7 [i_0] [i_1] = ((4370018707767161961 ? var_11 : (arr_2 [i_0 - 1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (arr_12 [i_1] [i_4])));
                                arr_15 [i_4] [9] [i_2] [i_1] [i_4] = (min(var_7, (28 && 4370018707767161961)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
