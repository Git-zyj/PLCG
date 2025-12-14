/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            var_17 = ((!((((arr_2 [i_4 + 1]) ^ (arr_0 [i_1] [i_4 + 3]))))));
                            var_18 = (!var_7);
                            var_19 = var_9;
                            var_20 = (min((arr_14 [i_3] [i_4 - 1]), var_4));
                        }
                        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_3] [i_3] [i_1] [i_0] = (min((max((arr_18 [i_3] [i_5 - 1] [i_5] [i_5 + 1] [14]), var_5)), (((((max(-570000522470373833, var_8))) ? 23360 : (((arr_10 [i_0] [i_1] [i_2] [1]) ^ (arr_1 [i_5]))))))));
                            var_21 ^= ((((-23353 ? 0 : (arr_10 [i_1] [i_2] [0] [0])))));
                            arr_22 [i_5] [i_1] [i_3] [i_3] [i_5] = ((+(((arr_16 [14] [i_5 + 2] [i_5 + 4] [i_3 - 1]) >> (((arr_16 [1] [i_5 + 4] [i_5 - 1] [i_3 + 1]) - 2241010563759886741))))));
                            var_22 = (max(var_22, var_11));
                            var_23 = (arr_1 [i_5 + 4]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_24 = (arr_4 [i_0] [i_1] [i_2]);
                            arr_25 [i_3] = (((((~(arr_18 [i_3] [i_3] [3] [i_1] [i_3])))) ? -278695231 : ((873141896 ? (arr_15 [i_0] [i_3] [0] [i_2] [i_3] [i_0]) : var_8))));
                            var_25 = (((arr_11 [i_3 + 3] [i_1] [i_2] [i_2]) << (((arr_11 [i_3 + 1] [i_1] [i_2] [5]) - 7422572653033273798))));
                            var_26 += ((!(arr_0 [i_0] [i_6])));
                        }
                        var_27 = var_9;
                        var_28 += var_8;
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_2] [i_2] [i_7] = min((min(((((arr_17 [i_0] [i_1] [i_1] [i_7] [i_7] [i_2]) ? (arr_23 [13] [9] [i_0] [i_1] [13] [i_7]) : var_13))), (max((arr_18 [i_7] [i_1] [9] [9] [i_7]), var_4)))), ((((arr_13 [i_0] [5] [i_0] [i_7]) && (arr_13 [i_0] [i_1] [i_2] [i_7])))));
                        var_29 = (~(((((arr_23 [i_0] [i_1] [i_1] [9] [8] [i_7]) - var_0)) & (arr_12 [i_0] [0] [i_2]))));
                        var_30 = ((+((((arr_23 [i_2] [i_1] [i_1] [i_7] [i_2] [i_2]) == var_12)))));
                        var_31 = min(2147483647, -23361);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_0] [i_8] [i_2] [i_8] = var_3;
                        var_32 &= ((1541424309 ? -23360 : 2147483623));
                        var_33 = (((((((-(arr_30 [7] [i_1] [i_8] [8] [i_1] [i_8])))) ? (max(var_4, (arr_0 [i_0] [12]))) : var_9))) ? (arr_6 [i_2]) : (max(((~(arr_26 [i_0]))), ((1 >> (18281697438369462220 - 18281697438369462219))))));
                        arr_33 [i_0] [i_1] [i_0] [i_8] = (+(((arr_3 [i_0] [i_1] [i_2]) ? (arr_3 [i_8] [i_2] [i_0]) : (arr_3 [i_0] [i_2] [i_2]))));
                    }
                }
            }
        }
    }
    var_34 = var_5;
    #pragma endscop
}
