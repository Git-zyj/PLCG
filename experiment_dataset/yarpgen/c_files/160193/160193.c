/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_19 = ((((((299196529 ? var_14 : (arr_6 [i_0] [i_0]))))) > -299196529));
                    var_20 += (((min((min((arr_2 [i_0]), 6987839917355000174)), (((var_17 ? -7549 : 108))))) >= (((((var_3 ? (arr_0 [i_0] [i_2]) : -7540)) & (arr_4 [i_0]))))));
                }
                for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((((((((arr_9 [i_0] [i_1] [i_0]) << (157 - 157)))) != (min(var_0, 71)))) ? (((((~var_7) + 2147483647)) << (((-var_11 + 87) - 1)))) : (arr_0 [i_0] [i_0])))) : (((((((((((arr_9 [i_0] [i_1] [i_0]) + 2147483647)) << (157 - 157)))) != (min(var_0, 71)))) ? (((((~var_7) + 2147483647)) << (((-var_11 + 87) - 1)))) : (arr_0 [i_0] [i_0]))));
                    arr_11 [i_0] [i_0] [i_0] = (min(((-(arr_6 [i_3 - 2] [i_0]))), (((158 ? (arr_8 [i_3] [i_3 + 2] [i_3]) : var_13)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_21 = (min((arr_8 [i_0] [i_0] [i_3]), (!1)));
                                arr_18 [i_0] [i_0] = ((-(var_8 / -7520)));
                                var_22 = arr_0 [i_0] [i_0];
                            }
                        }
                    }
                    var_23 = ((((-(var_5 + 1))) - (((arr_4 [i_3 + 1]) ? ((var_16 / (arr_12 [i_1] [i_1] [i_1] [i_1]))) : var_1))));
                    var_24 = (i_0 % 2 == 0) ? ((((arr_9 [i_0] [i_0] [i_0]) << ((((-(max(-299196530, (arr_13 [i_0] [i_1] [i_0] [i_3]))))) - 299196530))))) : ((((((arr_9 [i_0] [i_0] [i_0]) + 2147483647)) << ((((-(max(-299196530, (arr_13 [i_0] [i_1] [i_0] [i_3]))))) - 299196530)))));
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((-(arr_9 [i_7] [i_1] [i_7]))))));
                                var_26 = (arr_12 [i_6] [i_6 - 1] [i_6] [i_6 - 1]);
                                var_27 = arr_4 [i_7];
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (max(var_5, (!var_6)));
    #pragma endscop
}
