/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_2] = (max((arr_6 [i_1 - 1]), 29115));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = (min((min(((29115 ? (arr_4 [i_4] [i_3] [i_0]) : (arr_4 [i_1] [7] [i_1]))), (((-29109 + 2147483647) << (var_10 - 28570))))), 29137));
                                var_18 = 29131;
                            }
                        }
                    }
                    var_19 = (min((arr_4 [i_0] [i_0] [i_0 + 1]), ((-29137 ? (arr_3 [i_1] [i_2 - 1]) : (arr_3 [i_2 + 2] [i_0 - 1])))));
                    var_20 = (max(var_20, (((((((937562390 & 29132) ? 29140 : (arr_9 [i_0 - 1] [i_0 - 1] [i_2])))) ? ((var_10 ? 34999 : (!9223372036854775807))) : (max((~var_2), (34999 - 35020))))))));
                    arr_13 [i_1 + 1] [i_1] [21] = ((-var_5 ? (max((min(-29140, 14552484009735090066)), 29140)) : 4));
                }
            }
        }
    }
    var_21 = (!var_9);
    #pragma endscop
}
