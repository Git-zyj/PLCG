/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((-(!var_13))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_19 = (((arr_5 [i_2 + 1] [i_2 + 2] [i_2 + 2]) ? 112 : 1));
                    var_20 = (6330804781983700447 * 0);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = (~9053953232263678);
                                arr_16 [i_3] [i_1] [i_2 + 2] [i_3] [i_4] [i_2] = 10364953308722241380;
                                var_22 = (max((var_5 + 11882), 11858));
                                var_23 = (min((max((arr_15 [i_2 + 2] [i_3] [i_2] [i_4] [5] [i_2]), (arr_15 [i_2 - 1] [i_1] [i_1] [i_3] [5] [i_0]))), ((-(((arr_11 [i_0] [i_0] [i_3] [i_4]) ? (arr_6 [i_0] [4] [2]) : -15))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
