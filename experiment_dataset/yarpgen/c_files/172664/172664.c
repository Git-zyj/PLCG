/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_19 = (min(var_19, 61960));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = 127;
                                var_21 += (min((((arr_2 [i_2 - 1] [i_0 + 2] [i_0 + 2]) ? (arr_6 [i_2 - 1] [i_1 - 1] [i_0 + 2]) : (arr_4 [i_0 - 1] [i_4] [i_4] [i_0 + 2]))), (arr_6 [i_2 - 1] [10] [i_0 + 2])));
                            }
                        }
                    }
                    arr_12 [1] [i_1] [i_2] [i_0] = (i_0 % 2 == 0) ? ((((((arr_9 [i_2 + 1] [i_0] [2] [i_1 - 1] [i_0] [i_0]) << (1029924120 - 1029924074))) << ((((max((min((arr_0 [i_0]), (arr_7 [i_0] [i_1] [i_2] [i_2 - 1]))), var_11))) - 49949))))) : ((((((arr_9 [i_2 + 1] [i_0] [2] [i_1 - 1] [i_0] [i_0]) << (1029924120 - 1029924074))) << ((((((((max((min((arr_0 [i_0]), (arr_7 [i_0] [i_1] [i_2] [i_2 - 1]))), var_11))) - 49949)) + 10825)) - 11)))));
                    arr_13 [i_0] [i_2] [i_2 + 1] = (arr_6 [i_0 + 3] [i_1] [i_1]);
                }
                var_22 = var_10;
                arr_14 [i_0] = (min(((((max(var_0, (arr_9 [i_1] [i_0] [i_1] [i_1] [i_0] [i_0 - 1])))))), (max(1029924115, (arr_11 [i_0] [i_1] [9] [i_1 - 1] [i_1 - 1] [i_0 - 1] [i_0])))));
                arr_15 [i_0] [i_1 - 1] = (arr_0 [i_0]);
            }
        }
    }
    var_23 = (min(((((((var_3 ? var_1 : var_14))) ? (1 * var_14) : -var_1))), (max(1, 3491836803848568916))));
    #pragma endscop
}
