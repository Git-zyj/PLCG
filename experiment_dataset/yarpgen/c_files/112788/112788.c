/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_7, (!var_9)));
    var_13 |= ((!((max((!var_7), var_7)))));
    var_14 = ((~(max(((var_0 ? var_6 : var_4)), var_2))));
    var_15 = var_8;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0] [i_0 - 2]) ? ((var_9 & (arr_0 [i_0] [i_0]))) : (arr_1 [i_0] [i_0 + 1])));
        var_17 = (max((((((arr_1 [i_0] [i_0 - 3]) ? (arr_0 [i_0] [i_0]) : var_6)))), (max((((arr_2 [i_0] [i_0]) ? (arr_1 [i_0 - 1] [i_0 - 1]) : var_4)), var_10))));
        var_18 = arr_2 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_19 = ((255 ? (arr_4 [i_1]) : (3285405019 < 0)));
        var_20 = var_11;

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_21 = (min(2676186581, (38 >= 5)));
            arr_8 [i_1] = ((max(((((arr_4 [i_1]) / (arr_4 [i_1])))), (arr_6 [i_1] [i_1]))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_22 = ((!(((~(~var_7))))));
                            var_23 = (min(var_23, ((((((!(arr_14 [i_1] [i_2]))) || -var_4))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_24 &= (arr_6 [i_6] [i_1]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_25 = (~var_3);
                        var_26 = (min(var_26, (arr_20 [i_1] [i_6])));
                        var_27 = (arr_13 [i_1]);
                    }
                }
            }
            var_28 = (((var_3 ? (arr_7 [i_1] [i_6]) : (arr_15 [i_6] [i_6]))));
            var_29 = var_2;
        }
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            var_30 *= (((!17) || ((((var_2 ? var_10 : (arr_5 [i_1] [i_9])))))));
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            arr_37 [i_1] [i_9 + 2] [i_9] [i_10] [i_9 + 2] [i_12] = (min((arr_29 [i_11] [i_10] [i_9 - 1] [i_1]), (max(var_3, 238))));
                            var_31 -= ((((((var_4 << (((arr_13 [i_1]) - 61693)))))) && (((max((arr_29 [i_1] [i_9] [i_10 + 1] [i_1]), var_3))))));
                            var_32 -= (((-var_9 ? (arr_25 [i_12] [i_9 - 1] [i_9 + 1]) : (arr_5 [i_1] [i_1]))));
                        }
                    }
                }
            }
        }
        var_33 = (((arr_6 [i_1] [i_1]) ? (((!(arr_33 [i_1] [i_1] [i_1] [6])))) : (arr_9 [i_1] [i_1] [i_1] [i_1])));
    }
    #pragma endscop
}
