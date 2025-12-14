/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 >> ((((var_7 - 1) != (((var_6 ? (-9223372036854775807 - 1) : 9223372036854775807))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (arr_8 [i_4 + 1] [i_4 + 2] [i_3] [i_3])));
                                var_19 = ((((max(9223372036854775807, 9223372036854775807))) ? (((((arr_8 [i_3] [i_3] [i_2] [i_0]) ? var_9 : (arr_2 [4]))))) : ((var_10 ? (arr_11 [i_4 + 2] [5] [1] [5] [1] [i_4]) : var_3))));
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    var_20 |= ((((((var_14 ? (-9223372036854775807 - 1) : var_11)))) > (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_21 = (min(var_21, ((max((arr_0 [i_0]), (arr_6 [i_1] [i_1] [i_1]))))));
                }
                arr_18 [i_0] [i_0] [i_0] = (max(9223372036854775802, 9223372036854775807));
            }
        }
    }
    var_22 = ((((var_16 ? var_15 : (min(var_0, var_4)))) + ((((var_11 || 9223372036854775802) ? var_16 : (!var_15))))));
    var_23 = (((((((((min(var_4, (-9223372036854775807 - 1))) + 9223372036854775807)) + 9223372036854775807)) >> (var_14 - 48823))) << ((((9223372036854775782 * (var_11 * var_8))) - 3104652366996116259))));
    #pragma endscop
}
