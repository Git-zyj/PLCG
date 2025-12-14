/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = var_18;
    var_21 = ((+((-65515 ? (~var_15) : var_3))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [2] = (((arr_0 [i_0]) ? (((arr_1 [i_0]) * (arr_0 [i_0]))) : ((-(arr_2 [i_0])))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_14 [i_2] [i_2] [i_2] [i_0] &= ((((var_2 / (arr_11 [16] [i_0 - 1] [i_3] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) - (arr_11 [i_3 + 3] [i_4] [i_4] [i_4] [i_4] [i_3 + 3])));
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] [i_1] [i_2] = (21 >> 14);
                        }
                        arr_16 [i_0] [i_3] [i_2] = (((arr_2 [i_0 + 1]) > var_10));
                        arr_17 [i_2] [i_1] [i_3] = (((arr_10 [i_0 + 2] [i_0] [i_1] [i_1] [i_1] [i_3 + 1]) != (arr_13 [i_3 - 2] [i_3 + 2] [i_3 + 1] [1] [i_3] [i_3 + 2] [i_3])));
                        arr_18 [i_0 + 2] [0] [i_0 + 2] [i_2] [i_0 - 1] = (((arr_4 [i_3 + 3] [i_1]) ? (arr_4 [i_1] [i_2]) : (arr_6 [i_3 - 2] [i_2] [i_0 + 1])));
                    }
                }
            }
            arr_19 [i_0 - 1] = (arr_12 [6] [8] [i_0] [8] [i_0]);
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_22 [i_0] [i_0] = (arr_7 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 1]);
            arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((-(arr_21 [i_0 - 1])));
            arr_24 [i_0] [i_0] = 61991;
            arr_25 [5] = ((-(arr_8 [i_0] [i_0 - 1] [i_0 - 1] [4])));
        }
        arr_26 [i_0] = ((~(arr_10 [i_0 + 1] [i_0] [1] [i_0 - 1] [i_0] [i_0])));
    }
    for (int i_6 = 3; i_6 < 22;i_6 += 1)
    {
        arr_30 [i_6] = ((31 ? 0 : 36691));
        arr_31 [i_6] [15] = ((-(((arr_29 [i_6]) / (arr_29 [i_6])))));
        arr_32 [i_6] [i_6] = ((((((arr_28 [i_6 + 1]) | (arr_28 [i_6 + 1])))) ? (((arr_28 [i_6 - 2]) ? (arr_28 [i_6 - 3]) : (arr_28 [i_6 - 2]))) : (arr_28 [i_6 + 1])));
    }
    #pragma endscop
}
