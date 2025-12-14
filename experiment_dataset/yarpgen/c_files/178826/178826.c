/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (((!var_11) ? ((((((-115 + 2147483647) << 0))) ? -115 : 5376517111284301444)) : (((((var_2 ? -86 : 127))) ? var_10 : (max(var_11, var_15))))));
                    arr_9 [i_2] [i_1] [i_2] [i_2] = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 = (~18014398509473792);
                                arr_15 [i_1] [i_1] [i_1] = (((arr_5 [i_0 - 1] [i_1 + 1] [i_4] [i_4]) ? (min(15513032359082523522, (10 && 86))) : 65535));
                                arr_16 [19] [i_1] [24] [i_3] [i_4] [i_4] = (min((((arr_6 [i_0 + 2]) ^ (arr_6 [i_0 + 2]))), var_3));
                                arr_17 [i_0] [i_1] [22] [i_3] [i_1] = ((1 ? (((~85) ^ (arr_4 [i_1 + 1] [16]))) : (((arr_1 [i_1]) & 58))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((var_4 ? ((var_3 ? (var_3 | var_2) : (((min(var_9, var_9)))))) : -1));
    var_18 = var_14;
    #pragma endscop
}
