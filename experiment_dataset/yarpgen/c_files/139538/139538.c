/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = 2427;
    var_20 = ((((var_15 ? var_4 : var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 += (arr_4 [i_0] [i_0] [i_2] [i_2]);

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_22 = (min(var_22, (((~(arr_2 [i_0] [6] [i_3]))))));
                        var_23 += (!0);
                        var_24 = (max(var_24, ((min((max((arr_7 [i_1 - 3] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 3]), (arr_7 [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 + 1] [1] [i_1 - 3]))), (((min((arr_7 [i_0] [i_3] [i_2] [i_1] [i_0] [23]), (arr_6 [i_0] [i_1] [i_2] [i_3]))) * (max((arr_7 [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 2] [4]), var_5)))))))));
                        arr_8 [i_1] [i_1] [i_3] = ((~(((var_17 < ((var_5 - (arr_4 [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                    var_25 &= ((250 ? (min(-var_9, (!0))) : (arr_3 [i_0] [16])));
                }
            }
        }
    }
    var_26 = var_10;
    #pragma endscop
}
