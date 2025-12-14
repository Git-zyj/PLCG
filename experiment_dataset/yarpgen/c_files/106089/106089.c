/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_1] [i_1] = (((max((((arr_2 [i_1]) ? 1 : 1)), (arr_0 [i_1]))) << (var_8 - 99)));
            arr_5 [i_1] [i_1] = (((!1) ? (((arr_3 [1]) % (arr_3 [i_0]))) : ((((arr_3 [i_0]) > var_13)))));
            arr_6 [i_1] = (((!1) << (((((var_1 < 1) ? 247 : ((56 ? 1 : 197)))) - 221))));
        }

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_2] [i_2] = (((arr_2 [i_2]) / ((var_1 ? var_6 : ((max(1, 105)))))));
            arr_10 [5] [12] [i_2] = ((((min((arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1]), (((arr_2 [i_2]) ? (arr_2 [i_2]) : var_3))))) || ((max(-1, var_9)))));
            arr_11 [i_2] [i_2] = ((((max(var_0, (arr_0 [i_2 - 1])))) & 1));
        }
        arr_12 [i_0] = (max(var_14, (min((arr_7 [i_0] [i_0] [i_0]), ((0 ? (arr_2 [0]) : (arr_1 [1])))))));
        arr_13 [i_0] = ((31 ? 1 : (!var_16)));
        arr_14 [1] [i_0] = (((max(var_2, (arr_2 [6])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_24 [i_3] [i_4] [i_3] = (arr_23 [3] [3] [i_5 + 1]);
                        arr_25 [1] [i_6] [i_3] [1] [i_4] [i_4] = (arr_19 [i_5 + 1]);
                    }
                }
            }
            arr_26 [i_3] [i_4] [i_3] = (var_2 > 0);
            arr_27 [i_4] [i_4] [i_4] = -1;
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_31 [i_3] [i_7] [i_3] = ((-(arr_29 [i_7])));

            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                arr_34 [i_3] [i_7] [i_8] = (arr_17 [i_3] [i_7]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        {
                            arr_40 [i_10] [i_3] [1] [i_3] [1] = ((var_0 ? 116 : ((var_15 ? var_7 : (arr_20 [i_9] [6] [i_7] [4])))));
                            arr_41 [i_10] [i_10] [i_8] [i_9] [i_10] [i_3] = ((var_15 ? 1 : ((236 ? (arr_30 [i_7] [i_7] [i_3]) : (arr_20 [8] [i_8] [8] [i_3])))));
                        }
                    }
                }
            }
            arr_42 [i_3] = (((25 ? var_7 : var_7)));
        }
        arr_43 [1] = (arr_32 [1] [i_3] [1]);
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_47 [i_11] = ((-(arr_16 [2])));
        arr_48 [i_11] = (!var_14);
    }
    var_18 = ((-(max(var_17, ((36 ? var_12 : var_2))))));
    #pragma endscop
}
