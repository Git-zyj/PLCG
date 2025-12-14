/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((65515 ? ((((min(var_8, var_14)) >> ((var_9 ? 18 : 3))))) : 0));
    var_18 = (((((~((max(var_12, var_14)))))) ? var_9 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = ((((max((arr_2 [i_0]), var_1))) ? ((((arr_2 [i_0]) && (arr_1 [i_0])))) : var_12));
                var_20 |= ((~(((arr_3 [i_0] [i_0] [i_1]) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_3 [i_0] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_21 = (((((~(((arr_5 [i_0] [i_1] [i_2] [i_0]) >> (((arr_5 [0] [i_1] [0] [i_1]) - 21441))))))) & 3));
                            var_22 *= ((((~(max((arr_2 [i_0]), 0))))) ? (((21 ? var_12 : 2315573393))) : var_0);
                            var_23 = (max(var_23, (((((((min(var_13, 12)) + var_7))) ? (((((((arr_6 [i_0] [i_0] [i_0]) - 28455))) ? (max((arr_7 [i_0] [i_0] [i_2] [i_2]), 0)) : var_0))) : (min((arr_3 [i_1] [i_1] [i_2]), var_7)))))));
                            arr_8 [i_3] [i_3] [i_2] = (((((~(-9223372036854775807 - 1)))) ? var_0 : (arr_2 [i_2])));
                            arr_9 [i_0] [2] [4] [i_3] = (min(((min((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_2] [i_2])))), (min((((968995999644050089 ? 65499 : 299139630))), 9223372036854775807))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
