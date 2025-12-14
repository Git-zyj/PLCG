/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 |= (((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) >> ((((arr_1 [i_0]) >= (arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = 2140918633;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_19 = (((arr_5 [i_1]) % (0 != 4520)));
        arr_6 [i_1] = (!6859618753955896696);
        var_20 *= (var_12 > var_3);
        var_21 *= (9679833292388054705 % var_9);
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_22 = var_12;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                {
                    arr_15 [i_3] [i_3] [i_3] |= (((max((((41059 ? var_10 : var_3))), (max(var_9, (arr_11 [21]))))) / (((((var_9 ? var_9 : var_2))) ? var_12 : (arr_9 [i_3])))));
                    arr_16 [i_3] [i_4] = var_9;
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_28 [i_5] [i_6] [i_7] [i_8] = 8958637071131769399;

                        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_5] = 1228372383;
                            arr_32 [i_7] [i_7] = (-27174 && 22903);
                            arr_33 [11] [i_7] [i_8] [i_9] = (var_14 || var_8);
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            arr_36 [9] [i_8 + 1] [i_7] [i_6] [i_5] = ((((23196 > -27669) & 4087564299404679136)));
                            arr_37 [2] [i_6] [2] [i_8] [i_10] = ((3325457194 ? (min((arr_10 [i_5 + 1] [i_5 + 1]), ((min(77, var_1))))) : 22216));
                            var_23 += (2140918623 + var_12);
                        }
                        var_24 += (max(((min((arr_26 [i_6] [11] [i_7]), (arr_7 [i_5 - 2] [i_8 - 1])))), (min((arr_3 [i_5] [i_5 - 1]), 197))));
                        var_25 = 7204996726099905870;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 12;i_12 += 1)
            {
                {
                    var_26 = (min(var_26, (((min((arr_25 [i_12 + 1]), 3066594919))))));
                    var_27 = (min(var_27, ((max(11804992619023473481, 0)))));
                    var_28 = (max(var_28, -27174));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 12;i_16 += 1)
                        {
                            {
                                arr_52 [13] [i_13 + 1] [i_14] [i_13 + 1] [i_16] = -27174;
                                arr_53 [i_5] = arr_22 [i_13 - 1] [i_13 + 3] [i_13 - 1];
                                var_29 |= min(var_14, var_14);
                                arr_54 [i_5] [i_13 - 1] [i_13 - 1] [i_15] [i_13 - 1] = ((~(var_1 | 205)));
                            }
                        }
                    }
                    arr_55 [i_5] [i_13 + 3] [i_14] = 14;
                }
            }
        }
        var_30 += (~var_15);
        var_31 = (min(((((-(arr_46 [i_5] [i_5] [i_5] [i_5]))) + 44632)), (!var_14)));
    }
    var_32 -= var_15;
    #pragma endscop
}
