/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [3] [3] [i_1] = ((65535 ? 0 : 2147483647));
                                arr_16 [i_1] [i_1 + 1] [i_2] [i_3] = ((!((((arr_4 [i_1 + 2] [i_1] [i_4 - 2]) ? (arr_4 [i_1 - 1] [i_1] [i_4 - 1]) : var_6)))));
                                var_15 = (((arr_7 [i_0] [i_2] [i_0]) * ((((((arr_14 [i_4] [7] [i_2] [i_1] [i_0]) | 30)) / (194 | 1848141858))))));
                            }
                        }
                    }
                    var_16 = var_10;
                }
            }
        }
    }
    var_17 = (min(var_17, ((max(var_1, (var_0 ^ var_13))))));
    var_18 = ((((min((min(var_10, 31)), var_1))) ? (((((min(61, 1))) > var_13))) : (((((var_12 ? -7366 : 191))) ? 2446825436 : (2446825438 || 0)))));
    #pragma endscop
}
