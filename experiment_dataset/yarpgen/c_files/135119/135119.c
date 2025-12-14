/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = ((min(var_3, ((-(arr_3 [i_0] [i_1] [i_0]))))));
                    var_21 = ((-34 ? 0 : 32766));
                    var_22 |= (min((min(65522, (((arr_2 [4]) ? (arr_3 [10] [i_1] [i_2]) : 1)))), ((((arr_1 [i_0 - 1] [20]) && var_1)))));
                    var_23 |= 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_24 = 65531;
                                var_25 ^= ((~(((~1855753733) ? (208990588 / 1) : -57667))));
                                var_26 = (min((arr_1 [i_0] [i_0]), (((!(arr_3 [i_0] [i_0 - 1] [i_2]))))));
                                var_27 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                {
                    var_28 = (var_16 || 1112774171);
                    var_29 = (arr_16 [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
