/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_8, var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_12 [i_1] [1] [i_3] = var_19;
                        arr_13 [4] [i_1] [i_1] [i_3] = max(65520, (arr_8 [i_0] [2] [i_0] [i_0]));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_4] = ((-((-((2565405662 ? 2565405664 : var_13))))));
                        var_21 = (arr_8 [i_4] [i_2] [i_1] [11]);
                        var_22 = ((((((arr_6 [i_0] [i_1] [i_4]) ? (arr_6 [i_4] [i_1] [i_0]) : (arr_6 [i_0] [i_4] [i_0])))) && (((arr_15 [i_0] [15] [i_2] [15]) || (arr_9 [i_0] [6] [i_0])))));
                    }
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        var_23 = (max((((((min((arr_2 [20]), (arr_14 [i_0])))) >= ((2565405671 ? -2226 : 41588))))), ((23937 ? (((110 ? 16172 : (arr_5 [i_0] [i_0] [i_0] [i_0])))) : ((var_3 ? 2565405660 : (arr_11 [i_0] [i_0] [i_2] [i_0] [i_5 + 2])))))));
                        arr_20 [5] [i_0] [i_0] [i_0] [i_0] = max((((~94533458) << (arr_2 [i_5 + 4]))), (arr_9 [i_0] [i_0] [i_0]));

                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            arr_23 [i_0] [i_6] [i_5] [i_2] [14] [i_0] [i_0] = (((((~((((arr_8 [i_6 + 1] [i_5] [i_1] [i_0]) || var_13)))))) ? ((-(arr_2 [i_6 - 1]))) : ((~(arr_7 [i_6 + 1] [i_6])))));
                            arr_24 [i_0] [i_0] [i_2] [i_5] [i_5] = var_0;
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_28 [23] [i_1] [i_2] [23] [i_5] [i_7] [i_2] = (max(((~(arr_18 [i_0] [10] [i_0] [i_0] [i_0] [i_0]))), (((arr_14 [i_5 + 2]) ? var_8 : (arr_14 [i_5 + 1])))));
                            arr_29 [i_0] [i_1] [i_2] [i_5] = ((-2226 ? 1 : ((((arr_14 [i_5 - 1]) || 3221225472)))));
                            arr_30 [i_0] [i_1] [i_2] [i_5 + 4] [i_5] [i_7] = ((+(((arr_3 [i_5 + 4]) - (arr_3 [i_5 + 2])))));
                            arr_31 [i_0] [2] [16] [15] [i_7] = (min(68719476736, (((arr_22 [i_5] [i_5] [i_5] [i_5 + 2] [i_5 + 2] [i_5]) + var_11))));
                        }
                        arr_32 [i_5] [i_5] [i_5] [i_2] [i_0] [i_0] = ((!(((2227 ? (arr_10 [i_0] [i_5 - 2] [i_5 + 4] [i_5 + 4]) : 1)))));
                        arr_33 [i_0] = 1;
                    }
                    var_24 = (-32767 - 1);
                }
            }
        }
    }
    var_25 = var_13;
    #pragma endscop
}
