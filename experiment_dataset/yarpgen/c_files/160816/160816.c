/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] = 1;
        arr_3 [i_0] [i_0] = (!var_17);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_0 - 1] [i_1] [i_2] [9] = arr_7 [i_0] [i_1] [i_3 + 1] [i_3];

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_14 [i_1] [i_4] [7] = (((arr_0 [i_4] [11]) ? (((arr_4 [2]) ? (arr_7 [i_0] [6] [i_2] [i_1]) : 146)) : var_14));
                            arr_15 [10] = (~(arr_4 [5]));
                        }
                        arr_16 [5] [11] [i_1] [i_2] [i_3] = (arr_0 [10] [i_0]);
                        arr_17 [6] [i_1] [1] = ((~(arr_9 [i_3 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                    }
                }
            }
            arr_18 [i_1] [i_1] = var_3;
            arr_19 [i_0] [i_1] [i_0] = ((((!(arr_12 [i_0] [i_0] [i_0] [i_0 - 1] [4] [i_0 - 1]))) ? ((2147483644 ? 205 : 47)) : (arr_13 [i_0] [i_1])));
            arr_20 [10] &= (((56 > (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [1]))) ? ((((arr_10 [i_0 - 1]) < (arr_10 [4])))) : (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1]));
            arr_21 [i_1] = ((~(arr_4 [i_0 - 1])));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_24 [i_5] = (((((arr_4 [i_5]) ? var_3 : (arr_1 [i_0] [i_5])))) ? (arr_22 [i_5]) : (arr_23 [11] [i_5] [i_0]));
            arr_25 [8] [i_0 - 1] |= ((!(arr_4 [i_0 - 1])));
        }
        arr_26 [i_0] [i_0] = (arr_4 [i_0 - 1]);
    }
    var_18 = 0;
    var_19 = -var_2;
    #pragma endscop
}
