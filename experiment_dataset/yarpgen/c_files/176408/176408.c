/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -12072;
    var_11 = ((var_8 ? var_4 : (min(((var_1 ? var_5 : var_9)), var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_1] [i_1 - 2] = ((-((-(arr_2 [i_1 + 2])))));
                var_12 -= (((((~(-3842 || 3061092491)))) ? ((1236184722 ? var_7 : var_2)) : (max((~var_6), -3842))));
                var_13 &= (((max(var_6, (var_9 - var_1))) ^ ((var_5 ? (arr_1 [i_1 + 1] [i_1 - 2]) : var_3))));
                var_14 = (min(var_14, (~54135)));
            }
        }
    }
    var_15 &= ((65515 ? var_7 : var_1));
    #pragma endscop
}
