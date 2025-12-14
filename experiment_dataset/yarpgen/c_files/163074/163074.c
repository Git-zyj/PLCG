/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = 550608228;
        arr_4 [i_0] = ((!((!(arr_2 [i_0])))));
        var_11 = (arr_0 [i_0] [i_0]);
        var_12 = -25631;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = 550608219;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            var_13 = (!550608216);
                            var_14 = ((~(arr_1 [i_1])));
                        }
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            var_15 = ((-(arr_19 [i_1] [i_2] [i_3] [i_4] [i_6])));
                            arr_20 [i_6] [i_4] [i_1] [i_1] [i_2] [i_1] = (arr_1 [i_1]);
                        }
                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            arr_24 [i_1] [i_1] = 0;
                            var_16 = (arr_22 [i_1]);
                            var_17 = ((!(arr_6 [i_2])));
                            arr_25 [i_1] [i_4] [i_3] [i_2] [i_1] = ((!(arr_22 [i_1])));
                        }
                        var_18 = (~89);

                        for (int i_8 = 3; i_8 < 9;i_8 += 1)
                        {
                            arr_28 [i_1] [i_2] [i_1] [i_4] [i_8] = ((-(arr_14 [i_8 + 1] [i_8 - 3] [i_8 - 2] [i_8] [i_8 - 2] [i_8 - 1])));
                            arr_29 [i_1] [i_1] [i_3] [i_4] [i_4] [i_8] = -39;
                            var_19 = 5736756181165574133;
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            arr_32 [i_9] [i_2] [i_4] [i_1] [i_9] [i_2] [i_1] = (!(arr_17 [i_1] [i_2] [i_3] [i_4] [i_9] [i_9]));
                            var_20 = (-(((!(arr_9 [i_2] [i_9])))));
                            var_21 = (arr_22 [i_1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
