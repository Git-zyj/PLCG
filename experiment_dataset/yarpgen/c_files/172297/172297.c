/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((((max(244, var_9))) ? ((((max(var_0, var_10))) ? var_6 : (var_8 < 244))) : var_6));
    var_12 = (max(var_12, ((max((max(3641831148, (!1809005384518880101))), ((max(var_9, 11))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = var_8;
                                arr_13 [i_0] [i_1] [i_2] [0] [i_4] = ((-(((arr_12 [i_0] [i_0] [i_3] [i_4 - 2] [i_4 + 1] [i_4 + 2]) >> (((arr_11 [i_4] [i_4] [i_4 - 2] [i_4 - 2] [i_4] [18]) - 57843))))));
                                arr_14 [i_1] [i_3] &= (((12175 ? var_4 : ((((arr_0 [i_3]) ? (arr_12 [i_0] [0] [17] [i_2] [i_3] [i_4]) : -307316431))))));
                                var_14 ^= (max((min(((1 ? var_6 : 2208560074)), (arr_12 [i_2] [i_4 - 1] [i_4 + 1] [i_4 - 2] [i_4 - 2] [i_4 - 1]))), -11));
                            }
                        }
                    }
                    var_15 = ((((((arr_11 [i_0] [10] [i_0] [i_2] [i_2] [i_2]) + var_10)) * (arr_9 [i_0] [i_0] [i_0] [i_0]))));
                    var_16 = (((~(arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_2]))));
                }
            }
        }
    }
    #pragma endscop
}
