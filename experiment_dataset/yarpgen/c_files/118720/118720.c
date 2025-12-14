/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (((min(var_9, ((0 ? var_2 : var_8)))) != var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [5] [i_1 - 1] [i_1] = ((!(((max(4620, var_1))))));
                            var_11 = (max(var_11, (((-(max((arr_10 [i_2] [6] [i_2] [6]), 31757)))))));
                        }
                    }
                }
                var_12 = (min(var_12, (((((((arr_8 [i_1 - 1] [i_1 - 1]) ? (arr_8 [i_1 + 1] [i_1]) : (arr_8 [i_1 - 1] [3])))) && ((((arr_8 [i_1 + 2] [6]) ? (arr_8 [i_1 + 3] [i_0]) : (arr_8 [i_1 + 3] [i_1])))))))));
            }
        }
    }
    #pragma endscop
}
