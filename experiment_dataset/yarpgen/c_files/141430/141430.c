/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 > ((((var_6 ? var_6 : var_8)) & (var_1 & var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (i_0 % 2 == zero) ? ((max((((arr_0 [i_0]) << (((arr_3 [i_0]) - 27825)))), (arr_3 [i_0])))) : ((max((((((arr_0 [i_0]) + 9223372036854775807)) << (((((((arr_3 [i_0]) - 27825)) + 17668)) - 39)))), (arr_3 [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_0] [i_2] [5] [10] = var_7;
                            var_12 &= var_1;
                            var_13 = (arr_8 [i_0] [i_2] [i_1] [1] [i_0]);
                            var_14 = (min(var_14, ((max(((-((~(arr_0 [i_3]))))), ((var_4 ? var_0 : 7)))))));
                        }
                    }
                }
            }
        }
    }
    var_15 = var_4;
    #pragma endscop
}
