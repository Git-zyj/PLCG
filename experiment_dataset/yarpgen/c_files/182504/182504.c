/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (max((arr_5 [i_1]), ((((((arr_4 [i_0 - 3]) ? var_3 : var_6))) ? (arr_3 [i_0 - 2] [i_0 - 4]) : ((min(-62, -123)))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 = (((0 ? ((-(arr_3 [i_0] [i_0]))) : -125)) / ((+((var_10 ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_0]))))));
                            var_16 = ((arr_2 [i_2] [i_0]) ? ((-(arr_9 [i_3] [i_0 - 1] [i_0 - 1]))) : ((max((arr_3 [i_0 - 2] [i_2 + 1]), (arr_3 [i_0 - 1] [i_2 + 2])))));
                            arr_13 [i_0] [i_1] [i_2] [i_0] = (arr_4 [i_0]);
                        }
                    }
                }
                arr_14 [i_0] [i_0] = ((((arr_11 [i_0 - 2]) ? (arr_11 [i_0 - 1]) : (arr_11 [i_0 - 4]))));
            }
        }
    }
    var_17 &= (max(-var_4, (max(((max(var_9, 1))), ((var_5 ? var_12 : var_6))))));
    #pragma endscop
}
