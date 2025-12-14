/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((min((min(((74 ? var_11 : var_4)), (178 - var_5))), (+-6320440596661013601))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 ^= (max(((-((var_19 << (116 - 116))))), (((((94 ? var_14 : 74))) ? 161 : var_5))));
                                var_22 = (max(var_22, (((144112989052600320 > ((45 ? (((var_2 ? var_3 : 161))) : (((arr_0 [i_0 - 2] [i_0 - 2]) ? var_12 : var_15)))))))));
                                arr_14 [i_0] [i_1 + 1] [i_3] [i_3] [i_4] = var_1;
                            }
                        }
                    }
                }
                var_23 = (min(var_23, ((max(var_2, ((~(((arr_0 [i_0 + 2] [i_0 + 2]) ? var_16 : 114)))))))));
                arr_15 [i_0] [i_1] = 0;
            }
        }
    }
    var_24 *= 0;
    var_25 = (((((var_14 > 1) > ((min(var_5, var_0))))) ? (-127 - 1) : (((((var_2 ? var_13 : 166))) ? var_12 : (158 + 1)))));
    #pragma endscop
}
