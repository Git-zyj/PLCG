/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (min(((((arr_2 [i_0]) != (max((arr_4 [i_0]), var_7))))), var_13));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? ((((((((arr_4 [i_0]) & (arr_4 [i_0]))) + 9223372036854775807)) << (((arr_4 [i_0]) - 61591))))) : ((((((((((arr_4 [i_0]) & (arr_4 [i_0]))) - 9223372036854775807)) + 9223372036854775807)) << (((((((arr_4 [i_0]) - 61591)) + 51713)) - 54)))));
                    var_20 = ((((min((((arr_4 [i_0]) / var_10)), 1))) ? (arr_7 [i_0]) : ((-(min((arr_1 [i_0]), var_14))))));
                    var_21 = (min(((0 * (arr_3 [i_0] [i_0] [i_2]))), (1 / 1)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            {
                arr_15 [i_3] [13] [i_3 + 2] = (((arr_3 [1] [1] [1]) > var_12));
                var_22 = (var_10 && 2080374784);
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_24 [i_5 + 3] [i_6] = ((~(((((-52078764 ? var_7 : 52078764))) ? (arr_2 [i_6]) : (-21878 | -95)))));
                                arr_25 [i_6] [i_7 - 1] [i_7 + 2] [i_7] [i_6] = var_4;
                                var_23 = (arr_20 [i_3] [i_4] [i_4] [i_5 + 3] [i_3] [i_7]);
                            }
                        }
                    }
                }
                arr_26 [i_3] [i_3] = (max((arr_4 [2]), (arr_4 [10])));
            }
        }
    }
    var_24 = (((var_8 > -57) ? (-4294967295 | 199) : ((((min(var_7, var_13)))))));
    var_25 = var_3;
    #pragma endscop
}
