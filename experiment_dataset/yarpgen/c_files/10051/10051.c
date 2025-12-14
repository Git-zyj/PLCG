/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((((var_3 ? (var_0 - var_11) : (4194288 - var_4))) != (((((60619 + -54) == -57)))))))));
    var_17 += var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = 38909;
                                var_19 = 77;
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_0] = (i_0 % 2 == 0) ? ((((((arr_8 [i_0] [i_0] [i_1] [2]) + 2147483647)) >> (var_12 >= 8176)))) : ((((((((arr_8 [i_0] [i_0] [i_1] [2]) - 2147483647)) + 2147483647)) >> (var_12 >= 8176))));
            }
        }
    }
    var_20 = min((max(4194288, ((min(26627, var_12))))), var_9);
    var_21 = var_1;
    #pragma endscop
}
