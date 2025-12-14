/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_8, (((((var_8 ? var_8 : var_0))) ? (((-1198597901 ? var_6 : 1198597879))) : (max(var_9, -7136452261870937248))))));
    var_11 = (max(-var_5, ((-((var_4 ? var_9 : var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_5;
                var_12 = ((((arr_2 [i_1 - 1]) | (var_5 - var_0))) != -var_5);

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    var_13 = ((((max(var_7, ((var_7 ? var_1 : var_3))))) >= (max((arr_2 [i_0]), (max(-1198597900, -7647406022189351460))))));
                    var_14 = (max(((~(arr_8 [0] [i_1 - 1]))), (((arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_8 [i_1] [i_1 - 1]) : var_5))));
                    arr_10 [i_0] [i_2 - 2] [i_2] = -233472063;
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_4] = ((((((1 && (arr_14 [i_4]))))) * var_7));
                            var_15 += (((1 ? 1 : 1)));
                        }
                    }
                }
            }
        }
    }
    var_16 = (max((max(((-25450 ? var_5 : var_9)), 1)), var_3));
    var_17 -= (((!var_2) / -93));
    #pragma endscop
}
