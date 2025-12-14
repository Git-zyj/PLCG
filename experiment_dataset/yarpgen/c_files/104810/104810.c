/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = min((((min(var_12, var_6)))), 0);
                                arr_15 [i_0] = (54591 ? -4345171958943791272 : 10944);
                                arr_16 [i_3] [i_0] = min(((((arr_12 [13] [i_4] [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 3] [1]) ? (arr_12 [i_4] [i_4 - 3] [i_4] [i_4 + 3] [5] [i_4 - 3] [1]) : (arr_12 [i_4] [i_4 + 3] [1] [i_4] [i_4] [i_4 - 3] [22])))), (min(((836 ? (-9223372036854775807 - 1) : -81)), ((max(var_0, (arr_7 [i_4] [14] [i_4 - 2])))))));
                            }
                        }
                    }
                    var_18 |= (min(((!((min(var_7, (arr_10 [i_2 + 1] [i_1] [12] [12] [22] [i_0])))))), ((!((var_5 != (arr_10 [i_0] [i_0] [14] [4] [i_0] [i_2 + 1])))))));
                    var_19 = (min(var_19, ((min((!10945), (min(((65533 ? var_16 : var_2)), var_14)))))));
                }
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
