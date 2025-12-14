/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((-6428092001161384901 ? var_2 : (var_4 / var_2))), (((var_6 <= var_0) >> (((((-6428092001161384901 + 9223372036854775807) << var_7)) - 5590560071386781801))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 *= ((!((((arr_1 [i_0]) - -7296897298442677725)))));
        arr_3 [i_0] = (((((((-(arr_0 [i_0] [i_0])))) ? ((min(-6516432065326230506, (arr_1 [i_0])))) : (arr_2 [i_0])))) ? (((((~(arr_0 [i_0] [i_0])))) ? (~-7296897298442677725) : var_2)) : (min(7296897298442677725, 0)));
        var_12 = -402337512;
        arr_4 [13] = -1;
        var_13 = (~10);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_14 = ((~-6428092001161384911) ? 18446744073709551615 : (arr_11 [13] [i_2] [i_1 - 1]));
            var_15 = (arr_5 [i_1 - 1]);
            var_16 &= (((!((min(16744448, var_7))))));
            var_17 = var_6;
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            arr_14 [i_1] [i_3] = ((~((-(arr_9 [i_1 - 1] [i_1] [i_3])))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_18 -= ((1 ? var_3 : (~28)));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_19 = (arr_17 [i_3] [i_4]);
                            arr_22 [8] [i_1] [i_4] [i_4] [i_1] [i_1] = var_4;
                        }
                    }
                }
            }
            var_20 = (max((var_7 | var_4), var_7));
            var_21 &= (arr_6 [6]);
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
        {
            arr_26 [i_1] [i_1] [i_7] = (((arr_8 [i_1] [i_7]) == ((-var_4 ? -var_5 : (0 - var_1)))));
            var_22 = (arr_18 [i_1 - 1] [i_1] [i_1] [i_7]);
            var_23 += (!var_5);
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_24 = (max(var_24, (((!((((arr_20 [i_1 - 1] [2] [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? 1 : var_4))))))));
                            var_25 = ((1 <= (min((max(var_3, var_0)), var_6))));
                            var_26 -= -1;
                        }
                    }
                }
            }
        }
        for (int i_11 = 1; i_11 < 23;i_11 += 1)
        {
            var_27 *= (((-8061329616075392578 ? (228 + 191) : (~var_5))));
            /* LoopNest 3 */
            for (int i_12 = 3; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_28 = (arr_13 [i_11] [i_12 + 2] [i_1]);
                            var_29 = (!(~1));
                        }
                    }
                }
            }
        }
        arr_46 [i_1] = (min((min(207, (arr_45 [i_1] [i_1 - 1] [i_1]))), (arr_45 [i_1] [i_1 - 1] [i_1])));
        var_30 = (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        var_31 = ((((((((-9223372036854775807 - 1) / 1893501193))) ? var_4 : (arr_48 [i_15] [i_15]))) <= (min((((arr_47 [i_15] [i_15]) ? 1 : var_8)), ((max((arr_48 [i_15] [i_15]), (arr_48 [i_15] [i_15]))))))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                {
                    var_32 -= var_8;
                    arr_53 [i_15] [i_16] [i_16] = (arr_50 [i_15] [i_15]);
                    var_33 = 0;
                    var_34 = (max(((!(arr_49 [i_16] [i_16] [i_16]))), (arr_48 [i_16] [i_17])));
                }
            }
        }
    }
    var_35 = (~var_0);
    #pragma endscop
}
