/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_0] [12] [i_2] [i_4] = ((0 ? 0 : 21043));
                                arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] [i_1] = (((arr_2 [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : 0));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_18 = (max((((arr_13 [i_0 - 2] [i_0 + 1] [i_0 - 1]) ? ((max(1, 1))) : 64001)), (arr_6 [7] [7] [i_5])));
                            arr_17 [i_0] [i_1] [i_5] [i_6] = (min((min((max(9223372036854775807, 1)), 1)), 14));
                            arr_18 [i_0] [i_1] [i_1] [2] [i_6] &= max(21, (arr_0 [i_1]));
                        }
                    }
                }
                var_19 = (max(var_19, (((((((((-15 ? 1 : var_3))) ? 117 : 7354))) ? -15 : 9103459999693770823)))));
            }
        }
    }
    var_20 = ((((((min(var_0, var_14)) <= (((min(7, 32003))))))) / 31981));
    #pragma endscop
}
