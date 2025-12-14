/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = (((max((((var_0 ? var_9 : var_10))), (var_0 * var_1))) << (((var_0 > ((((var_1 + 9223372036854775807) >> (((-9223372036854775803 - -9223372036854775782) + 83))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [14] [i_1 - 3] = var_10;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [7] [i_3] = (min((arr_13 [i_3 + 1] [i_3] [i_3] [i_3]), ((-(arr_2 [i_2 - 1])))));
                            arr_15 [i_0] [i_1] [i_2] [i_2] = (max((((!(((var_6 ? var_7 : 0)))))), var_3));
                            var_13 = var_5;
                            arr_16 [i_0] [i_0] [i_0] [10] [i_2] [i_3] = ((((((((arr_3 [i_2]) << (var_3 - 13267128657229469817)))) || var_7)) ? (((((-1 ? (arr_1 [i_0]) : (arr_7 [i_0] [i_1] [i_3 + 1]))) - (var_1 || 0)))) : var_3));
                        }
                    }
                }
                var_14 = (max(var_6, ((((arr_9 [i_0] [i_0 + 2] [i_1 + 1] [i_1]) ? 1 : -2)))));
            }
        }
    }
    var_15 = ((-var_4 / ((var_1 - (min(4158829814353660757, var_5))))));
    var_16 = (~0);
    #pragma endscop
}
