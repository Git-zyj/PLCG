/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_2;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_17 = ((((-(arr_1 [i_0 + 1] [i_0]))) * (~var_5)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 -= var_4;

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = (((arr_6 [i_0 - 1] [i_0 - 1]) ? (arr_6 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 - 1])));
                        arr_10 [i_0] [6] = (arr_3 [i_0 + 1] [i_1] [i_3 - 1]);

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_14 [i_4] [i_4] [i_4] [11] [i_4] = ((((((arr_12 [i_0] [8] [i_2] [i_3] [i_4]) % (arr_13 [i_0] [13] [13] [i_3 + 1] [11])))) ? (~476632973) : (arr_13 [i_3 + 2] [i_3 + 3] [i_3 + 3] [i_3] [i_3])));
                            var_19 = (max(var_19, ((((476632980 ^ 21417) ? (120 < var_0) : (arr_4 [i_3 - 1] [i_3] [i_3 + 2]))))));
                        }
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            var_20 = var_6;
                            var_21 = ((var_8 ? (((-121 ^ (arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [i_5 + 1])))) : ((-(arr_3 [i_0] [i_0] [i_0 - 1])))));
                            arr_18 [i_0] [i_1] [i_1] [i_2] [0] = (((476632980 || var_7) * (-6145578122648961576 == var_10)));
                            arr_19 [i_0] = (~-1482634128);
                        }
                        arr_20 [i_3] [10] [5] [i_3] = ((((((arr_5 [i_0] [i_0] [i_0 + 1]) ? (arr_6 [i_0] [i_0 - 1]) : (arr_8 [i_0])))) ? ((140 ? 21426 : -9203600534848545202)) : var_4));
                    }
                    var_22 = (((arr_7 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (-123 ^ var_4) : (arr_17 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1])));
                    var_23 = ((223955396 ? (arr_17 [i_1] [i_1] [i_2] [i_0 + 1] [i_1] [7] [i_1]) : var_0));
                }
            }
        }
        var_24 = var_13;
        arr_21 [i_0] [i_0] = -5402;
    }
    for (int i_6 = 2; i_6 < 18;i_6 += 1)
    {
        arr_25 [i_6] = (((min((((arr_24 [i_6]) + var_4)), (arr_23 [i_6] [i_6]))) >= ((((((arr_22 [i_6]) + 2147483647)) << ((((min(var_10, (arr_23 [i_6 + 2] [i_6])))) - 70)))))));
        arr_26 [i_6 - 2] &= (max((((arr_22 [i_6]) / ((-9198110600013541497 ? -121 : (arr_24 [i_6 + 1]))))), ((max((min(18679, (arr_22 [i_6]))), -var_10)))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 16;i_9 += 1)
            {
                {
                    arr_35 [i_7] [i_7] = (((arr_24 [16]) << var_13));
                    var_25 = (min(var_25, (((arr_34 [i_8] [i_8 + 1] [i_8 + 1] [i_8 - 1]) ? (arr_34 [i_8] [i_8] [i_8 - 1] [i_8 - 1]) : (arr_34 [i_8] [7] [i_8 + 2] [i_8 + 3])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                {
                    arr_41 [i_7] [i_10] [i_10] = (((!var_6) && (1 || 1744019672436180873)));
                    arr_42 [i_7] [i_7] [14] &= (31767 ^ -476632973);
                }
            }
        }
        var_26 = var_5;
        arr_43 [5] [i_7] = (arr_23 [i_7] [i_7]);
    }
    #pragma endscop
}
