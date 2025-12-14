/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_5 + var_1);

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (((((arr_3 [i_0 + 1] [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (-766382292 / var_11))) & -766382292));
        arr_5 [i_0] [i_0] = ((var_12 >= ((((arr_2 [i_0 + 1]) && (arr_2 [i_0 - 1]))))));
        arr_6 [i_0 + 1] = ((766382291 ? (max(4822225883898087143, -246893799)) : -766382291));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_13 [i_2] = ((((~-4822225883898087144) && (((-(arr_8 [i_0] [i_2])))))) ? (arr_0 [i_0]) : ((((-23588 ? 8654066892428674701 : -766382292)) | 32767)));
                    arr_14 [14] [i_1] &= var_1;

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        arr_18 [i_2] [i_1] [i_2] [i_3] [i_1] = (min((arr_15 [i_0 + 1] [i_3] [i_3 + 1] [i_3]), 4822225883898087143));
                        arr_19 [i_0] [i_2] [i_2] [i_3] = ((var_3 % (~-246893806)));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_22 [i_0 + 1] [i_2] [i_0] [i_0] [i_0 - 1] [i_0] = ((((var_10 ? 12041461180354338361 : (arr_11 [i_2] [i_1] [i_2] [i_0 + 1])))) ? (max(((min((arr_10 [i_4] [i_1] [i_0]), (arr_1 [i_1])))), -var_14)) : ((max(-1678753527, (arr_9 [i_0 - 1] [i_0 + 1])))));
                        arr_23 [i_0 - 1] [i_2] [i_0 + 1] [i_0] = (((~32767) ? ((var_7 ? 4523223768392915061 : var_12)) : (arr_15 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_27 [i_0 - 1] [i_1] [i_2] [4] = 8654066892428674701;
                        arr_28 [i_5] [i_2] [i_2] [i_2] [i_0] = (((!(arr_8 [i_5] [i_0 + 1]))));
                    }
                    arr_29 [i_0] [i_0 - 1] [i_0 - 1] [10] = 32767;
                }
            }
        }
        arr_30 [i_0] = (min(var_2, (arr_8 [i_0 + 1] [i_0 - 1])));
    }
    for (int i_6 = 3; i_6 < 23;i_6 += 1)
    {
        arr_33 [i_6 - 1] [i_6] = ((min((arr_31 [i_6 - 2]), (arr_31 [i_6 - 3]))));
        arr_34 [i_6] [i_6 - 2] = (~var_14);
    }
    var_21 = var_1;
    #pragma endscop
}
