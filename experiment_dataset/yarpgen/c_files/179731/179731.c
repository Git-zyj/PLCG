/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [10] &= 49297;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = ((((((arr_7 [1] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 - 1]) ? (arr_6 [i_2] [i_2 + 1] [i_2] [i_2 - 1]) : var_6))) ? (((arr_5 [i_2] [14] [14] [i_2 - 1]) + var_10)) : (((-(arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 3] [i_2 - 1] [i_2] [15]))))));
                            var_20 = (max(49297, 16239));
                            arr_9 [i_3] [17] [i_0] [i_0] [i_0] = ((60 == 16239) ? (max((((arr_3 [i_3]) ? var_1 : var_9)), (arr_5 [8] [0] [8] [0]))) : var_5);
                        }
                    }
                }
                var_21 = ((((max((arr_8 [i_0] [i_1] [i_1] [3] [i_1] [i_0]), var_5))) ? ((max(255, (arr_8 [i_1] [i_1] [i_0 - 1] [13] [i_0 - 1] [i_0 - 1])))) : (((arr_5 [i_0] [i_0] [i_1] [i_0]) ? (arr_8 [i_1] [i_0] [9] [i_0] [i_0] [i_0]) : (arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_1])))));
                arr_10 [i_0] = ((-(var_11 && var_6)));
                var_22 = ((~((((min(244, var_18))) ? 11185 : (arr_6 [i_0] [7] [i_0] [i_0 - 1])))));
            }
        }
    }
    var_23 -= var_3;
    var_24 = var_12;
    #pragma endscop
}
