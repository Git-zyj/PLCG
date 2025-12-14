/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((var_0 ? var_2 : (-75 || 0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = ((!((((arr_2 [i_1] [i_0]) ? (((arr_5 [i_1] [i_0] [1]) ? 1 : (arr_3 [i_0]))) : (((arr_8 [i_0]) ? (arr_4 [i_0]) : 1)))))));
                    var_14 = (min(var_14, var_3));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_2] [i_3] [i_4] = arr_4 [i_0];
                                arr_16 [i_3] [i_1] [i_0] = (!(arr_4 [i_0]));
                                var_15 = (((((~(~var_11)))) ? (((arr_11 [i_0] [i_1] [6] [3] [i_1]) ? ((min((arr_0 [i_0]), var_1))) : (~var_4))) : ((((arr_11 [i_0] [i_3 + 2] [i_3] [i_4 + 2] [i_4]) > var_2)))));
                                arr_17 [i_0] = (arr_11 [i_0] [i_1] [4] [i_3] [i_3]);
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_1] [i_0] = ((((arr_2 [i_0] [i_0]) ? (arr_2 [i_1] [i_0]) : (arr_3 [i_0]))));
                }
            }
        }
    }
    var_16 = (min(var_2, (min(((1 ? 58421591 : 1)), 1))));
    var_17 = var_9;
    #pragma endscop
}
