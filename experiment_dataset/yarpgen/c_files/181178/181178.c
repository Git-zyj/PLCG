/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [2] [i_2] [i_3] [i_4] &= ((((min((max(24582, (arr_5 [i_4] [i_1] [i_1]))), (((!(arr_4 [i_2]))))))) || ((((arr_14 [i_3 + 1] [i_0] [i_1] [2]) ? var_2 : ((min((arr_0 [10]), 18577))))))));
                                arr_16 [i_0] [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [i_0] [i_0] = max(var_6, -6978);
                                var_18 = (~18446744073709551592);
                                var_19 *= 54;
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_4] = var_13;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_25 [i_0] [i_0] [i_1 + 1] [i_5] [i_6] = ((min((arr_10 [i_0] [8] [i_1 + 2] [i_0]), (arr_10 [i_0] [i_1] [i_1 - 2] [i_6]))));
                            var_20 *= var_10;
                        }
                    }
                }
            }
        }
    }
    var_21 -= var_11;
    var_22 = (((!var_1) ? var_14 : (min((((var_16 ? var_14 : var_9))), (max(-1970443452, 4))))));
    #pragma endscop
}
