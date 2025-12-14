/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_3 ? var_9 : 31056))) ? var_1 : ((var_1 ? var_1 : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (arr_1 [i_1 - 3]);

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 ^= ((!(-1247390282 + 171)));
                                var_18 = (min(var_18, 52609));
                            }
                        }
                    }
                    arr_11 [i_0] [i_0] [i_0] = ((var_10 ? ((((max(1, 200))) ? ((max((arr_4 [i_0] [i_0] [i_2] [i_0]), var_6))) : (~12926))) : (((!((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (85 - 51)))))))));
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    var_19 ^= (arr_13 [i_1 + 1] [i_5 - 2]);
                    var_20 |= (max((~0), (1 | 24)));
                    var_21 |= var_8;
                }
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
