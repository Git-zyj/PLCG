/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((-((min(8, 6))))))));
                                var_18 = (~1);
                                var_19 += 7461;
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4 - 3] = (max(((var_4 ? (((arr_0 [i_0]) ? var_3 : (arr_0 [i_3]))) : var_12)), ((~(arr_12 [i_0] [i_0] [i_0] [i_4])))));
                            }
                        }
                    }
                }
                var_20 ^= ((((var_16 ? ((6879395266354946430 ? 29012 : 8384483853994258479)) : 4611686018427387903)) != 6));
            }
        }
    }
    var_21 = ((var_6 ? var_5 : ((58084 ? var_10 : ((var_8 ? var_5 : var_11))))));
    var_22 = (((!-4) <= (((!23497) | var_10))));
    #pragma endscop
}
