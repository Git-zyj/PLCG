/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((((-906258599 / (arr_2 [i_0] [i_0] [i_2 - 1])))) ? -24814 : 906258598);
                    var_19 |= 906258598;
                    var_20 = (max(var_20, (((-((-(min(-906258582, var_0)))))))));
                }
            }
        }
    }
    var_21 = ((((((!139) ? var_7 : ((min(var_9, var_10)))))) ? (0 - 24953) : (((((var_15 ? 0 : var_14)) == (var_1 || var_11))))));
    #pragma endscop
}
