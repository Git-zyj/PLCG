/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_8 % var_11);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [8] [8] = ((((-(arr_3 [i_0] [i_1] [i_0])))));
                var_15 = (max(var_15, (arr_3 [i_0 + 1] [i_0 + 1] [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 = (arr_11 [i_1] [i_3] [i_1] [i_1] [i_1]);
                                var_17 = (max((arr_13 [i_4 - 1] [i_2 - 1] [i_2] [0] [i_4 - 1] [i_0 - 1]), -var_5));
                                var_18 = (max(var_18, (((-var_6 < (((1 ? (arr_4 [i_0 + 1] [i_0 + 1]) : (arr_4 [i_0 - 1] [i_0 - 2])))))))));
                            }
                        }
                    }
                }
                var_19 = (min(var_19, (arr_9 [i_0] [i_0] [i_0] [i_0])));
                var_20 = (((~var_11) ? (arr_2 [i_0] [i_1]) : (max((~108), (min(1, var_13))))));
            }
        }
    }
    #pragma endscop
}
