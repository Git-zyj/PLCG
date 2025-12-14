/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = (min(((-(arr_9 [i_2] [i_2] [i_2] [i_2]))), ((14499428700557119970 ? (arr_5 [i_0] [i_0] [4]) : (arr_9 [i_1] [i_1] [i_1] [i_0 + 1])))));
                                var_12 = -17126;
                                arr_15 [i_0 - 1] [i_0] [i_1] [i_2] [i_2] [i_4] = var_4;
                            }
                        }
                    }
                    arr_16 [i_0 - 2] [i_0] [i_1] [i_2] = arr_3 [i_0 - 2];

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_21 [i_5] = (~3947315373152431649);
                        arr_22 [4] = 14499428700557119987;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                arr_29 [0] [i_7] [i_7] = (((arr_24 [i_7]) ? (arr_26 [i_7]) : (((arr_23 [i_7] [18]) ? ((12566 ? 14499428700557119987 : 1184)) : (arr_27 [i_7] [i_7])))));
                var_13 = (min(var_13, 3947315373152431655));
            }
        }
    }
    #pragma endscop
}
