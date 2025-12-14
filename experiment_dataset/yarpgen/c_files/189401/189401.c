/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (((-2147483647 - 1) && ((!(arr_11 [i_0] [22] [1] [i_0] [14])))));
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = min(2147483647, (2147483629 | -2147483624));
                                var_20 = ((-((-(!536870912)))));
                                arr_15 [i_3] [16] [i_3] [8] [16] [16] [16] = max((arr_6 [i_0] [20]), 2147483629);
                                var_21 *= 203;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_22 ^= -218820277;
                                arr_21 [1] [i_6] [i_6] [i_0] = (arr_17 [i_6]);
                                var_23 = ((+(((-var_8 <= (((arr_6 [16] [i_1]) - (arr_4 [i_1] [1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = min(227, var_12);
    var_25 = (max(var_25, (!var_16)));
    #pragma endscop
}
