/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((!-var_1) ? var_4 : (max(var_1, var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (max((((-2147483647 - 1) % var_8)), -2147483647));
                var_12 = var_1;
                var_13 = (min((arr_0 [i_1 + 2]), ((!(arr_0 [i_1 - 1])))));
                var_14 += ((!(arr_4 [i_1] [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (min(((((arr_8 [i_0] [i_4 - 2] [i_1 + 1] [i_3 + 2]) != var_2))), (-2147483647 ^ 2147483647)))));
                                var_16 = (!-var_9);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, (var_0 != var_9)));
    #pragma endscop
}
