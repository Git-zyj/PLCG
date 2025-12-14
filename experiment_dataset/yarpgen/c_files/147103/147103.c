/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, ((min(((((var_1 - -1491385673) ? ((max(var_6, var_1))) : var_6))), (((~var_5) ? 3990705851 : (min(var_4, var_2)))))))));
                    var_11 = ((!(((-31187 ? 3990705851 : var_2)))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [5] [i_3] [i_4] = 1048560;
                                var_12 = 225;
                            }
                        }
                    }
                }
            }
        }
        arr_16 [i_0] = (((var_4 ? var_3 : (0 + var_4))));
    }
    var_13 = var_2;
    var_14 = min((min((var_9 < 4), (min(var_1, -9223372036854775801)))), var_2);
    #pragma endscop
}
