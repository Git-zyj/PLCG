/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (arr_1 [i_0] [i_0]);
        var_18 = (max(var_18, (+-2313923059)));
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        var_19 = (min(var_19, (arr_3 [i_1] [i_1])));
        arr_6 [i_1] [i_1] = (((arr_5 [i_1]) && -99));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_20 = (~((-21 ? var_12 : var_6)));

        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            arr_12 [i_2] &= (((arr_4 [i_2] [i_3 - 1]) ? 18024151074209329276 : (arr_4 [i_2] [i_3 - 4])));
            var_21 = ((arr_4 [i_3 - 2] [i_3]) && (((-(arr_0 [i_2] [i_3])))));
            var_22 = (min(var_22, ((((arr_0 [i_2] [i_2]) ? ((var_6 | (arr_4 [i_2] [i_2]))) : (((arr_3 [i_2] [i_2]) % var_15)))))));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_23 = (min(var_23, ((((arr_15 [i_2] [i_2] [12]) ^ 1981044255)))));
            arr_17 [i_4] = ((var_3 != (241 & 1)));
        }
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            var_24 = ((arr_3 [i_5 + 2] [i_5 - 2]) ? (arr_3 [i_5 - 1] [i_5 + 2]) : (arr_3 [i_5 + 1] [i_5 + 2]));
            var_25 = ((8110083798274983868 & ((-(arr_13 [i_2] [i_2])))));
            arr_20 [i_2] = (((!-97888479) <= ((var_3 | (arr_9 [i_2])))));
        }
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_26 = (min(var_26, var_3));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_27 *= ((((max((arr_1 [i_8] [i_8]), (arr_9 [i_7 + 1])))) ? ((-(arr_4 [i_6 - 1] [i_7 - 1]))) : (((((max(var_14, var_8))) || (1 & -5610017591862487847))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_28 = (((arr_24 [i_7] [i_7]) ? var_3 : (var_1 | -62323415)));
                                var_29 = (arr_10 [i_6]);
                                arr_35 [i_8] [i_7] [i_8] [i_7] &= (arr_32 [i_6 - 1] [1] [i_8] [i_8] [i_9] [i_10]);
                                arr_36 [i_8] [i_7] [i_8] [i_7] [i_6 - 1] = var_8;
                            }
                        }
                    }
                    arr_37 [i_6] [i_7] [i_6] [7] = (((((((950611739 ? var_16 : (arr_31 [13] [13] [5] [i_7 + 1]))) | (((30891 ^ (arr_15 [i_7] [i_7] [3]))))))) ? 1365653075 : var_16));
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_43 [i_8] [i_11 - 4] [i_8] [i_8] [i_8] |= ((((var_5 ? (((arr_4 [i_7] [i_12]) ? -1 : var_7)) : (arr_2 [i_7 - 1] [i_12]))) - var_12));
                                var_30 = 1097907124614642396;
                                var_31 = (min((arr_31 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1]), (((!(((var_7 ? (arr_34 [i_7] [i_7 + 1] [i_8] [i_7 + 1] [i_12]) : var_8))))))));
                            }
                        }
                    }
                    var_32 = (min(var_32, (((-(min((var_7 * var_11), (((-(arr_9 [i_6 - 1])))))))))));
                }
            }
        }
    }
    var_33 = (max(var_33, ((var_14 ? (((2313923074 & 6229) ? var_2 : (max(13511877024571506643, var_1)))) : var_6))));
    #pragma endscop
}
