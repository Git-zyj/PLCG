/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((((((arr_5 [i_1]) >= -123214260)) ? (min(var_5, (arr_4 [i_0]))) : -41704599))) ? (max(((179942800 ? (arr_0 [i_1]) : 65528)), (min(1789961165, var_12)))) : var_11));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [14] [i_2] = ((769918548 ? (arr_4 [i_2]) : 10));
                    arr_11 [i_0] [i_1] [i_0] = 652928611;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] |= 33381;
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1]), (max((arr_2 [i_4 + 1] [i_4]), (arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 1])))));
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_2] [0] [i_4] = var_10;
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    arr_23 [i_1] [i_1] = (((max((arr_0 [i_5]), 130560)) >= var_10));
                    arr_24 [i_0] [i_0] [i_0] [i_0] = (+((var_0 / ((((arr_9 [i_0] [i_0] [i_0] [i_0]) <= (arr_21 [i_0] [i_0] [i_1] [i_0])))))));
                    arr_25 [i_0] [i_1] = max((arr_12 [i_0] [i_0] [i_1] [i_1] [i_5]), (917504 / 47844));
                }
            }
        }
    }
    #pragma endscop
}
