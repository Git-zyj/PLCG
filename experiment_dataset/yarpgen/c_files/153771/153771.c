/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_15 = var_14;
            var_16 = (arr_3 [i_0] [i_1]);
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_2] = (max(((((arr_11 [i_0 + 1] [i_0 + 2] [i_2 - 1]) % var_4))), -1));
                    var_17 *= (arr_12 [i_0 - 1] [i_2 + 1]);
                    var_18 = (arr_11 [i_0] [i_2] [i_3]);
                    arr_14 [i_0] [12] [i_0] [i_0] |= (((-1 % var_8) ? 2519738582 : ((var_5 % (arr_12 [i_2 - 1] [i_0 - 1])))));
                }
            }
        }
        arr_15 [i_0] [i_0] = (((((!((min((arr_11 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0]))))))) * (!var_4)));
        var_19 *= (max((((max(var_9, (arr_9 [i_0] [i_0] [1]))))), (min((arr_1 [i_0]), (arr_1 [i_0 + 1])))));
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1)
    {
        var_20 = (((arr_17 [i_4] [i_4]) ? (((!(arr_17 [i_4] [i_4])))) : var_9));
        var_21 = (max((((((var_2 * (arr_16 [i_4])))) ? (arr_17 [i_4] [i_4 - 2]) : var_3)), 1775228713));
        var_22 = 2519738593;
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_23 = ((((((min(var_3, (arr_26 [i_5] [i_7] [i_8] [i_8])))) % (((arr_17 [i_8] [i_6]) % var_7)))) % var_13));
                                var_24 = (min((((arr_23 [i_5 - 3] [i_5 - 2] [i_5 - 2]) ? (arr_25 [i_5 - 3] [i_5 - 2] [i_5 - 2] [i_8]) : (arr_25 [i_5 - 3] [i_5 - 2] [i_5 - 2] [i_8]))), ((var_10 ? ((min((arr_28 [i_5] [i_6] [i_7] [i_5] [i_9]), 0))) : var_14))));
                            }
                        }
                    }
                    var_25 = (min((max((((arr_1 [i_5]) * var_9)), (((-1 * (arr_23 [i_5] [i_6] [i_7])))))), (arr_9 [i_5 + 1] [i_5 + 1] [16])));
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_26 = 1971954397;
                                var_27 = ((1775228713 ? (min(-23454, (((arr_21 [i_5] [i_11]) ? (arr_7 [i_5] [i_6]) : -3923702951700531419)))) : (((max(((min((arr_6 [i_5] [i_6] [i_11]), (arr_2 [i_12] [i_11])))), (arr_20 [i_5] [i_6])))))));
                                arr_40 [i_12] [i_6] [i_6] [i_6] [i_6] = ((!(arr_25 [i_6] [i_10] [i_6] [i_12])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
