/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((!(!var_10)))), ((~(min(var_9, 1))))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] = (((((~(arr_1 [i_0 + 2])))) && (((arr_2 [i_0 - 3] [i_0]) || (arr_1 [i_0 - 3])))));
        var_17 = (max(var_17, ((min((arr_2 [i_0] [i_0]), 65535)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_13 [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                        var_18 = (min(var_18, ((((arr_5 [i_0 - 1] [i_3 + 2]) >= (arr_1 [i_3 + 4]))))));
                    }
                }
            }
            arr_14 [i_0] = ((-(22 >> 0)));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_19 = (min(var_19, (((!(arr_9 [i_0] [i_4] [i_4]))))));
                arr_20 [i_0] [i_0] [i_4] [i_5] = (-113 >= 65522);
                var_20 = ((~(max((arr_18 [i_0]), (min((arr_6 [i_0]), (arr_19 [i_4] [i_4])))))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_26 [i_0] [i_6] [i_5] [i_4] [i_0] = ((9 ? ((((max((arr_2 [i_5] [i_7]), -22))) & (min((arr_8 [i_0] [i_4] [i_0] [i_6]), 4294967295)))) : (arr_5 [i_0] [i_0])));
                            var_21 = (min(var_21, (arr_23 [i_6] [i_6] [i_6] [i_6] [i_6])));
                            var_22 = ((((((arr_22 [i_0] [i_4]) ? (arr_22 [i_0] [i_4]) : (arr_22 [i_0] [i_7])))) ? (((arr_22 [i_0] [i_4]) ? (arr_22 [i_0] [i_5]) : (arr_22 [i_0] [i_4]))) : (arr_22 [i_0] [i_6 - 2])));
                        }
                    }
                }
            }
            arr_27 [i_0] = ((-((((arr_6 [i_0]) || ((!(arr_8 [i_0] [i_4] [i_0] [i_4]))))))));
            arr_28 [i_0] = (min(((~(arr_8 [i_0] [i_0] [i_0] [i_0]))), (((1 && (arr_2 [i_0] [i_0]))))));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
        {
            arr_31 [i_0] [i_8] = ((((max((arr_3 [i_0]), (1 / 1)))) ? ((+(max((arr_24 [i_8]), (arr_16 [i_0] [i_8]))))) : (arr_29 [i_0] [i_0] [i_0])));
            arr_32 [i_0] [i_8] = 31;
            var_23 = (min(var_23, (arr_25 [i_0] [i_8] [i_8])));
            arr_33 [i_0] [i_0] [i_0] = ((896718594 < (min((arr_23 [i_0] [i_0 - 3] [i_0 + 1] [i_0] [i_0 - 2]), (arr_23 [i_0] [i_0 + 4] [i_0 - 1] [i_0] [i_0 - 3])))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
        {
            var_24 = (max(var_24, (((((6447006851898607546 || (arr_0 [i_9]))) ? (31 ^ 21) : (1211821534 >> 0))))));
            arr_38 [i_0] [i_0] = ((~(arr_36 [i_0 - 3])));
            var_25 = (arr_16 [i_0] [i_0 + 2]);
            var_26 = (arr_2 [i_0] [i_0]);
        }
    }
    #pragma endscop
}
