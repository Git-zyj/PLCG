/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (min(-88, (var_3 << var_2)));
    var_16 ^= (min(var_3, var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = (((((1 << (((arr_0 [i_0]) - 124802894084322823))))) ? (((arr_6 [i_2]) ? (arr_3 [i_0]) : (arr_7 [i_0] [i_0] [i_1] [i_0]))) : (arr_3 [i_0])));
                    var_17 -= ((((min((arr_6 [i_2]), (arr_6 [i_1 - 1])))) != (((arr_6 [i_0]) / var_4))));
                }
            }
        }
    }
    var_18 = ((((((var_5 - var_5) * var_9))) ? ((var_2 ? ((var_9 ? var_6 : 2989500843)) : -var_1)) : ((min(var_10, (1 | var_2))))));
    var_19 = ((var_7 / (min(var_10, ((var_11 ? var_2 : var_0))))));
    #pragma endscop
}
