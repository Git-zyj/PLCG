/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((1769953013 ? 910920569 : 3384046727)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = ((((min((arr_2 [i_0] [i_0] [i_0]), (65535 <= -1769953009)))) % ((65520 + (arr_5 [i_0])))));
                    var_16 = ((1769953009 | ((min(65520, 60)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_3] [i_2] [i_2] [2] [i_2] [i_0] = ((var_4 + (arr_1 [i_0] [i_0])));
                        arr_11 [i_2] = ((13 & (arr_2 [i_2] [10] [1])));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_17 = (max(var_17, (((~(arr_1 [i_0] [i_1]))))));
                            arr_16 [8] [i_2] [i_2] [i_2] [i_0] = (((arr_5 [i_1]) >> (((arr_5 [i_0]) - 12766977836991944594))));
                            var_18 = (((arr_8 [i_0] [i_3] [i_2] [i_0]) != (arr_8 [i_4] [6] [i_2] [i_0])));
                            var_19 = (((arr_4 [i_0] [i_0] [i_2]) ? 6034315599585871798 : (arr_4 [i_1] [i_3] [i_2])));
                            arr_17 [i_2] [i_3] [i_2] [i_1] [i_2] = (((arr_7 [i_2] [i_1] [i_2]) ^ (arr_6 [i_2] [i_2])));
                        }
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            arr_20 [i_2] [i_1] [i_2] [i_2] [i_1] = (arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [i_2]);
                            var_20 = (arr_4 [3] [0] [i_2]);
                            var_21 = ((var_10 ? (arr_19 [i_3] [i_2] [9]) : (arr_4 [i_0] [i_1] [i_2])));
                        }
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            var_22 = (arr_9 [i_6 + 2] [i_6 + 1] [i_2] [6] [i_6]);
                            var_23 += ((-6034315599585871783 ? (((85 >> (((arr_4 [i_0] [4] [8]) - 3227))))) : var_5));
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            var_24 = var_7;
                            arr_25 [i_2] = ((var_3 ? var_10 : var_0));
                            var_25 = (((arr_21 [i_7 + 1] [i_7 + 1] [1] [0] [i_7 - 1]) ? (arr_21 [i_7 - 1] [i_7 - 1] [i_7 - 1] [4] [i_7 + 1]) : var_3));
                            arr_26 [i_2] [i_1] [9] [1] = (arr_2 [i_1] [9] [i_7]);
                        }
                        arr_27 [i_2] [i_2] [i_2] = (arr_7 [i_2] [i_1] [8]);
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        arr_30 [i_2] [i_2] [i_2] [7] = (((arr_29 [6] [i_8 + 1] [i_2] [1] [i_8 - 1]) + (arr_29 [3] [i_8 + 1] [i_2] [i_8] [i_8 - 1])));
                        arr_31 [i_2] [i_2] [i_2] [10] [i_8] = ((187 >> (255 - 237)));
                        arr_32 [i_0] [i_8] [i_1] [10] [i_8 - 2] &= (arr_24 [i_8 + 1] [0] [i_1] [i_0] [i_1] [i_0] [i_0]);
                        var_26 *= ((((3 ? 8984144991418960784 : var_7)) <= (-127 - 1)));
                    }
                }
            }
        }
    }
    var_27 = (1769953009 != 6034315599585871798);
    var_28 = var_8;
    #pragma endscop
}
