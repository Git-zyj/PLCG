/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((-(arr_0 [i_1 - 2]))) % (((arr_1 [i_1 + 1]) ? 1 : -32751))));
                arr_6 [i_0] = (~220164376257198774);

                /* vectorizable */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [12] = (~2097152);
                    arr_10 [i_0] [i_0] = ((-4294967281 >> (arr_4 [i_0] [i_1 + 2])));
                    arr_11 [i_0] [i_1] [i_2] = ((~(arr_7 [i_2 - 2] [i_2] [7])));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_14 [i_3] [i_1 - 1] [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_0]);
                    arr_15 [i_0] [i_0] [i_1] [i_3] = var_5;
                    arr_16 [i_0] [i_0] [i_0] [i_3] = 2097151;
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    arr_19 [i_0] [i_1 + 3] [i_0] = ((~((-(arr_8 [i_0] [i_0] [i_1 + 1] [i_4])))));
                    arr_20 [i_4] [i_1] = (!242);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 13;i_7 += 1)
            {
                {
                    arr_29 [i_5] [i_7] [9] = ((~(max((((var_6 ? 0 : 96))), ((~(arr_18 [i_5] [i_5] [i_5])))))));
                    arr_30 [i_7] [i_6] [i_6 + 1] = (((13544862379286090862 - 1) + 528482304));
                    arr_31 [13] [i_7] [i_7] = ((~((~(max((-32767 - 1), 18446744073707454464))))));
                    arr_32 [i_5] [8] [i_7] [4] = (min(var_13, (arr_12 [i_6])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_38 [i_7] [i_5] [i_7] = ((-((var_6 & (arr_8 [i_5] [i_5] [i_5] [4])))));
                                arr_39 [i_8] [i_9] [i_7] [i_7] [1] [1] = (arr_25 [5] [i_6 + 1]);
                                arr_40 [i_5] [i_5] [i_6 + 1] [i_7] [i_8] [i_7] = ((!((var_8 <= ((var_11 ? -220164376257198774 : 4901881694423460753))))));
                                arr_41 [i_7] [i_6] [i_7] [i_5] [i_5] &= ((((((~1) ? 3 : ((min((arr_4 [i_6 - 3] [i_6]), 1)))))) ? 1 : (arr_8 [i_6] [i_5] [i_6] [i_5])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((!((min(var_9, var_9)))));
    #pragma endscop
}
