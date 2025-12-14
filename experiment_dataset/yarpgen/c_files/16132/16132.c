/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((-(((!(arr_4 [i_0] [i_1])))))))));
                var_14 = (((((-(arr_0 [i_1 + 1])))) - (min((((arr_1 [i_1]) ^ 8879475473929260912)), var_2))));
                arr_5 [i_0] = (((arr_2 [i_1 - 3]) ? var_4 : (min((((var_8 && (arr_4 [i_0] [i_1])))), (((arr_0 [i_0]) / var_7))))));
            }
        }
    }
    var_15 = 16385290001432256282;

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_16 = (min(var_16, ((((((arr_7 [i_2] [i_2]) || -1)) ? (min((arr_6 [i_2] [i_2]), (arr_6 [i_2] [i_2]))) : ((((((max((arr_7 [i_2] [i_2]), var_6))) || ((!(arr_6 [2] [i_2]))))))))))));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            var_17 = (((arr_7 [i_3 + 1] [i_3]) ? (arr_8 [i_3]) : (((arr_7 [i_2] [i_3]) | (arr_9 [i_2] [i_2] [i_2])))));
            arr_10 [i_2] [i_3] = (((arr_6 [7] [i_3 + 2]) | (arr_7 [i_2] [i_3])));
        }
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_16 [i_5] [i_5] = (min(25, 2));
                arr_17 [i_5] [i_4] [i_4] [i_4] = var_5;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_22 [i_2] [i_4] [i_5] [i_6] [i_5] = (((arr_19 [i_7] [i_7] [i_7] [i_7 - 1] [i_7 + 2]) << (((arr_8 [i_5]) - 55739))));
                            arr_23 [i_7 - 1] [i_7] [i_5] [10] [i_5] [i_2] [1] = ((min((min((arr_7 [i_4] [i_6]), (arr_7 [i_4] [i_7]))), (arr_15 [i_5] [i_4]))));
                            arr_24 [i_2] [i_4] [i_5] [i_5] [i_7] = (arr_21 [i_2] [i_2] [i_4 - 1] [i_5] [i_6] [i_7] [i_7]);
                        }
                    }
                }
                var_18 |= ((!(arr_19 [i_2] [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_5])));
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_19 -= max((max((arr_9 [i_4 + 1] [i_4 - 3] [i_4 - 3]), (arr_9 [i_4 - 2] [i_4 + 2] [i_4 + 1]))), (arr_9 [i_4 - 3] [i_4 - 2] [i_4 + 1]));
                var_20 = arr_19 [i_2] [i_4] [i_8] [i_8] [i_8];
                var_21 = (arr_13 [i_2] [i_4 - 2] [i_8]);
                arr_28 [i_2] = arr_13 [i_2] [i_2] [i_2];
            }
            var_22 = ((max(var_7, (min(var_3, (arr_26 [i_2] [i_2] [i_2] [4]))))) + (((((arr_20 [i_4 - 2] [i_2] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 + 1]) && (arr_20 [i_4 + 2] [i_2] [i_4] [i_4] [i_4 + 2] [i_4] [i_4 - 2]))))));
            var_23 = (max(var_23, -18));
            arr_29 [i_2] [10] [i_4] = ((-((-(arr_7 [i_4 - 3] [i_4 + 1])))));
        }
    }
    #pragma endscop
}
