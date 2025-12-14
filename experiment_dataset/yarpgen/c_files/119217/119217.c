/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min(var_10, (max(var_2, var_14)))) < ((((var_4 && var_14) >> (var_4 / var_14))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = min(32767, 0);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 = var_7;
                                arr_13 [i_0] [i_1] [i_2] [i_4] = (i_4 % 2 == 0) ? ((min((max((arr_12 [i_4] [i_2] [i_2] [i_2] [i_4 - 2]), (arr_11 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4]))), (((arr_12 [i_4] [i_1] [i_1] [i_1] [i_4 + 1]) + (arr_11 [i_1] [i_2] [i_2] [i_4 - 3] [i_4])))))) : ((min((max((arr_12 [i_4] [i_2] [i_2] [i_2] [i_4 - 2]), (arr_11 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4]))), (((arr_12 [i_4] [i_1] [i_1] [i_1] [i_4 + 1]) - (arr_11 [i_1] [i_2] [i_2] [i_4 - 3] [i_4]))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] = (min((arr_5 [i_0]), (max((arr_5 [i_0]), (arr_5 [i_2])))));
                    var_20 = (((min(var_11, (arr_8 [i_0] [3] [i_0] [7] [i_0]))) ^ (((min((min(var_0, (arr_6 [i_0] [i_1] [i_2] [8]))), (arr_5 [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
