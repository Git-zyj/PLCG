/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((max(((min((arr_15 [i_0] [i_0] [i_3] [i_3]), -30378))), (max((arr_15 [i_0] [i_1] [i_2] [i_4]), var_0)))))));
                                var_19 = -0;
                                var_20 = (max(var_20, (((~(~var_15))))));
                                arr_16 [i_0] [3] [i_2] [i_2] [i_3] [i_3] = (min((((arr_0 [i_2]) != var_9)), ((var_7 >= ((max(1562080175, 3874)))))));
                            }
                        }
                    }
                    var_21 = ((!((max((arr_13 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2]), (arr_13 [i_0] [i_2] [i_2] [i_0] [i_1] [i_1]))))));
                }
            }
        }
    }
    var_22 = ((2732887120 ? 2732887121 : 1562080175));
    var_23 = (min(var_23, var_4));
    #pragma endscop
}
