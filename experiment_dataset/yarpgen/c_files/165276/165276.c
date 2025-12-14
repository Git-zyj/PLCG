/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((((var_7 ? (65524 * 0) : ((min(var_4, var_11)))))) ? ((((min((-9223372036854775807 - 1), var_2))) ? ((((-9223372036854775807 - 1) <= var_9))) : var_5)) : ((((3193 ? var_4 : var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((var_9 > (!9223372036854775807)));
                var_13 = var_3;
            }
        }
    }
    var_14 = (min(var_6, 76));
    var_15 += ((((((var_2 ? 76 : var_3))) ? var_11 : (min(var_5, 2435288732)))));
    #pragma endscop
}
