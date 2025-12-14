/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, -var_0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1 - 2] [i_0] = ((((min(52, (arr_4 [i_0 + 3] [i_0 + 3])))) + -21825));
                    var_13 = (((3393219141 ? -19795 : 47074)));
                    var_14 = (((arr_5 [i_0] [i_1] [i_2]) < (arr_5 [i_2 - 1] [i_2] [i_2 - 1])));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_15 -= (arr_3 [i_3] [8]);
        arr_14 [i_3] = (min((((((arr_0 [i_3]) ? (arr_0 [i_3]) : (arr_7 [i_3] [i_3]))) + (arr_1 [i_3]))), ((max((arr_8 [i_3] [i_3] [i_3] [5]), 122)))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_26 [i_3] [i_3] [i_7] [i_6] [8] [i_5] = (((arr_24 [i_3] [i_7 - 3] [i_6] [i_6] [i_4 + 1]) > 1));
                                var_16 = ((min((arr_3 [i_4 - 1] [i_4 - 1]), (arr_2 [i_4 - 1] [i_4 + 1]))));
                                arr_27 [i_3] [i_3] [i_3] = (max((((arr_25 [i_7] [i_7 - 1] [i_7 - 3] [i_7] [i_7 - 2]) ? (arr_25 [i_7] [i_7 + 1] [i_7 - 3] [i_7 - 3] [i_7 - 1]) : (arr_25 [i_7 - 2] [i_7 + 1] [i_7 - 3] [i_7] [i_7 + 1]))), (arr_25 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7] [i_7 + 1])));
                                arr_28 [i_3] [i_4] [i_5] [i_6] [i_7] [i_5] [i_7] = ((min(39406, 229227874)));
                            }
                        }
                    }
                    arr_29 [i_3] [i_4] [i_5] = (~115);
                }
            }
        }
        arr_30 [i_3] = ((((max((arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_22 [i_3] [2] [i_3] [2] [2] [i_3])))) - (min((arr_21 [i_3]), (arr_13 [i_3])))));
    }
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        arr_34 [i_8] [i_8] = ((((min((arr_0 [i_8 - 2]), (arr_0 [i_8 - 1]))))) > ((+(min((arr_0 [i_8]), -5936992121986828959)))));
        arr_35 [i_8] = (-(arr_8 [i_8] [i_8 - 2] [i_8 - 1] [i_8 - 1]));
        arr_36 [i_8 - 1] = (arr_4 [i_8 - 2] [i_8 - 2]);
    }
    var_17 = var_3;
    var_18 = -52;
    #pragma endscop
}
