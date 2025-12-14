/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~((((min(var_0, var_16))) ? (var_17 ^ 3808415153461082384) : (((var_4 ? 56 : var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_10 [i_3] [4] [i_2] [i_2] [i_3] [i_3] = (((((arr_1 [i_4] [i_3]) & 3808415153461082392)) != 3808415153461082372));
                                var_21 = (arr_1 [i_0] [10]);
                            }
                        }
                    }
                }
                var_22 = -var_2;
                var_23 = (((arr_4 [7] [i_0] [13] [i_1]) ? (((1043292440 && (arr_0 [i_0])))) : (((var_13 + 2147483647) << (3808415153461082372 - 3808415153461082372)))));
            }
        }
    }
    #pragma endscop
}
