/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_0] = ((var_14 - ((var_0 ? 246 : var_17))));
                    arr_12 [i_2] [i_0] [i_2] = ((!(((var_15 * (arr_4 [i_0] [i_2]))))));

                    for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        var_20 += ((~(arr_14 [i_3] [i_3] [i_1 - 2] [i_1])));

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            var_21 -= var_0;
                            var_22 = ((((((arr_10 [i_0] [i_2] [i_2] [i_3]) <= (arr_17 [i_0] [i_1] [i_2] [i_3] [i_4]))))) & var_11);
                            arr_18 [i_4] [i_3] [i_4] [i_1] [i_0] |= (arr_16 [i_0] [i_1]);
                        }
                        arr_19 [i_0] = (arr_10 [i_0] [i_1] [i_2] [i_3]);
                        arr_20 [i_0] [i_1] [i_2] [i_0] = (2062052810 > 9642);
                    }
                    for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [i_5] = (((var_4 >= var_7) & ((-1695246700 + (arr_23 [i_0] [i_1] [i_2] [i_5] [i_1] [i_2])))));
                        var_23 = -1044232253;
                    }
                    for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_24 -= ((+(((arr_6 [i_0] [20] [i_0]) ? (arr_21 [4] [i_1] [i_2] [i_6]) : var_2))));
                        arr_29 [i_0] [i_1] [i_0] [i_6] [i_6] = 136;
                        var_25 = (max(var_25, (arr_8 [i_0] [i_0] [i_0] [i_0])));
                        var_26 = ((arr_8 [i_0 + 1] [i_1 - 2] [i_2 - 1] [i_6 + 1]) ? (arr_8 [i_0 - 1] [i_1 - 1] [i_2 + 1] [i_6 - 1]) : (arr_8 [i_0 + 1] [i_1 - 1] [i_2 - 1] [i_6 + 2]));
                        arr_30 [i_0] [i_2] = (!var_11);
                    }
                    var_27 = (min(var_27, (arr_15 [i_2] [i_1] [i_2] [14])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_28 = (min(var_28, (((+(((arr_16 [i_8] [i_7]) ? (arr_1 [i_8]) : (arr_32 [i_0] [i_7]))))))));
                    arr_35 [i_8] [i_0] [i_0] [i_0] = ((-(arr_15 [i_0 - 1] [i_7] [i_7 - 1] [i_0])));
                    arr_36 [i_8] [i_7] [i_8] |= (arr_16 [i_0] [i_0]);
                }
            }
        }
        arr_37 [i_0] = -1539261408;
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 18;i_10 += 1)
            {
                {
                    arr_43 [i_0] [i_0] [i_9] [i_10] = ((!((((arr_22 [i_10] [i_10] [i_9] [i_0]) ? (arr_1 [i_9]) : var_11)))));
                    var_29 = (arr_17 [i_0] [i_9 - 1] [i_9] [i_10] [i_10 - 1]);
                }
            }
        }
    }
    var_30 = (((!-58932855) ? -var_10 : (min(var_7, -var_9))));
    var_31 ^= (((((max(var_7, var_4)) % var_14)) * -6287));
    var_32 = var_3;
    #pragma endscop
}
