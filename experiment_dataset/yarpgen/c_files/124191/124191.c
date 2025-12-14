/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 *= (-32767 - 1);

                for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_2] [i_0] [i_1] [i_2] = (min(((max(var_14, (arr_4 [i_0] [i_1])))), ((~((~(arr_0 [i_0])))))));
                    var_19 = 4245378798;
                    var_20 = (max(var_20, ((((max((-127 - 1), 0))) ? ((~(arr_5 [i_0] [i_1] [17]))) : (((!((max(1, (arr_2 [i_0])))))))))));
                    var_21 = (max(var_21, (arr_6 [11] [i_1] [i_1])));
                    var_22 &= (min((max(-24529, (-2113090642 + 1))), (arr_5 [i_1] [16] [i_2])));
                }
                for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_23 -= (arr_10 [i_5] [20] [i_1] [i_0]);
                                arr_16 [i_3] [20] = (((var_9 - var_14) ? ((((-9223372036854775807 - 1) ? (((~(arr_4 [i_5] [i_3])))) : (arr_13 [i_3 + 1] [i_0] [i_3] [i_5] [i_5] [1])))) : ((+(((arr_10 [12] [i_4] [i_3] [8]) + (arr_2 [0])))))));
                                var_24 = (((!156) && (arr_12 [3] [i_1] [i_1] [i_1] [i_1])));
                                arr_17 [i_3] [i_0] [i_0] [1] [19] [i_4] [i_5] = max(((((((arr_0 [3]) ? -18603 : (arr_15 [i_0] [i_0] [i_0] [9] [i_0])))) ? (arr_9 [20] [i_1] [i_3 - 2] [i_4]) : (((arr_0 [i_1]) ? var_2 : -4915)))), ((max((arr_9 [i_0] [i_1] [i_3 - 3] [i_4]), (!264733135720827977)))));
                                arr_18 [14] [i_1] [i_3] [i_4] [2] [15] = 24535;
                            }
                        }
                    }
                    arr_19 [i_3] [i_1] [i_3] = ((!(min((!81), (arr_0 [14])))));
                    arr_20 [3] [i_3] [i_3] [i_0] = ((((min((arr_6 [i_3] [i_1] [i_3 - 1]), (arr_6 [12] [20] [i_3 - 1])))) ? ((((!(arr_6 [i_0] [10] [i_3 + 2]))))) : (((arr_11 [i_3]) ? var_7 : (arr_11 [i_3])))));
                }
                arr_21 [i_0] [12] = max((max(((5 | (arr_14 [19] [i_1] [i_0] [i_1]))), 231)), ((((var_16 && var_14) | 1))));
            }
        }
    }
    var_25 = ((var_14 ? var_10 : var_9));
    var_26 = var_0;
    #pragma endscop
}
