/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_10 = ((!((((arr_5 [i_2 + 1] [i_1] [i_0]) + 105)))));
                            var_11 = (min(var_8, ((2026544795 ? (arr_3 [i_3 + 1]) : ((min(2026544779, var_3)))))));
                        }
                    }
                }
                var_12 &= var_3;
                var_13 = (min(var_13, ((min(((((var_7 ? var_7 : (arr_5 [16] [i_0] [16]))) % (((-(arr_6 [8])))))), -2026544779)))));
            }
        }
    }
    var_14 = ((((((min(2026544779, var_9))) ? ((min(var_4, 1))) : var_0)) - (max(var_2, (((var_8 ? var_5 : 1)))))));
    var_15 = (min(var_15, (((var_3 / ((var_5 ? (min(var_5, -1)) : var_9)))))));
    #pragma endscop
}
