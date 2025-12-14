/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, 1));
    var_19 = (max(((max(var_1, var_16))), ((var_16 ? var_6 : (var_14 == 63)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (var_14 || 0);
                var_21 = ((((var_8 ? (((max(0, var_14)))) : (arr_0 [i_1]))) | ((min(((var_11 ? var_7 : var_17)), 0)))));
                var_22 += (max(1, (max((min(var_14, 1)), -21691))));
            }
        }
    }
    var_23 = (var_4 ? (min(((var_12 ? 471002112471298126 : -17739)), (var_13 > 284067155))) : var_3);
    #pragma endscop
}
