/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max((65535 == 62197), var_11))) ? ((((((-127 - 1) ? var_7 : 127))) ? (((min(36640, -16)))) : ((var_3 ? var_12 : var_17)))) : (min(14020369729035966601, (var_16 / var_15)))));
    var_19 = (min(var_19, (!var_16)));
    var_20 = (max((max(9319566128865427379, 116)), (((var_15 ? var_7 : var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = var_9;
                var_22 = (((max((min((arr_3 [3] [3]), (arr_5 [i_0]))), (arr_0 [i_1]))) != (((max(63744, (arr_0 [i_0 - 2])))))));
                var_23 = (((max((15831 * var_9), (((arr_4 [i_0] [i_1] [i_1 - 3]) ? 4731058010717331490 : 9)))) == (((((!-6) || ((((arr_2 [i_0 - 1]) ? -119 : (arr_1 [i_0]))))))))));
            }
        }
    }
    #pragma endscop
}
