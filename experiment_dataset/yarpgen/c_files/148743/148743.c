/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, var_2));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 ^= var_0;
                                var_14 *= ((max(34011, (-9223372036854775807 - 1))) / (arr_3 [i_1 - 2] [i_1] [i_1 - 2]));
                                var_15 = ((var_5 ? var_10 : var_4));
                            }
                        }
                    }
                    var_16 = ((var_1 * (((var_2 / (arr_1 [i_0] [i_0]))))));
                    var_17 = ((~(~58277)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_18 ^= var_8;
                    var_19 = (max((min((arr_10 [i_6] [1] [i_6] [1] [i_7] [i_7]), (arr_10 [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1]))), var_7));
                    var_20 ^= ((var_6 ? (((arr_3 [i_5] [i_5] [i_6 + 1]) * ((((!(arr_20 [i_5] [i_7]))))))) : 4766468120464501914));
                }
            }
        }
    }
    #pragma endscop
}
