/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = arr_1 [i_0];
                arr_4 [i_1] = max(50, -51);
            }
        }
    }
    var_17 = max((((!(((var_15 ? var_10 : var_8)))))), (max((var_1 == var_11), (min(var_9, var_2)))));
    var_18 = (max(var_18, (((-(((((var_3 ? var_4 : var_0))) ? var_3 : ((var_5 ? var_4 : var_12)))))))));
    var_19 = (((var_9 > -var_12) ? ((max((!-69), (-124 && -1)))) : var_12));
    var_20 = ((~((var_10 ? -var_9 : ((var_4 << (var_7 - 103)))))));
    #pragma endscop
}
