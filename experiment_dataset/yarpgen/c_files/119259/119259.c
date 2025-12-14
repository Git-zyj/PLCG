/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((var_4 * (max(var_7, 1016558696))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = ((((((arr_1 [i_0]) ? 5497587178166337314 : (arr_2 [i_1] [i_1])))) % (min((arr_6 [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 3]), (2880622499 - 1048575)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] = var_0;
                                arr_12 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2] = 597930261517333409;
                                var_21 = (max(var_21, (((((((arr_7 [i_0] [i_1] [i_2 + 1] [i_2] [i_2] [10]) ? var_17 : (arr_7 [i_3] [i_3] [i_3 - 2] [i_3] [i_3] [i_3 - 2])))) ? ((max((arr_7 [i_0] [i_4] [i_2] [i_3 + 1] [i_4] [i_4]), (arr_7 [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [i_4])))) : (max((arr_7 [i_0] [i_3 - 1] [i_2] [i_0] [i_4] [i_4]), 597930261517333409)))))));
                                arr_13 [i_2] = ((~(((var_10 ? var_6 : (arr_9 [i_0] [i_1] [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
