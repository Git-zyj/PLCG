/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (arr_0 [i_0]);
        arr_5 [i_0] = (arr_3 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_12 = ((-(arr_7 [i_1 + 4])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_14 [10] [10] [0] [i_4] [i_3] [i_4] |= (~588777928875906451);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_18 [i_1] [6] [i_3] [i_2] &= ((!((((arr_15 [1] [i_2] [i_2] [i_4]) ? (arr_15 [2] [i_2] [i_2] [i_2]) : -588777928875906443)))));
                            arr_19 [i_2] [i_5] [i_4] [i_4] [i_2] [i_2] [i_2] = (arr_16 [i_1 + 4] [i_2] [i_3 + 3] [i_4] [i_5]);
                            arr_20 [i_1] [i_1] [i_3 + 2] [i_2] [i_5] [i_2] [i_2] = (((!18839) ? ((var_4 ? (arr_12 [i_5] [i_5] [i_2] [i_5]) : (arr_11 [i_1] [i_1] [i_1] [i_1]))) : ((((arr_9 [i_1] [i_4] [i_2]) || -588777928875906446)))));
                            var_13 = ((-(arr_10 [i_1 + 2] [i_1 + 4])));
                            var_14 |= (((arr_11 [i_1 - 1] [i_1 - 1] [i_3] [i_3 + 3]) ? 18839 : (arr_12 [i_1 + 3] [4] [12] [i_3 + 1])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_26 [i_2] [i_2] [i_2] [i_2] = -588777928875906451;
                        arr_27 [i_1] [i_1] [1] [i_2] [i_7] = 588777928875906426;
                        arr_28 [2] [i_2] [i_2] [i_1] = 18837;
                    }
                }
            }
            arr_29 [i_2] = (((arr_21 [i_1 + 3] [i_1 + 3]) ? 65525 : 18837));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
        {
            var_15 = ((((2802567744 ? 3380244401 : 174035977)) | (arr_7 [i_1])));
            var_16 = 588777928875906439;
            arr_32 [i_8] [i_1] [i_8] = arr_21 [i_1 + 2] [i_1 + 4];
        }
        var_17 = max((((arr_31 [10]) ? (arr_10 [i_1 + 2] [i_1]) : (!5094))), -199);
        arr_33 [i_1] |= var_9;
        arr_34 [i_1] &= ((((((((5088 ? (arr_22 [i_1] [i_1 - 1] [2]) : (arr_22 [i_1 + 4] [i_1] [i_1])))) ? (arr_13 [i_1 + 4] [i_1 + 4] [i_1] [10] [10] [i_1]) : ((-1694576503922065231 ? (arr_30 [12]) : (-9223372036854775807 - 1)))))) ? (arr_15 [0] [i_1] [2] [i_1 - 2]) : (min((arr_15 [1] [1] [i_1] [1]), (((arr_23 [i_1] [0] [0] [i_1]) ? 588777928875906449 : (arr_15 [12] [0] [i_1] [i_1 + 4])))))));
    }
    var_18 = (~1);
    #pragma endscop
}
