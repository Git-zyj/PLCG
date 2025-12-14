/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = ((var_7 ? 1 : (min((!var_1), (var_1 | var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = ((-(max(((var_6 ? (arr_1 [i_0]) : var_2)), (arr_3 [16])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_18 = (((arr_1 [i_2]) > (min((arr_7 [i_0] [i_2] [i_2]), (min((arr_1 [i_3]), (arr_6 [i_2] [i_3])))))));
                            var_19 = (arr_8 [i_0] [i_1 - 1] [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
