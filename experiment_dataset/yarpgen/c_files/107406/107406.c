/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_4 == var_11) ? var_10 : (((255 > 1) + var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 |= (arr_9 [i_0]);
                                var_19 = (min((arr_12 [i_2] [10] [i_2 + 2] [i_2] [1] [i_4]), (49497 + 1)));
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    var_20 = (arr_1 [i_0] [i_0]);
                    var_21 ^= ((~(arr_1 [i_0] [i_0])));
                    var_22 = (((((17308622273911961483 ? (arr_2 [i_1]) : 9266746870426804511))) ^ (min(var_11, var_15))));
                    arr_16 [i_0] [5] [i_5] = 9179997203282747104;
                }
                var_23 = (max(((((arr_11 [i_0 - 2]) && (arr_5 [i_0 - 2] [i_0 - 2])))), -553595573));
                var_24 = var_0;
                arr_17 [6] [6] [i_0] = (254 + 9266746870426804511);
            }
        }
    }
    #pragma endscop
}
