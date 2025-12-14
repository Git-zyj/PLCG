/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_3 * ((min(var_1, 0)))))) ? (((((55 ? 0 : 0))) ? var_9 : (max(var_11, var_7)))) : (((var_1 ? (~1) : -1548784159)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 -= (((((var_1 ? 1 : (arr_3 [i_2 + 1] [i_0 + 2])))) ? (min(((var_6 ? 0 : 1)), ((((arr_8 [i_0]) || var_4))))) : (~-55)));
                            arr_16 [i_2] [i_1] [i_2] [6] = (min(0, ((var_2 >= (min(2925151255, 1))))));
                            var_15 *= (min(((46 ? 1 : ((1 % (arr_14 [i_0]))))), (((((var_2 ? var_1 : 110)) << ((((7888 ? var_2 : var_3)) + 81)))))));
                        }
                    }
                }
                arr_17 [i_0] [2] = ((((((((var_8 ? (arr_15 [i_0] [1] [i_0] [i_0]) : 1))) ? ((max(637969703, 1))) : ((166 ? (arr_1 [i_0]) : var_10))))) ? (max(((var_11 ? var_11 : var_1)), (0 * var_3))) : (((max((arr_4 [3]), 0))))));
            }
        }
    }
    #pragma endscop
}
