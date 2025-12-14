/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 |= (max((arr_0 [i_0]), (arr_1 [i_0])));
        arr_2 [i_0] [i_0] |= (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_1));
        var_18 = (max((((arr_0 [0]) ? (arr_0 [i_0]) : var_11)), ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 *= ((max(((arr_5 [i_0] [i_0] [7] [i_0]), ((max((arr_6 [i_0]), var_8)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, 29031));
                                var_21 -= 36505;
                                var_22 = (max(var_22, (((~(arr_11 [i_4] [1] [i_2] [i_1] [5]))))));
                            }
                        }
                    }
                    var_23 = (arr_6 [i_0]);
                    var_24 += ((((29031 <= var_15) >> (((arr_12 [i_1] [i_1]) - 21433)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_25 = (max(var_25, (((var_3 ? (-32767 - 1) : (arr_12 [i_6] [i_0]))))));
                    var_26 += (arr_1 [i_0]);
                    var_27 *= (max((((arr_14 [i_6] [i_5] [i_0]) + (((arr_7 [i_6] [i_5] [i_0] [i_0]) ? var_4 : (arr_16 [i_0] [i_6] [i_6] [2]))))), (((1303017343 <= (arr_15 [i_5]))))));
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 16;i_7 += 1)
    {
        var_28 *= ((-((((max(18, (arr_19 [i_7])))) ? (arr_20 [2] [i_7]) : (((18446744073709551608 ? var_1 : 0)))))));
        var_29 &= min(12507, ((-(arr_19 [1]))));
        var_30 = (min(var_30, 255));
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    var_31 *= (arr_22 [i_9] [i_8]);
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_32 = (min(var_32, ((((((var_16 * ((-(arr_21 [i_10] [i_8 - 1])))))) - (max((max(0, (arr_26 [i_10]))), (((var_7 | (arr_28 [14] [i_8] [i_10] [i_10] [i_11 + 2])))))))))));
                                var_33 += ((-(((arr_23 [i_7 - 3] [i_8] [i_8] [i_10]) ? (arr_23 [i_7 - 3] [i_8] [i_9] [i_9]) : (arr_23 [i_7 + 1] [i_7 + 1] [14] [i_9])))));
                            }
                        }
                    }
                    var_34 = (min(var_34, (arr_28 [i_7] [i_7] [i_9] [i_7] [i_7])));
                }
            }
        }
        var_35 *= (arr_26 [16]);
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_36 -= (min(var_14, ((((arr_31 [i_12]) & var_5)))));
        var_37 = 88;
    }
    var_38 *= ((-(((min(var_2, var_13)) | (((max(var_10, 0))))))));
    #pragma endscop
}
