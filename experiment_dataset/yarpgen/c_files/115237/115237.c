/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_19 *= ((((min(var_8, (arr_1 [i_0 - 1])))) ? (1649103157 == var_3) : ((11305 ? 4294967283 : (arr_1 [i_0 + 2])))));
        arr_2 [0] [0] |= (max(var_13, 13));
        var_20 = (min(var_20, (((~(max(1642345461672693194, (arr_0 [16]))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [4] &= (min(((max((arr_3 [i_1]), -16))), (arr_3 [10])));
        arr_7 [i_1] = (arr_5 [i_1]);
        arr_8 [i_1] [i_1] = (arr_0 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_15 [i_2] = ((var_12 ? var_7 : ((26 ? var_14 : 0))));
            arr_16 [i_2] = var_4;
            var_21 = (arr_9 [i_2] [i_3]);
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_22 *= -5330675680906716221;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_23 = ((var_1 ? (arr_18 [i_6]) : (arr_12 [i_5] [i_5])));
                            arr_27 [i_2] [i_4] [i_5] [i_6] [i_7] = ((var_8 ? (arr_19 [i_4] [i_6]) : (arr_19 [i_6] [i_7])));
                            var_24 = var_5;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        var_25 = (((-116 + 2147483647) >> (((arr_30 [15] [15] [i_4]) ? var_9 : 1))));
                        arr_33 [i_2] [23] [18] = (!var_4);
                        var_26 = (((arr_23 [i_2] [i_2] [i_4] [i_8] [i_8] [i_9]) || var_16));
                    }
                }
            }
        }

        for (int i_10 = 4; i_10 < 23;i_10 += 1)
        {
            var_27 = ((-422922259597188744 ? 1 : 1));
            var_28 = (((var_15 + 9223372036854775807) >> (((((arr_32 [i_10] [i_2] [i_2] [i_2] [6]) ? var_8 : var_15)) + 8591438013418006940))));
        }
        arr_36 [i_2] = ((var_0 ? (arr_25 [i_2] [i_2] [21] [i_2] [i_2] [i_2]) : (-127 - 1)));
    }
    var_29 = (max((max(-1088, -20875)), (((!((min(var_0, var_5))))))));
    #pragma endscop
}
