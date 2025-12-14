/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    var_12 = (~-11);

                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        var_13 = ((-(arr_6 [11] [i_1] [i_1] [i_3 - 4])));
                        var_14 *= (11 ? ((((arr_0 [i_0] [i_1]) ? 28446 : -13))) : (((arr_7 [i_3]) - (arr_5 [i_2]))));
                        var_15 = 12926;
                    }
                    var_16 *= (arr_6 [i_0] [i_1 + 2] [i_2 + 1] [i_2]);
                    var_17 |= -11;
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_18 = (min(var_18, ((((arr_6 [i_1] [i_1] [i_4] [i_1]) ? (-738842908 / -4) : 17906763523026677994)))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_19 = ((((min((arr_7 [i_1 + 2]), (arr_7 [i_1 + 1])))) ? (max((arr_7 [i_1 + 1]), (arr_7 [i_1 + 1]))) : (((arr_7 [i_1 + 2]) & 1))));
                        var_20 = ((1 ? (((max(1, 0)) - ((-(arr_4 [i_0] [i_0] [i_0] [i_0]))))) : (((-1587792124 ? 1 : (arr_4 [2] [i_1 - 1] [12] [i_1]))))));
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_21 = (arr_3 [i_1 + 2] [i_1 + 2] [i_8 + 2]);
                                var_22 = ((-(((((-32767 - 1) + 2147483647)) >> (-6010411843539667531 + 6010411843539667534)))));
                                var_23 = (max(var_23, ((!(arr_12 [i_1 + 1] [i_8 + 3] [i_6])))));
                            }
                        }
                    }
                    var_24 = 16042913511457236134;
                }
                var_25 = ((-(((((0 << (65514 - 65497)))) ? (arr_8 [i_1] [i_1] [i_0]) : ((-(arr_18 [i_0])))))));
            }
        }
    }
    var_26 = 2454941242;

    for (int i_9 = 3; i_9 < 19;i_9 += 1)
    {
        var_27 = (min(var_27, ((((((!((min(64986, 18)))))) % ((11 ? ((~(arr_2 [i_9 + 3] [i_9] [i_9]))) : (arr_1 [i_9 + 1]))))))));
        var_28 = (min((((((arr_7 [i_9]) / -1587792124)))), -30770));
        var_29 = (arr_4 [i_9] [i_9] [i_9] [i_9]);
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {

        /* vectorizable */
        for (int i_11 = 4; i_11 < 20;i_11 += 1)
        {
            var_30 = (max(var_30, (arr_4 [i_10] [i_11 - 3] [i_11] [i_11 - 3])));
            var_31 = (!-1587792148);
            var_32 = (~0);
        }
        var_33 = ((((max((arr_0 [i_10] [i_10]), (arr_0 [i_10] [i_10])))) ? ((~(arr_0 [i_10] [i_10]))) : (((arr_0 [i_10] [i_10]) ? 95 : (arr_0 [i_10] [i_10])))));
        var_34 = (max(var_34, ((min(((max((arr_23 [i_10]), (arr_11 [i_10])))), (((max(660367950, -31068)) % (((max(1, 6)))))))))));
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    {
                        var_35 = ((~(arr_17 [i_13] [i_13 - 1] [i_13 + 1] [i_13])));
                        var_36 = (((((140 ^ (((-1587792129 && (arr_32 [i_14] [i_13]))))))) ? (((~(arr_21 [i_13 + 1])))) : (!49140)));
                        var_37 = (max((((~(arr_28 [i_12] [i_13 - 1])))), ((min((arr_4 [i_12] [i_13 - 1] [i_14] [i_12]), (arr_2 [i_13] [i_13] [i_12]))))));
                        var_38 = ((min(1, (min((arr_35 [i_12] [i_12] [i_12]), -92)))));
                        var_39 = (((min(-11, (arr_38 [i_15])))) ? (~27240) : ((max((arr_13 [i_14] [i_14] [i_14]), (arr_13 [i_12] [i_13 + 1] [i_14])))));
                    }
                }
            }
        }
        var_40 = ((max((~0), (arr_36 [i_12] [8]))));
    }
    #pragma endscop
}
