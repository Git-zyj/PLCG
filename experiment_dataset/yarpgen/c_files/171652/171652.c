/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = -var_8;
                arr_4 [i_0] [i_0] [8] = (((arr_2 [i_0] [0] [i_1 + 1]) ? var_9 : 1793889631));
            }
        }
    }
    var_18 = ((((((var_5 ? var_9 : var_9))) ? var_1 : ((var_9 ? -113 : var_6)))));
    var_19 |= ((-((((~112) || 217)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_11 [8] [i_3] = ((((3705230502 ? (var_5 >= 0) : ((var_1 ? (arr_5 [i_3]) : -93))))) ? ((var_15 ? var_10 : (~255))) : var_8);
                var_20 = (min(var_20, ((((arr_6 [i_2]) ? (((-((-(arr_9 [0] [0])))))) : (arr_5 [i_3]))))));
                var_21 -= -3640022970537851133;
                arr_12 [i_3] [i_3] = var_9;
            }
        }
    }
    #pragma endscop
}
