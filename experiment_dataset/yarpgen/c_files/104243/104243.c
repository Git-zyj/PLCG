/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_10);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((!(arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = (((var_5 % 128) ? 20560 : -17));
                    var_22 = (!-703861028);
                    var_23 = arr_0 [i_2];
                    arr_8 [i_2] [i_0] [i_0] = 204;

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        var_24 = ((20560 ? (arr_11 [i_3] [1] [i_1 - 1] [i_1 - 1]) : var_6));
                        arr_12 [i_1] [i_1] [i_2] &= -210;
                    }
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        arr_15 [i_4 + 2] [0] [i_2] [i_2] [i_1 - 2] [i_0] = arr_4 [i_0] [i_0] [i_4];
                        var_25 -= (((arr_4 [i_2 - 1] [i_4 + 4] [i_1 + 1]) << (((arr_4 [i_2 + 1] [i_4 + 1] [i_1 - 2]) - 139))));
                        var_26 -= ((((((!((!(arr_1 [i_4]))))))) >= var_14));

                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            arr_18 [i_0] [i_1 - 2] [i_0] [i_4] [i_0] [i_0] |= ((-(arr_6 [i_5 - 1])));
                            var_27 = ((201 ? (max(2888338123, 8514374208799363964)) : (!60)));
                            var_28 = (((((((204 && (arr_0 [2]))) ? (arr_13 [i_2] [i_2]) : (!var_2)))) ? (arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (((arr_16 [14] [14] [19]) ? (~var_2) : (!var_15)))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_29 = 1;
                            var_30 = (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        var_31 = var_0;
                    }
                }
            }
        }
        arr_22 [i_0] |= ((((!(~109874073))) ? 4609434218613702656 : ((var_7 | (arr_11 [i_0] [i_0] [i_0] [3])))));
    }
    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {
        var_32 = var_7;
        var_33 = (max(var_0, (arr_4 [8] [8] [i_7])));
        var_34 = ((var_15 && (arr_17 [i_7] [i_7 - 3] [i_7] [i_7 - 3] [i_7])));
    }
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        arr_29 [i_8] &= (((~(arr_28 [i_8 - 1] [i_8]))));
        var_35 -= (!-773116340);
        arr_30 [i_8] &= ((17 && ((max((arr_25 [i_8 - 1]), (arr_25 [i_8 + 1]))))));
    }
    for (int i_9 = 3; i_9 < 8;i_9 += 1)
    {
        arr_34 [i_9] [8] = 17;
        arr_35 [i_9] = (arr_9 [i_9] [6] [18] [0] [2] [i_9 - 2]);
    }
    #pragma endscop
}
