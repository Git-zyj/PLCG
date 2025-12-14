/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = (max((((~(arr_2 [i_2 + 2] [i_0 - 1])))), (min((arr_7 [i_3] [i_1] [i_1]), (((arr_8 [i_0] [i_0] [i_2] [i_3]) & (arr_1 [i_3])))))));
                            var_15 = (max(var_15, ((max(((((0 ? 1013157472 : 4589317743992129758)) + (-14 / -1990913313408115719))), var_4)))));
                            var_16 = (max(var_16, (((var_9 ? (min((arr_5 [i_2]), (min(11445670177049838881, (arr_4 [i_1]))))) : (((-4589317743992129758 / (min(2004404003, 6574243521769158101))))))))));
                            arr_11 [11] [i_1] [i_1] [i_2] [i_3] = (max((min((arr_1 [i_0 - 1]), 0)), (((2362525776 ? -44 : (arr_6 [i_0 - 1] [i_2 - 1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((min((~1), (3 == 2147483647))))));
                            arr_18 [7] [7] [7] [9] [i_5] = 11445670177049838877;
                            var_18 *= (((!(arr_14 [i_0 - 1] [i_0 - 1]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
