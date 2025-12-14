/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1664650971;
    var_17 = (max(var_17, var_10));
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = ((33554431 ? 1664650955 : 4156873342));
                var_20 = ((-4156873342 >> ((var_5 ? 0 : (arr_1 [i_0] [i_1])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_21 = (~var_0);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = (((arr_3 [i_0] [i_1]) != 1664650975));
                                var_22 = (((arr_10 [i_4 - 1]) ^ (arr_7 [i_4 + 3] [i_4 - 1] [i_4 + 2])));
                                var_23 = (((arr_4 [i_2] [i_4 + 1] [i_4]) ? (arr_7 [i_4 + 2] [i_4 - 1] [i_4 - 1]) : ((0 ? 1 : var_12))));
                            }
                        }
                    }
                    var_24 = (arr_1 [i_2] [i_1]);
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_25 = ((1664650970 ? 1664650975 : 1));
                                var_26 = ((-(((arr_16 [i_7] [i_7 - 1] [i_7] [i_7] [i_1] [i_7]) ? (arr_20 [i_6] [i_7 - 1] [i_7] [i_7] [i_7] [i_7] [i_7]) : 1))));
                                arr_21 [i_1] [i_6] [i_5] [i_1] = ((1 ? (arr_0 [i_0] [i_1]) : (((max(-1, 1))))));
                            }
                        }
                    }
                }
                var_27 = var_4;
            }
        }
    }
    var_28 = ((max(18244036, 0)) > (((max(233, var_7)))));
    #pragma endscop
}
