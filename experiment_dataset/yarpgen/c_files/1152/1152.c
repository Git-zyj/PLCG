/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = var_9;
                var_20 ^= ((!(1 < 2430916797)));
                var_21 = (((((var_16 & (((arr_5 [i_0] [i_0] [i_0]) ? var_8 : var_12))))) ? var_17 : (max((max(4269891585, (arr_2 [i_0]))), (max(127, (arr_4 [i_0] [i_0])))))));
            }
        }
    }
    var_22 &= (max(var_17, (((!(((var_11 ? var_17 : var_0))))))));
    #pragma endscop
}
