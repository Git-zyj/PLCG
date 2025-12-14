/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((var_4 >> ((((~(arr_0 [i_0])) + 264))))));
        var_20 += (arr_0 [0]);
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((((((arr_1 [1]) ? ((max((arr_3 [i_1]), 1))) : (arr_4 [i_1 - 2] [i_1 - 4])))) || (!112))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    var_22 = (max(var_22, (((((((-1 + 2147483647) << (28 - 28)))) ? (arr_11 [i_1 - 4] [i_1 + 1] [i_1 - 3] [i_1]) : var_12)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_19 [i_1 - 3] [i_5] [i_3] = ((((((max(var_10, (arr_13 [i_1] [i_2] [i_3] [i_4] [i_5] [i_5])))) ? (((arr_18 [i_1] [i_2] [i_1] [i_4] [i_5]) ? var_16 : var_15)) : (((var_7 >= (arr_5 [i_5] [i_4])))))) * (((((arr_6 [i_4] [i_4]) >> (((arr_8 [i_2] [i_2]) - 48976))))))));
                                arr_20 [i_1 + 1] [i_2] [i_2] [i_4] [i_5] [i_2] = (max(8, 2943363398735218570));
                            }
                        }
                    }
                }
            }
        }
        var_23 = (max(((max((arr_12 [i_1] [i_1 - 4] [i_1 + 2] [i_1]), (arr_12 [i_1] [i_1 - 4] [i_1 + 2] [i_1])))), (((arr_12 [4] [i_1 - 4] [i_1 + 2] [i_1 - 2]) ? 436133029 : 0))));
        var_24 = (arr_11 [i_1] [i_1] [i_1] [i_1]);
    }
    for (int i_6 = 4; i_6 < 13;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] [i_6] = ((((!(arr_14 [9] [i_6 - 3] [15] [i_6])))));
        var_25 = ((((((arr_6 [i_6] [i_6 + 1]) ? (arr_6 [i_6 - 1] [i_6 - 2]) : 1))) ? ((((!(((var_2 ? -1631 : -1))))))) : (max(((max((arr_6 [i_6 - 3] [i_6]), 45))), (max((arr_0 [i_6]), var_6))))));
    }
    for (int i_7 = 4; i_7 < 13;i_7 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_26 = (((arr_12 [i_7] [i_8] [i_8] [i_8]) ? (arr_12 [i_7] [i_7] [i_7] [i_7]) : (arr_12 [i_7] [i_8] [4] [i_8])));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            arr_38 [i_8] [i_8] [i_9] [i_10] [i_10] = var_12;
                            arr_39 [i_7 - 1] [i_8] [i_8] [i_7 - 1] = ((!(arr_5 [i_7 - 4] [i_7])));
                        }
                    }
                }
            }
            var_27 = arr_6 [i_7] [i_8];
            var_28 += 567344929;
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            arr_43 [i_7] [i_12] [i_12] = ((1 ? -1 : -1595063032));
            var_29 = (max(var_29, (((((((arr_24 [i_7]) & (arr_16 [i_7] [i_12] [i_7])))) ? (arr_35 [i_7] [i_7 + 2] [i_12] [i_7] [i_12]) : (((112 ? (arr_11 [i_7] [i_7] [1] [i_12]) : (arr_13 [i_7 + 1] [i_7 + 1] [2] [i_7] [4] [i_12])))))))));
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            arr_46 [i_7] [i_13] [i_13] = ((1 ? 7042668154313512319 : -436133020));
            var_30 = 32767;
            var_31 = (min(var_31, var_8));
        }
        arr_47 [i_7] [i_7] = ((-(arr_11 [i_7 - 3] [i_7] [i_7] [i_7 + 3])));
        var_32 = (max(var_32, 255));
    }
    var_33 = (min(var_16, var_1));
    var_34 = (min(1, 4061596425548172931));
    #pragma endscop
}
