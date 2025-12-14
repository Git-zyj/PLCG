/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = arr_8 [2] [i_1] [i_0];
                    var_18 = (min(var_18, 240));
                }
            }
        }
    }
    var_19 *= -11453;

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_20 = (((var_14 || -2931) ? ((-(((arr_10 [i_3] [i_3]) ? 15 : (arr_11 [10]))))) : ((min((max(var_6, -2931)), (arr_10 [i_3] [i_3]))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_21 = (-2947 || 131);
            var_22 = arr_9 [i_3];
            var_23 = 255;
            var_24 = var_7;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_16 [i_3] [i_3] [i_5] = (min((!-17933), (((arr_9 [i_5]) ? var_4 : (arr_9 [i_3])))));
            var_25 = (min(var_25, -2940));
        }
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            var_26 = (max(var_26, (((-(max(var_9, var_7)))))));
            arr_19 [i_3] = (max((!-2940), (!127)));
            var_27 = 0;
        }
        var_28 -= (max(-112, ((-75 ? 30527 : 19))));
        var_29 = (max((((min((arr_12 [i_3] [12] [i_3]), var_7)))), var_15));
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_30 = ((-((27395 * (arr_29 [i_8 + 3] [i_8] [i_7 + 3] [i_10])))));
                        arr_32 [4] [10] [i_9] [i_7] = max(2, (((!(arr_31 [i_7] [5] [i_8] [i_8 + 3])))));
                        var_31 = ((12702 ? (min(((-(arr_26 [i_8]))), var_14)) : ((max((!1709386251), -74)))));
                        var_32 = (min((arr_13 [i_9]), (arr_13 [i_8 - 2])));
                        arr_33 [i_7] [i_7] [i_7] [i_7] = 131;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            arr_38 [i_7] [i_7] [4] [i_11] [i_12] [i_12] = var_3;
                            var_33 = (max(var_33, ((((arr_37 [14] [i_8 + 2] [i_8 + 2] [i_9] [i_7 - 1]) - 2309)))));
                        }
                        for (int i_13 = 4; i_13 < 13;i_13 += 1)
                        {
                            arr_41 [i_7] [i_7] [i_7] [i_7] [i_7] = var_2;
                            arr_42 [i_7] [i_7] [i_11] [i_11] [i_7] = (arr_37 [i_13] [i_13] [i_13 - 1] [i_7] [i_13 + 2]);
                        }
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_34 += ((3885650824 ? var_6 : (arr_15 [i_7 + 3] [i_8] [i_9])));
                            arr_45 [i_7] [i_8] [i_7] [i_11] [i_7] = ((((-3 ? var_8 : (arr_21 [12]))) * ((101 ? -17302 : 222))));
                            var_35 = ((var_0 >> (((arr_34 [i_7 - 1] [i_8 - 1] [i_8 + 1] [i_9]) - 7541))));
                            arr_46 [i_14] [i_7] [i_7] [i_7] = var_2;
                            arr_47 [i_9] [i_9] [i_7] [i_9] [i_9] [i_9] [i_9] = ((((17 ? 2320 : var_13))) ? var_15 : ((((arr_15 [15] [i_11] [15]) ? (arr_9 [i_7]) : (arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))));
                        }
                        var_36 = ((3885650824 ? (arr_27 [i_7] [i_7 + 3] [i_8 + 2]) : -16394));
                    }
                    for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                    {
                        var_37 = ((((122 ? 200 : 2598884224)) * (((max((arr_35 [i_7] [i_8 + 4]), (arr_35 [i_7] [i_8 + 4])))))));
                        var_38 += (min((max(((((arr_48 [i_7] [i_8 - 2] [i_8] [i_15]) != 4082649448))), var_2)), (min(var_11, (max(var_6, 4294967286))))));
                        var_39 += ((max((arr_22 [i_7 - 1] [i_9] [i_8 + 1]), (-32767 - 1))));
                        var_40 = var_15;
                    }
                    for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
                    {
                        arr_53 [i_7] [i_9] [i_9] [i_9] = (((((((var_5 ? -18 : var_2)) ^ (((110 ? -4253 : (arr_28 [i_7] [i_7 + 2] [i_7 + 2] [i_8] [i_7]))))))) ? var_3 : (((min(127, var_0))))));
                        arr_54 [i_7] [i_8] [i_9] [i_7] [i_7] = 35;
                    }
                    arr_55 [5] [i_8] [i_7] [i_8] = ((16 ? var_3 : 60));
                }
            }
        }
    }
    #pragma endscop
}
