/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((~(var_2 % var_4)))) != (((var_10 < var_8) ? var_10 : (max(var_6, 14819911644283929241))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] = 0;
                    var_12 = ((((max(2058082121, 2058082142))) ? (~-15412) : ((~(max(14819911644283929234, 1))))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_13 = ((((var_9 & (var_3 ^ 14523970800732873521))) / (((0 ? (2058082122 > 17595) : 54692)))));
                        var_14 = var_9;
                    }
                    arr_13 [i_2] = (min(((((((arr_4 [i_0]) ? var_10 : (arr_6 [i_1] [i_2])))) ? 1 : ((47940 ? (arr_10 [i_2] [i_2]) : (arr_11 [i_2] [i_0] [i_1] [i_1 + 1] [i_1] [i_2]))))), ((max((arr_6 [i_0] [i_2]), (var_3 - var_8))))));
                }
            }
        }
    }
    #pragma endscop
}
