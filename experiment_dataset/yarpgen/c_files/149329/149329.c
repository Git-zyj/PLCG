/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((!-682905079) + var_6)), ((-((var_4 ? 7 : var_10))))));
    var_19 = (min(var_19, (((var_2 ? (min(((min(var_3, var_16))), ((var_16 ? var_2 : var_8)))) : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_0] [18] = var_17;
                                var_20 ^= (arr_2 [i_0]);
                            }
                        }
                    }
                }
                var_21 *= (min(((~(arr_0 [i_0] [i_0]))), (((min((arr_0 [i_1 - 1] [i_0]), (arr_8 [i_0] [i_1]))) | (((arr_3 [i_0] [i_0]) ? var_9 : 17))))));
                arr_14 [i_1] = (max((((~-29676) ? (min(var_8, (arr_6 [i_0] [i_1]))) : ((((!(arr_6 [i_0] [i_0]))))))), ((((((arr_1 [20]) ^ var_2)) ^ ((min(var_12, (arr_3 [2] [2])))))))));
            }
        }
    }
    var_22 += ((-((((var_12 ? var_4 : var_10))))));
    var_23 = (((((min(-21, -19))) ? ((var_1 ? var_7 : var_13)) : var_16)) << ((((((var_10 * (var_7 * var_12))) + 2377920)) - 14)));
    #pragma endscop
}
