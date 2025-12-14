/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((var_11 ? ((var_16 ? 0 : var_17)) : ((min(1, var_10)))))), ((min(var_16, var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 ^= (arr_6 [i_0] [i_1 + 1]);
                    var_20 = (((max((arr_7 [i_1 - 2] [i_1 + 1] [i_1 - 1]), (arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 2]))) / (((arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (arr_6 [i_1 + 1] [i_1 + 1]) : (arr_7 [i_1 - 2] [i_1 + 1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = (min((((-21396 ? var_8 : 4294967291))), (min((arr_1 [i_1 + 1] [i_3 + 1]), var_14))));
                                var_22 = ((((arr_6 [i_1 - 2] [i_0]) ? 1 : -3)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 &= var_9;
    var_24 = (((((var_6 ? var_1 : ((var_4 ? var_11 : 0))))) ^ ((var_17 ? var_1 : (min(var_5, var_14))))));
    #pragma endscop
}
