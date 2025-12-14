/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 -= ((((((((var_3 ? 3760670361 : -100))) ? ((63 ? var_2 : var_5)) : ((var_12 ? 99 : var_9))))) ? (((3993894949 ? 11060 : -100))) : var_10));
                var_15 = (((var_4 & var_3) ? (((var_10 ? var_3 : var_10))) : ((var_12 ? var_13 : 0))));
                arr_6 [i_1] [i_1] [i_1] = -115;
            }
        }
    }
    var_16 &= ((((((54476 - 1) ? ((var_1 ? 64787 : var_11)) : var_11))) ? ((-var_7 & ((24 ? var_2 : var_10)))) : ((var_9 ? var_11 : ((var_1 ? var_7 : var_3))))));
    #pragma endscop
}
