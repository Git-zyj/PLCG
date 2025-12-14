/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_2;
    var_14 = var_7;
    var_15 = ((((((var_12 / var_6) + var_2))) ? var_2 : var_7));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((min(((((((arr_3 [i_0] [11]) && var_12)) ? (arr_0 [i_0]) : var_12))), ((+(min((arr_2 [4] [i_1] [i_1]), var_5)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_17 = max(var_8, (arr_0 [i_0]));
                                var_18 = ((((max((arr_8 [i_4] [i_4] [i_4] [i_4 + 2] [i_4]), (arr_11 [i_0] [i_4] [i_4 + 2] [i_4 + 3] [i_4 - 1])))) ? (max(var_5, (arr_7 [i_4 - 1] [7] [i_4] [i_4 + 1] [i_4]))) : (((((arr_10 [i_4] [i_4] [i_0] [i_4 + 1] [i_4]) <= (arr_7 [i_4] [i_4] [i_4 + 2] [i_4 - 1] [i_4 - 1])))))));
                                arr_12 [i_0 - 1] [i_1] [i_2] [i_3] [i_0] = (arr_1 [6]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
