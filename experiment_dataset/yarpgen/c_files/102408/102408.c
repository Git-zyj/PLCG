/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_10 = (max(var_10, ((((((arr_3 [i_0] [i_0 - 1] [i_0 + 1]) - 0)) / (arr_4 [i_3] [i_3]))))));
                                arr_12 [5] [i_2] [i_2] [8] [i_1] [i_4] [i_4] = ((((arr_9 [i_1] [15] [21] [i_0 + 1]) >> (((arr_8 [i_0 + 1] [17] [i_0]) - 622)))) | (((((((-(arr_2 [i_1] [i_2] [i_4])))) == 0)))));
                                var_11 = (((min((arr_10 [i_0] [i_1] [i_0 + 1] [i_2] [i_4]), (arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1]))) | ((((min(var_6, var_8)))))));
                                arr_13 [i_1] [i_2] [i_1] = var_4;
                            }
                        }
                    }
                    var_12 = (arr_2 [i_1] [2] [i_1]);
                }
            }
        }
    }
    var_13 = var_2;
    #pragma endscop
}
