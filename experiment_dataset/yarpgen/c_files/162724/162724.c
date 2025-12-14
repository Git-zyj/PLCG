/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (((min(93, 1569648749))) ? (((arr_4 [i_0 + 3]) ? (arr_4 [i_0 - 1]) : -1)) : (arr_1 [i_0 + 1] [i_0 + 1]));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] = ((((-(arr_9 [i_0 - 1]))) >> ((((arr_8 [i_1]) || 1733304919)))));
                            arr_12 [i_0 - 1] [i_0 + 3] [19] [i_0] [i_0 - 1] [i_0 + 1] = (((((arr_2 [i_2 - 1] [i_2 + 1]) * (arr_2 [i_2 + 1] [i_2 - 1]))) * (arr_2 [i_2 + 1] [i_2 - 1])));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_15 [12] |= ((((-(arr_4 [i_0])))) ? ((~(arr_7 [i_4] [24] [i_0]))) : (arr_0 [i_0] [i_1]));
                    arr_16 [i_4] [i_1] [i_4] [i_0] = (arr_3 [i_4] [i_0 + 2]);
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    var_18 = (((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0 - 1] [i_1]) : (arr_9 [i_5 + 2])));
                    var_19 = (~2725318540);

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        var_20 = (max(var_20, (((~(arr_19 [i_0 + 2] [i_5 + 1] [i_6 - 1] [i_6 + 4] [i_6 + 3] [i_6]))))));
                        var_21 = (((arr_0 [i_6 - 1] [i_0 + 2]) ^ (arr_0 [i_6 - 1] [i_0 + 2])));
                    }
                    var_22 = (arr_6 [i_5 + 2]);
                }
            }
        }
    }
    var_23 = var_2;
    var_24 |= max((!var_7), (-29547 % 3221225472));
    var_25 = 1073741823;
    var_26 = 168;
    #pragma endscop
}
