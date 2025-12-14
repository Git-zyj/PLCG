/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = ((((((11584238441701920141 <= (var_7 ^ 17718434793600094466))))) & ((((var_10 ? var_2 : var_2)) * (((0 << (-11743 + 11772))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_0] = ((2396200816 ? 32768 : -5903));
                            var_12 = min((arr_3 [i_2 - 1]), (min((var_0 > var_10), ((var_7 ? var_3 : (arr_7 [i_2] [i_0] [i_0]))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = (((((var_7 ? (728309280109457149 % 427295931429162971) : (var_9 | var_6)))) ? (((((var_8 ? var_8 : var_6)) != var_0))) : ((var_4 << ((((var_4 ? var_5 : var_9)) - 3711271185))))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] = ((max(var_7, ((var_7 ? var_8 : var_5)))));
                            var_13 = ((((((((var_5 ? var_7 : var_10))) ? var_6 : (min(var_2, var_2))))) ? (arr_0 [i_0] [i_0]) : var_6));
                        }
                    }
                }
                var_14 = (((((var_8 ? var_3 : ((var_1 ? var_5 : var_1))))) - (((min(var_2, var_3)) - ((var_9 | (arr_10 [i_0] [i_0] [i_1] [i_0])))))));
            }
        }
    }
    var_15 *= var_8;
    var_16 = var_6;
    #pragma endscop
}
