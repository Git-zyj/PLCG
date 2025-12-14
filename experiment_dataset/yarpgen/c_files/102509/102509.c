/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(((((-389454729628882144 ? var_7 : (arr_1 [i_0]))) / (arr_1 [i_0 + 2]))))));
        var_15 = ((+((((((arr_1 [i_0]) << (var_9 - 1)))) ? ((-389454729628882144 ? (arr_0 [i_0]) : var_0)) : var_6))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_16 -= (~var_12);
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_17 = var_5;
                        arr_17 [i_1] [i_1] [i_3] [i_4] = (arr_13 [i_1] [i_2] [i_2] [i_4] [i_2] [i_4]);
                        var_18 = (arr_15 [i_2] [i_2] [i_2] [i_2]);
                        var_19 = (((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_11 [i_1] [i_1 + 1] [i_2 + 2] [i_4])));
                    }
                }
            }
            var_20 = (((arr_9 [i_2 + 2] [i_1 + 1]) ? (arr_9 [i_2 - 1] [i_1 - 2]) : (arr_9 [i_2 - 2] [i_1 - 1])));
        }
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            var_21 = ((~(((-389454729628882167 > ((var_11 ? (arr_19 [i_1]) : 217)))))));
            var_22 = (max(var_22, ((((-((-(arr_15 [i_5] [i_5] [i_1] [i_1])))))))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    {
                        var_23 = (~0);
                        arr_26 [i_7] [i_5] = (!(((~(16987926313339599800 & var_7)))));
                        var_24 = (min(var_24, var_8));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        var_25 = 4230163113;
                        arr_33 [i_1] [i_5] [i_8] [i_9] [i_5] = ((((~(((!(arr_21 [i_8] [i_8] [i_8] [i_9]))))))) ? (((((max((arr_14 [i_5] [i_5] [i_8] [i_9] [i_5] [i_8]), 4064)) >= (arr_18 [i_8] [i_8 + 1] [i_8]))))) : (arr_6 [i_1]));
                    }
                }
            }
        }
        for (int i_10 = 2; i_10 < 12;i_10 += 1)
        {
            arr_36 [i_1] [i_1] [i_1] = (min((((~(arr_22 [i_1] [i_10 + 3])))), ((((!(arr_32 [i_1] [i_1] [i_10] [i_1]))) ? ((var_3 ? var_3 : 16987926313339599799)) : var_2))));
            arr_37 [i_1] = (((min((arr_3 [i_1 + 1] [i_10 + 2]), ((~(arr_34 [i_1] [i_10]))))) != 113));
            arr_38 [i_1] = ((var_14 ? (((((8178005259676297988 << (14864063977483587510 - 14864063977483587493)))) ? var_11 : (arr_31 [i_10] [i_10] [i_10] [i_10 + 2]))) : (((-(!var_3))))));
            arr_39 [i_1] [i_1] [i_1] = (898578823 ? (((arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? var_14 : (arr_6 [i_1]))) : 32640);
        }
        for (int i_11 = 4; i_11 < 14;i_11 += 1)
        {
            arr_43 [i_1] = -389454729628882165;
            var_26 = ((~((1458817760369951816 ? -115 : (arr_3 [i_11] [i_11 - 1])))));
            var_27 = var_13;
        }
        var_28 = ((var_12 ? (((~((var_2 ? 54 : var_9))))) : (min(((((arr_29 [i_1] [i_1] [i_1]) ? 3283862244 : 1032667001))), 8796093022207))));
    }
    var_29 = (max(var_29, var_12));

    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        var_30 = -9223372036854775797;
        var_31 = arr_45 [i_12] [i_12];
    }
    #pragma endscop
}
