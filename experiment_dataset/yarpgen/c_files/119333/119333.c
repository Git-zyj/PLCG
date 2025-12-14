/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_12 ? 644280316643274965 : var_9)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 -= (min((arr_2 [i_0 + 4] [i_0 + 4] [i_3 - 2]), ((-(arr_4 [i_0 + 1])))));
                            var_19 = (max(var_19, (((((((arr_2 [i_0 + 1] [6] [i_0]) ? ((var_12 ? (arr_0 [i_1] [i_1]) : (arr_9 [i_0] [i_0] [4]))) : (arr_1 [i_3 + 1])))) ? (((arr_0 [i_3 - 3] [i_2 + 2]) ? (arr_1 [i_2]) : (min(var_3, (arr_8 [i_0] [i_2 + 2] [i_3 + 1] [i_0]))))) : var_5)))));
                        }
                    }
                }
                var_20 = (((arr_4 [i_0 - 2]) ? (((arr_5 [6] [i_0 + 2] [i_0 + 2] [i_1 + 1]) ? var_1 : (arr_5 [i_0] [i_0 + 3] [0] [i_1 + 1]))) : ((min((arr_5 [i_0] [i_0 + 3] [i_0] [i_1 + 1]), (arr_5 [i_0] [i_0 - 2] [i_0] [i_1 + 1]))))));
                var_21 -= ((4684751677477908897 ? -72 : 17802463757066276651));
            }
        }
    }
    #pragma endscop
}
