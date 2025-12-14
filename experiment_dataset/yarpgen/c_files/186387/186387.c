/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (2383075246 + 1911892050);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [2] [i_2] [i_4] [i_4] = 1911892049;
                                var_21 = ((2383075246 ? ((((((arr_10 [i_4] [i_3] [i_2] [i_1 - 1]) ? (arr_16 [i_0] [5]) : (arr_15 [i_2] [i_2] [i_2] [i_2] [i_0]))) < (((arr_9 [i_1]) & var_0))))) : ((~(arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1 - 1])))));
                                var_22 = (((((((max(24663, -526652728))) ? (((var_7 != (arr_0 [i_0])))) : (arr_5 [i_0] [i_0])))) ? (((!(arr_5 [i_1 + 2] [i_0])))) : ((((arr_15 [i_0] [i_1] [i_1] [i_2] [i_4]) != (arr_3 [i_4]))))));
                                arr_19 [i_3] [i_1] [i_1] [1] [i_1] [12] |= 12;
                                var_23 = (max(var_13, ((-var_5 ? (arr_11 [i_0] [i_1 + 2] [i_4] [6] [i_4] [i_1 + 4]) : (arr_0 [i_1 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_18;
    var_25 = (var_11 & 1911892036);

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {

        for (int i_6 = 3; i_6 < 23;i_6 += 1)
        {
            var_26 = (((arr_23 [i_5]) ? (((arr_24 [i_5] [i_6] [i_6 + 1]) | (arr_24 [i_5] [i_6 - 1] [i_6 - 1]))) : -7));
            var_27 = (((((arr_24 [i_5] [i_6 - 1] [i_6 + 1]) < (arr_25 [i_6] [i_6 - 3] [i_5]))) ? ((((104 <= (arr_25 [i_5] [i_6] [i_5]))))) : (((((0 ? var_13 : (arr_23 [i_5])))) ? (((max((arr_24 [i_5] [18] [i_6]), (arr_25 [i_5] [i_6] [i_5]))))) : (((arr_21 [i_5]) << (((arr_24 [i_5] [i_5] [i_5]) - 77))))))));
            arr_26 [i_5] [i_5] = (~((~(arr_25 [i_5] [16] [i_5]))));
            var_28 = (((((arr_24 [i_5] [i_6] [i_6 + 1]) != var_6))) - ((min((arr_24 [i_5] [i_5] [i_6 + 1]), var_11))));
            var_29 = (max((((arr_24 [i_5] [i_5] [i_5]) ? ((min(-24670, 3340834249))) : 8194996675630858493)), 10251747398078693123));
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            arr_40 [i_5] [10] [i_8] [i_9] [i_5] = (arr_20 [i_5]);
                            arr_41 [14] [i_7] [0] [i_9] [i_5] = (0 & (!2147483647));
                        }
                    }
                }
            }
            var_30 |= (2738278638 != 2738278636);
            var_31 = (min((min((arr_25 [i_5] [i_7] [i_5]), var_12)), ((~(arr_37 [i_7] [i_7] [1] [i_5] [i_5])))));
        }
        arr_42 [i_5] = (i_5 % 2 == 0) ? (max((min(((~(arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [10]))), ((((-127 - 1) != (arr_29 [i_5] [i_5])))))), (((arr_32 [i_5]) << (var_19 - 1857728379))))) : (max((min(((~(arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [10]))), ((((-127 - 1) != (arr_29 [i_5] [i_5])))))), (((((arr_32 [i_5]) + 2147483647)) << (((var_19 - 1857728379) - 7))))));
    }
    var_32 = (min(((~(max(var_0, var_4)))), var_8));
    #pragma endscop
}
