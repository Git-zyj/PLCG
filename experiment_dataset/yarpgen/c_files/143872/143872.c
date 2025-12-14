/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (((~(arr_1 [i_0] [i_0]))))));
        var_15 = (max(var_15, 364133691));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_16 += var_4;
                        var_17 *= (!(4194304 <= 1079991549600226031));
                    }
                }
            }
        }
        var_18 = ((4290772991 && (arr_9 [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_19 *= (!4194304);
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((((arr_20 [i_4] [i_4] [i_7 - 2] [i_7 - 2] [i_8 - 1]) > (arr_1 [i_7 - 1] [i_8 + 3]))))));
                                var_21 = (2002377213 % -22);
                            }
                        }
                    }
                    var_22 = ((1125899906842623 * (arr_13 [i_6])));
                    var_23 = (min(var_23, (((!(228 & 364133691))))));
                }
            }
        }
        arr_22 [23] [23] = ((255 >> (((~-34) - 8))));
        var_24 &= ((7566841535840091672 ? (arr_15 [i_4] [i_4] [i_4]) : (arr_16 [i_4] [i_4] [i_4])));

        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_25 = ((-(((arr_15 [i_4] [i_4] [i_9]) | (arr_9 [1])))));
            var_26 *= (((arr_19 [i_4] [i_4] [i_4] [i_9] [i_9] [i_4]) - (arr_13 [i_4])));
        }
    }
    var_27 = (max(var_27, ((((~92) <= ((((var_8 <= var_0) == (-1 * 228)))))))));
    var_28 *= var_8;
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 19;i_11 += 1)
        {
            {

                /* vectorizable */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    var_29 &= ((4290772966 >= ((((arr_24 [i_12]) * (arr_28 [i_11]))))));
                    var_30 = ((var_8 * (arr_30 [i_11 - 2] [i_10] [i_11])));
                    var_31 = (max(var_31, (arr_12 [i_12])));
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 18;i_14 += 1)
                        {
                            {
                                var_32 *= ((!(arr_36 [i_14 + 3] [i_14 + 2] [i_13 - 1] [i_11 - 1] [i_11 - 1])));
                                var_33 += (~9223372036854775807);
                                var_34 *= (~var_13);
                                var_35 = (max(var_35, ((!(((65515 % (arr_24 [6]))))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_15 = 3; i_15 < 20;i_15 += 1)
                {
                    arr_42 [2] [i_11] &= (((arr_18 [i_11 + 1] [24] [i_15 - 3] [i_15 - 2]) < (arr_14 [i_11 - 1] [i_11 + 2] [i_15 + 1])));
                    var_36 = ((-1 * (arr_27 [i_10])));
                    var_37 = (((-30 || 2002377211) | -30));
                    var_38 = ((4294967295 != (arr_15 [i_15 - 3] [i_11 + 1] [i_11 + 1])));
                }
                var_39 *= (3100 * 1125899906842623);
                var_40 = (min(var_40, ((max((arr_10 [i_10] [i_11 + 1]), ((((arr_26 [i_11 - 1] [i_11 + 1]) || 30))))))));
            }
        }
    }
    #pragma endscop
}
