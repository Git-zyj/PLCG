/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (var_4 * var_4)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = (!3718288025);
                var_12 = var_1;
                var_13 = ((((arr_0 [i_0]) ^ (!var_1))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_14 = (((max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((((min((arr_1 [i_0 + 1]), 198))) ? ((~(arr_4 [i_2] [i_1 + 3] [i_0 + 1] [i_0 + 4]))) : (max(213, var_8))))) : (min(var_8, (((arr_1 [i_1 - 1]) ^ 57)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = (((((arr_13 [i_1 + 1] [i_1 + 2] [i_1 + 3] [i_1 + 1] [i_1 + 1]) ^ (arr_13 [i_1 + 3] [i_1 + 1] [i_1 + 3] [i_1 - 1] [i_1 + 2]))) > ((min((arr_13 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]), (arr_13 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 - 1]))))));
                                var_16 = 1248027100;
                                var_17 = (max(var_17, (((((((max((arr_13 [i_0 + 3] [i_1 + 2] [i_2] [i_3 + 4] [i_4]), (arr_5 [i_0 + 1] [i_1 + 1] [i_4])))) + var_1)) < var_1)))));
                                var_18 = (min((((min((arr_11 [i_0 + 4] [i_1 + 2] [i_2]), var_5)))), (arr_2 [i_1 - 1] [i_1 - 1] [i_2])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
