/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((max((var_1 & var_8), (min(9223372036854775807, var_8)))) <= var_0);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_1] [i_1] [i_3] = (((((var_4 && var_0) || var_8)) ? (arr_8 [3] [2] [i_2] [i_1 - 1]) : (((arr_5 [i_4] [i_1] [i_0]) ? ((min(0, 0))) : ((1 ? 36 : var_1))))));
                                var_10 = 27;
                            }
                        }
                    }
                    var_11 = 36;
                    var_12 = (!(arr_4 [i_1] [i_0]));
                }
            }
        }
    }
    var_13 = (((((min(var_4, var_8)))) ? ((((-28 ? 27 : var_0)) - var_0)) : ((((min(var_7, var_5))) ? (var_2 < var_1) : ((var_4 ? var_7 : var_0))))));
    #pragma endscop
}
