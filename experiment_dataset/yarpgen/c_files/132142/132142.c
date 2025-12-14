/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((~(~-1547394086)))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_19 = arr_2 [i_0 + 1];
        var_20 = (arr_1 [i_0]);
        var_21 += (1608698709 * (max(-1547394086, ((-(arr_2 [i_0]))))));
        arr_4 [i_0] = (((~(arr_0 [i_0 - 2]))));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            {
                var_22 += ((~((18430961125822731760 ? (arr_8 [i_2 + 1] [i_2 + 1]) : (arr_8 [i_2 + 1] [i_2 - 2])))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_19 [i_2] = ((((arr_18 [i_1 - 2] [i_2]) ? -1547394086 : 1642659804)));
                                arr_20 [i_1] [i_2] [i_2] [i_4] [i_5] [i_2] = arr_1 [i_5];
                                arr_21 [i_2] [i_3] [11] [i_5] = var_3;
                                var_23 = (arr_10 [i_2]);
                            }
                        }
                    }

                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        arr_24 [i_6] [i_2] [6] = (arr_14 [i_2] [2] [i_2] [1]);
                        var_24 ^= (arr_0 [i_1 - 3]);
                        var_25 = (arr_8 [i_1 - 1] [i_1]);
                        arr_25 [1] [i_2] [i_2] [i_1] = (arr_15 [i_1 - 3] [i_2 + 1] [4] [4] [i_6 - 2] [i_6]);
                        var_26 += -92;
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_27 = (arr_31 [i_2]);
                            var_28 = (max(-var_5, (max((max(1547394086, 4)), var_5))));
                        }
                    }
                }
            }
        }
    }
    var_29 = (max(var_29, (!var_6)));
    #pragma endscop
}
