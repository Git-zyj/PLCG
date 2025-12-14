/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((arr_5 [i_0] [i_1]) != 8));

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_11 = ((((!(((-(arr_7 [i_0] [i_1] [4]))))))));
                    var_12 = (arr_8 [i_1]);
                    var_13 = var_5;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_17 [14] [6] [i_1] [i_3] [i_4] [i_4] [i_5] = (~280375465082880);
                                arr_18 [i_4] [i_5] [i_1] [i_1] [4] [i_1] [i_4] = ((~(arr_7 [i_5 + 2] [i_5 + 2] [i_5])));
                            }
                        }
                    }
                    var_14 = ((((arr_2 [i_3]) ? (arr_7 [i_1] [i_1] [i_3]) : var_8)) != (((~(arr_14 [i_0] [i_3] [i_3] [i_1] [i_3] [i_3])))));
                    arr_19 [i_0] [i_1] [1] = (~280375465082880);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_1] [i_3] [i_6] [i_7] = (--1);
                                var_15 = 1;
                                arr_28 [i_0] [i_0] [i_0] [i_6] [i_7] = 280375465082880;
                                var_16 = ((var_0 ? var_5 : (arr_25 [i_0] [i_1])));
                            }
                        }
                    }
                    var_17 = (arr_13 [i_1] [11] [i_1] [i_1]);
                }
                arr_29 [i_0] [i_0] = (max(280375465082880, 253));
            }
        }
    }
    #pragma endscop
}
