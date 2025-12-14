/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125902
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
                var_14 *= 1072693248;
                arr_6 [i_0] [i_0] [i_1] = ((!(arr_2 [i_0] [i_0] [9])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [11] = -7485282386224367961;
                            var_15 = ((((((arr_3 [i_0] [9] [i_2]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((arr_7 [i_0] [i_0] [8]) ? var_12 : var_1))))) ? ((((min(-6187, var_13))))) : ((~(arr_9 [i_0] [i_1] [i_1])))));
                        }
                    }
                }
                arr_14 [i_0] [i_0] = ((!((((arr_10 [i_0] [i_0] [i_0]) ? (arr_10 [1] [1] [i_0]) : (arr_5 [i_0] [i_1]))))));
            }
        }
    }
    var_16 = (((var_13 ? -22421 : (max(var_9, var_5)))));
    var_17 -= (var_12 == var_12);
    #pragma endscop
}
