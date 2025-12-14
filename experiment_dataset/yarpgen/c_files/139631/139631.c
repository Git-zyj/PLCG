/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_11 = (((arr_1 [i_0]) < (((arr_0 [i_0 - 1]) | var_10))));
        arr_2 [i_0] = (arr_0 [i_0 + 2]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_0] = 4909989695589860368;
            arr_6 [i_1] [i_1] = (((!0) >= var_7));
            var_12 = (min(var_12, (!-8176)));
        }

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_0 + 4] [i_2] = ((arr_4 [i_0 + 2] [i_0 + 4] [i_0 + 2]) ? (((max(225, 225)))) : (arr_4 [i_0 + 4] [i_0 + 1] [i_0 + 4]));
            arr_10 [i_2] = (2724 & 38665);
            var_13 = (min(var_13, (((63034 ? 19 : 252)))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_14 = ((((var_4 ? (arr_7 [i_0]) : 65223)) <= (!var_6)));
            var_15 = (arr_11 [i_3] [i_0 + 1]);

            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                arr_17 [i_3] [i_3] [i_3] = (((((var_9 ? (arr_4 [2] [2] [i_4]) : (arr_11 [i_0 + 2] [i_4])))) ? var_6 : ((((arr_0 [i_3]) >= 1)))));
                var_16 = (min(var_16, ((((((arr_11 [i_3] [i_4]) ? var_0 : 1043397685)) == (!1))))));
            }
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                var_17 = ((~((var_7 ? var_5 : var_4))));

                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    var_18 = 26874;
                    var_19 = (min(var_19, var_9));
                    arr_23 [i_3] [i_3] = (((var_9 ? var_7 : (arr_0 [i_6]))));
                    arr_24 [i_6] [i_3] [i_3] [18] = var_0;
                    var_20 = (((arr_20 [i_5 + 3] [i_5 + 3] [i_3] [i_6 + 3]) ? (arr_20 [i_5 - 3] [i_5 - 3] [i_3] [i_6 - 1]) : 33));
                }

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    arr_28 [i_0] [i_3] = var_10;
                    var_21 = ((arr_7 [i_0 + 1]) - var_7);
                    var_22 = 1;
                }
                var_23 = (max(var_23, var_2));
            }
            var_24 = ((arr_8 [i_0 - 1]) / var_10);
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    {
                        var_25 = (max(var_25, ((max((min((min(var_8, 1409505915246319769)), ((min(32760, 14243))))), 1)))));
                        var_26 = (min(var_26, ((((((min(-30389, (arr_22 [i_0] [i_0 + 1] [i_10 - 1] [0]))))) + (((((57 - (arr_22 [14] [4] [i_9] [2])))) ? (arr_26 [i_10 + 1] [i_10] [11] [i_10 - 1] [1] [11]) : (((arr_29 [20]) ? var_8 : var_10)))))))));
                        var_27 = (max(var_27, (((((((-78 ? var_0 : (arr_15 [i_10]))))) ? var_3 : (((((var_7 && (arr_27 [i_10])))) * (2305843009213693952 <= 18039))))))));
                    }
                }
            }
            var_28 = 18647;
            arr_36 [i_8] = (max((((1 ? 15614 : 6260388971414640374))), var_2));
        }
        var_29 = (min(var_29, ((min(-18639, var_5)))));
    }
    var_30 = (min(var_30, (((var_6 | ((min(var_3, var_5))))))));
    var_31 = (((!var_7) | ((((2045591218 ? 18637 : 1)) | var_1))));
    var_32 = ((var_3 ? var_7 : 697029874073704234));
    var_33 = -362109766;
    #pragma endscop
}
