/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (max(((~(var_10 | var_11))), (((var_5 ? (!-983) : (!var_1))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1 + 1] = (!8388607);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [i_4] = ((arr_5 [i_4 + 1]) ? (arr_5 [i_4 + 1]) : var_10);
                            var_12 = ((~(-6528700228687950217 ^ 5706671625920519207)));
                        }
                        var_13 = (1854370780 ? (arr_0 [i_1 + 3] [i_1 + 1]) : (arr_0 [i_1 + 2] [i_1 - 2]));
                    }
                }
            }
        }
        arr_16 [i_0] = (max((((!(arr_1 [i_0] [i_0])))), (((var_6 ? var_4 : (-2147483647 - 1))))));

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_14 = (arr_9 [i_5] [i_0]);
            arr_19 [i_0] [i_0] [i_0] &= ((((min((arr_1 [i_0] [i_5]), (arr_1 [i_0] [i_0])))) ? 134 : var_7));
        }
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 17;i_8 += 1)
                {
                    {

                        for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [11] [i_6] [i_0] = (max(var_9, (!var_7)));
                            arr_33 [i_6] [i_6] = (((max(var_0, ((var_10 ^ (arr_18 [i_0]))))) == (arr_13 [i_0] [i_6 - 1] [i_0] [i_8] [i_8 - 2] [i_8] [i_9 + 4])));
                        }
                        for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            var_15 = (((min(((-(arr_0 [i_0] [i_10]))), (max((arr_11 [i_0] [i_6 + 2] [i_7] [i_8] [i_10 - 1]), var_6))))) ? (((((var_2 ? (arr_5 [i_10]) : 1))) ? 0 : (min((arr_31 [i_6] [i_6 + 1] [i_8] [i_8]), var_0)))) : var_4);
                            var_16 = ((((((!((min(20322, -107))))))) ^ ((-var_7 ? (((~(arr_14 [16] [i_6] [i_6] [i_6] [0] [i_6 + 1] [1])))) : (((arr_10 [i_0] [i_6] [i_7] [i_8] [i_10] [i_0]) / var_7))))));
                            var_17 = (arr_4 [16] [i_6 + 2] [i_6]);
                            arr_36 [i_6] [i_6] [i_6 + 2] [i_6] [i_8] [i_6] [i_10] = arr_4 [i_0] [14] [i_0];
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_0] [i_0] [i_7] [i_8] [i_6] [i_6] = (((((var_11 / -843407153) * var_8)) == (((-(arr_29 [i_0] [i_6] [i_7] [i_8 + 2] [i_8] [i_11]))))));
                            arr_40 [i_0] [i_6] [i_6] [i_6] [i_8] [i_6] = max(196, ((~((198 ? (arr_31 [i_6] [i_6] [i_6] [i_8]) : var_5)))));
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                        {
                            var_18 = ((((var_2 ? (arr_9 [0] [i_7]) : (arr_12 [i_8] [i_8 - 4] [i_8 + 2] [i_6 + 1] [i_6 + 2]))) % (((min(0, -191265128)) / (arr_14 [i_0] [i_6 + 1] [i_0] [i_8 + 1] [i_0] [i_6 + 2] [i_8 + 1])))));
                            var_19 = (((arr_21 [i_6]) > ((~(max(var_7, var_2))))));
                            arr_45 [i_0] [i_6 + 1] [i_6] [i_0] [i_7] [i_8] = (arr_25 [i_0] [i_8 - 1]);
                        }
                        var_20 = ((max((arr_14 [i_0] [i_6 + 2] [i_8] [i_8] [i_8] [i_8] [i_8 + 2]), var_6)));
                    }
                }
            }
            var_21 = var_8;
        }
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        var_22 = ((((var_10 ? (arr_46 [i_13] [i_13]) : -26)) | var_3));
        var_23 = ((((((arr_48 [i_13]) & (arr_48 [i_13])))) ? (~var_5) : ((((arr_46 [i_13] [i_13]) == (arr_47 [i_13]))))));
    }
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        arr_51 [i_14] [i_14] = -981330097859327394;
        var_24 = (arr_47 [i_14]);
    }

    for (int i_15 = 2; i_15 < 17;i_15 += 1)
    {
        arr_55 [i_15] [i_15 - 1] = var_7;
        var_25 = var_5;
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 16;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 18;i_17 += 1)
            {
                {
                    var_26 &= ((!((((((arr_57 [i_16 + 3] [i_16] [9]) & (arr_35 [i_15])))) && (((-616835819663981179 ? (arr_56 [0] [i_17 - 1]) : var_6)))))));
                    arr_62 [i_17] [i_17 - 1] [i_16] [i_15] = ((((((((arr_1 [i_15] [i_17]) ? (arr_37 [i_16 + 3] [i_16] [i_17] [i_15 - 1]) : var_9)) & 1979841807))) ? (((12758 ^ var_6) | (min(var_0, var_11)))) : (((~var_8) ? (arr_35 [i_15]) : ((-(arr_10 [i_17] [i_16] [i_16] [i_15] [i_15] [i_15])))))));
                }
            }
        }
    }
    for (int i_18 = 1; i_18 < 7;i_18 += 1)
    {
        var_27 = ((!(((((min((arr_49 [i_18] [i_18]), (arr_38 [i_18])))) ? (arr_5 [i_18]) : (((-127 - 1) ? 70 : (arr_46 [i_18 + 1] [i_18 + 3]))))))));
        var_28 = (min(var_28, ((((arr_58 [i_18]) ? (max(var_2, ((((arr_24 [2] [i_18 + 3]) ? (arr_2 [i_18] [i_18]) : (arr_34 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18 - 1])))))) : (max((min(var_2, 168)), ((max((arr_22 [i_18]), var_4))))))))));
        var_29 = arr_44 [14] [i_18 + 1] [i_18 - 1] [i_18] [i_18];
    }
    #pragma endscop
}
