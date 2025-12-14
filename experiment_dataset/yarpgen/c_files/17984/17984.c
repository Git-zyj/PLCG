/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (8809089212000068356 >> (((arr_3 [18]) + 1055445754624563235)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 += 18446744073709551603;
                            var_16 = (max(var_16, (((-(arr_1 [i_1 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((var_3 + (max((max(var_0, var_7)), (var_3 % 1563558800510266481)))));
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            {
                var_19 = (max(var_19, ((max(2981365601575097253, var_0)))));
                var_20 = (max(var_20, (arr_8 [i_4] [i_5 - 2] [i_5] [i_5])));
            }
        }
    }
    #pragma endscop
}
