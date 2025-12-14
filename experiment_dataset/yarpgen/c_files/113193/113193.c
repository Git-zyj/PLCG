/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 += ((+(((arr_0 [i_0]) | var_7))));
        arr_3 [i_0] [i_0] = ((var_11 ? (min((arr_0 [i_0]), 9)) : var_12));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        var_15 = var_7;
        var_16 = (min((((var_11 ? (arr_4 [i_1 + 2] [i_1 - 3]) : (arr_4 [i_1] [i_1 - 1])))), ((-(arr_2 [i_1 + 1])))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_17 = ((((min(57696, var_9))) ? (((max((arr_5 [i_2] [13]), 65535)))) : var_9));
                    arr_12 [i_4] [6] = 10351;
                }
            }
        }
        var_18 = 55185;
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_16 [1] = (!var_2);
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_19 = max((((((arr_15 [i_5] [i_7]) | var_1)) | ((max(10341, var_2))))), (((~var_12) ? 55185 : 10351)));
                        arr_27 [i_7] [i_7] [i_8] = ((((min((((-(arr_7 [i_6 - 2] [i_6 - 2])))), var_9))) ? (arr_1 [i_6 + 1] [i_6 - 2]) : ((10360 ? -var_4 : ((var_0 ? var_6 : var_0))))));
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_31 [i_7] [10] [i_7] [i_9] [i_7] [i_6 + 1] = (((((arr_29 [10] [i_6 - 2] [i_7] [i_6] [i_9]) && (arr_29 [i_6] [i_6 + 2] [i_7] [i_7] [i_6]))) ? (((arr_29 [5] [i_6 + 2] [i_7] [i_6] [i_7]) ? 55208 : (arr_29 [i_5] [i_6 - 3] [i_7] [i_5] [i_7 + 1]))) : (arr_29 [i_6] [i_6 + 2] [i_7] [i_9] [i_9])));
                        var_20 = (min(var_20, 55208));
                        arr_32 [i_5] [i_6] [i_7] [11] = (((((10329 ? var_4 : (arr_13 [i_6 - 2] [i_6 - 3])))) ? (~var_0) : (((var_13 ? (arr_20 [i_7] [i_7 - 1] [i_6 - 2] [i_9]) : 55185)))));
                        var_21 = (~var_2);
                    }
                    var_22 = (((55188 < var_2) < (((((55183 ? var_5 : 10328))) ? (~10343) : (~var_10)))));

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        arr_35 [i_7] [i_6] [i_7] [i_10 - 1] = ((((((arr_5 [i_10 - 1] [i_7]) / ((-(arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))) ? 55216 : (((arr_1 [i_7] [i_10]) * ((var_13 ? var_7 : (arr_18 [i_5] [13] [13])))))));
                        var_23 += (arr_21 [i_5] [i_5] [16]);
                    }
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        arr_38 [i_5] [i_7] [i_5] &= (arr_19 [4] [i_6] [i_6]);

                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            var_24 *= ((-(min(var_11, (!10314)))));
                            arr_43 [i_7] [i_7] = (((var_12 && (((var_5 ? 55191 : var_0))))) ? (((min(var_3, (arr_7 [i_5] [i_5]))))) : 55188);
                        }
                        arr_44 [i_5] [4] [i_7] [i_11] [i_6] = ((max((!var_9), (arr_1 [i_5] [i_11]))));
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        arr_48 [i_5] [i_5] [i_7 - 2] [i_7] = (max(var_13, var_9));
                        arr_49 [i_5] [i_5] [i_7] [i_7 - 1] [i_13] = (min((arr_47 [9] [9] [1] [i_7] [9]), ((((arr_24 [i_6 - 3] [i_6] [i_7 + 1] [i_6] [i_6] [i_7]) == ((var_11 ? var_3 : 55194)))))));
                        var_25 *= (arr_21 [0] [i_5] [i_5]);
                        var_26 = 55230;
                    }
                    var_27 |= 10358;
                }
            }
        }
    }
    var_28 = ((-((var_13 ? ((55182 ? var_13 : 55221)) : -var_11))));
    #pragma endscop
}
