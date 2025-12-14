/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, (((+(max((arr_11 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3]), (((var_6 ? var_1 : (arr_4 [i_3 - 1] [i_2] [i_1 - 1])))))))))));
                            var_13 = (((((-(max((arr_6 [i_3 - 1] [i_2] [i_2] [i_0]), 1059474240))))) ? (min(3235493055, (arr_5 [1] [0]))) : (arr_0 [i_3] [i_0])));
                        }
                    }
                }
                var_14 = 3235493069;
            }
        }
    }
    var_15 = (min((((((-251222259 ? var_3 : 14440))) ? ((max(2132835136, var_2))) : (var_9 * 0))), 1));
    #pragma endscop
}
