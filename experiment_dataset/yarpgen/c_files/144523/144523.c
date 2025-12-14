/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_16 -= (((arr_1 [i_0 + 2]) ^ (((arr_1 [i_0 - 2]) ? -81 : 18931))));
        var_17 = (min(((-(83 || var_12))), ((max(252, var_3)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                var_18 &= (min((arr_2 [i_1 + 2]), ((((arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2]) == (arr_4 [i_1 - 1] [i_1] [i_1 + 2]))))));

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_19 = (((var_2 | (arr_6 [i_1 - 2] [i_1 - 2] [i_1]))));
                    arr_8 [i_1] [i_2] [i_3] = ((!((((arr_7 [1] [i_1 + 2]) ? (arr_4 [i_1] [i_1 - 2] [i_1 - 2]) : (arr_7 [i_1] [i_1 - 2]))))));

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_20 = (80 ? 81 : 35);
                        var_21 = (min(var_21, ((((-((-16384 ? var_13 : -21739))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_22 = -6163049146408803175;
                        var_23 = (arr_5 [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_24 = (min(var_24, (((((((arr_6 [i_1 + 1] [i_1 + 1] [i_6]) ? (arr_6 [i_1] [i_1 + 1] [i_2]) : var_15))) ? (((arr_16 [i_1] [0] [i_3] [i_6] [6]) ? 81 : (((arr_10 [i_6] [i_7]) << (((arr_2 [i_3]) - 53754)))))) : (((var_7 >> (arr_3 [i_1 + 2] [i_1 + 1])))))))));
                            var_25 *= ((((((arr_16 [i_6] [i_1 + 2] [i_6] [i_1 + 2] [10]) < var_1))) << (21738 - 21709)));
                            var_26 = (min((!-2251799813685248), (min((arr_12 [i_6] [6] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 2]), -16386))));
                        }
                        arr_17 [i_3] [i_2] [i_3] [i_6] [i_2] = (((92231374 ? 1803430324 : 81)));
                        var_27 = ((((max((arr_1 [i_1 - 2]), (arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_3])))) ^ (((arr_1 [i_1 - 2]) / var_1))));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_28 = (min(-61, 21739));

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_29 = (1803430345 + (arr_23 [i_9] [i_9 - 1]));
                            var_30 = ((0 ? var_0 : var_6));
                            var_31 = 7863;
                            arr_24 [i_1] [i_1] [i_1] [i_1 - 1] [i_9] = (arr_9 [i_9] [i_9] [i_9 - 1] [i_1]);
                            var_32 = (!-7866778553211590239);
                        }
                        var_33 = (max(((var_9 ? ((-25 ? -7866778553211590239 : (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]))) : var_14)), (((7192 ? ((-11 ? 0 : 1)) : -4997)))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                var_34 = (((min((min(var_3, (arr_26 [11]))), 7885)) | ((((arr_26 [i_10 - 1]) ? (arr_25 [i_10 + 1]) : var_0)))));
                var_35 = (-127 - 1);
            }
        }
    }
    var_36 = (((!var_7) == -106));
    #pragma endscop
}
