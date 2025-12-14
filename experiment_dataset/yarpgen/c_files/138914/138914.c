/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((((-(arr_1 [i_1])))) ? ((((90 ? (arr_1 [i_1]) : 1)))) : (min(var_13, (((-127 - 1) / var_10))))));
                var_19 = (max(var_19, ((max(((((var_15 + 9223372036854775807) >> (((arr_2 [i_0] [i_1]) - 118))))), (arr_1 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
