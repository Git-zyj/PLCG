/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        var_11 = (max((max((arr_6 [i_3 - 2] [i_2 - 1] [i_2]), 0)), ((max((arr_5 [i_3 - 1] [i_2 + 4] [12]), (arr_5 [i_3 - 2] [i_2 + 4] [i_2]))))));
                        arr_9 [i_3] [17] [1] [i_1] [i_3] = ((~((~(arr_8 [i_2 + 1] [i_2 - 1] [i_3] [i_3 - 1])))));
                        var_12 -= 198;
                        var_13 = (max(var_13, var_3));
                        var_14 = (max(1, (arr_2 [i_0] [i_0])));
                    }
                    arr_10 [i_0] [i_1] [i_2 + 1] = (max((arr_2 [i_0] [i_2 + 1]), (arr_6 [i_0] [i_1] [i_2 - 2])));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_15 = (arr_0 [i_0] [i_0]);
                        arr_13 [i_4] [i_2] [i_2] [i_1] [i_0] = var_0;
                        var_16 = 64;
                        arr_14 [i_0] [i_0] [i_2] [i_4] = (((!var_10) <= (max(var_5, ((max(var_9, var_7)))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_19 [1] = (~var_2);
                        var_17 = (max(var_17, 18446744073709551605));
                        arr_20 [i_0] [i_0] [i_2] [i_2] = (((arr_15 [i_2 + 4] [i_2 + 4] [i_2 + 4] [i_2 - 1] [i_2 - 2]) ? var_7 : (arr_15 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 - 2])));
                    }
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    arr_23 [14] [i_6] [i_6] [i_1] = (max(1126980578, (arr_5 [10] [i_1] [10])));
                    arr_24 [i_0] [4] [i_1] [i_0] = (-1796379874351898855 || -1);
                    arr_25 [13] [13] [13] [i_6] = -18446744073709551605;
                    arr_26 [12] = (max((((arr_17 [i_0] [i_0] [i_0]) * 18446744073709551609)), ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
                }
                var_18 = (max(var_18, (((((3971472687 ? -21717 : (1 - 1796379874351898855))) * 1)))));
                arr_27 [6] [6] [6] = ((-((((120 && var_8) >= 10)))));
                var_19 = var_7;
            }
        }
    }
    var_20 -= var_5;
    var_21 *= var_0;
    var_22 = ((max(1, -13650)));
    #pragma endscop
}
