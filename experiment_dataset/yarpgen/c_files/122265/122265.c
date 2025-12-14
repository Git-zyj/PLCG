/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 |= 1;
                                arr_15 [20] [i_1] [20] [9] [i_1] = var_5;
                            }
                        }
                    }
                }
                var_12 |= (arr_14 [i_0] [i_0] [i_1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_0 - 2] = (max((min(((1 ? var_6 : var_8)), (var_9 > var_8))), ((~(((948046948 < (arr_16 [14] [i_1] [i_1]))))))));
                            var_13 = 105;
                            var_14 = (((((0 ? 7268695872253992362 : var_3))) < (min((arr_8 [i_6 - 1] [i_0 + 1] [i_0 - 1]), ((-24865 ? 18446744073709551603 : var_2))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] [i_6] = (min((arr_14 [i_6 - 2] [8] [i_0 + 1] [i_0 - 3] [i_0]), (arr_3 [i_0])));
                            var_15 -= (((min((max((arr_3 [1]), 238)), -237)) << (((!((((arr_0 [i_0] [i_1]) % 17))))))));
                        }
                    }
                }
            }
        }
    }
    var_16 = var_0;
    #pragma endscop
}
