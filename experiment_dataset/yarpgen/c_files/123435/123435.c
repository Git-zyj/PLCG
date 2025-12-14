/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = (var_6 << (786432 - 786415));
        var_14 += ((((((arr_0 [7] [10]) * (arr_2 [i_0] [i_0])))) * ((var_11 ? var_4 : 65526))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = ((arr_12 [i_0] [i_1 - 1] [i_2] [i_2] [i_4 + 2] [i_0]) > (arr_12 [i_4 + 1] [i_3] [i_1 - 1] [i_2] [i_1 - 1] [i_0]));
                                var_16 = (179 > var_2);
                            }
                        }
                    }
                    var_17 = (((arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) + 65535));
                }
            }
        }
    }
    var_18 = (min((((var_2 && (2814219143 % var_3)))), (min(((~(-127 - 1))), (!var_7)))));
    #pragma endscop
}
