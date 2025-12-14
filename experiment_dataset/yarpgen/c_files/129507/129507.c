/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = var_2;
    var_21 = (min(var_10, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = var_2;
                    var_23 = var_1;
                    arr_9 [i_0] [i_1] = (((((max(0, 1)))) >= (min((arr_5 [i_1 - 1] [i_1 + 2]), var_13))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((arr_0 [i_3 - 1] [i_3 - 2]) || var_7)) ? ((min((arr_3 [i_1 + 1]), (arr_3 [i_1 + 1])))) : (arr_3 [i_1 - 1])));
                                var_24 = (((((var_12 ? var_14 : (arr_7 [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 2])))) ? ((var_2 - (arr_7 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 - 1]))) : (((arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? var_3 : 0))));
                            }
                        }
                    }
                    var_25 = (max(((var_10 - (arr_0 [i_0] [i_1]))), (arr_6 [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
