/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 = min((arr_1 [i_3 - 1] [i_4]), (172 * -38));
                                var_22 |= (max(var_10, var_13));
                                var_23 &= (((arr_7 [i_0] [i_1] [i_2] [i_1]) << (var_13 - 112)));
                                var_24 = (max(var_24, ((min(((((max(var_13, var_18))) % (var_5 % var_6))), (var_2 * var_11))))));
                                var_25 = ((min(((max(var_2, var_2))), var_18)) * ((var_1 >> (((arr_9 [i_3 - 1] [i_3 - 1] [i_1] [i_1] [i_1]) - 58160)))));
                            }
                        }
                    }
                }
                var_26 |= (var_2 + var_14);
            }
        }
    }
    var_27 = var_13;
    #pragma endscop
}
