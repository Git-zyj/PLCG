/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [3] &= ((8972160001332324865 != (arr_1 [i_0])));
        var_16 = ((0 * (((arr_1 [i_0]) << (((arr_0 [i_0 + 1] [1]) - 1011057693))))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_17 -= max(0, (arr_3 [i_2]));

                    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_4] [i_1] [0] [0] [i_1] [i_1] = (((!(arr_11 [i_4]))));
                        var_18 = (!72);
                        var_19 = ((((((-(arr_4 [i_3] [i_1]))))) ? (((166 && -167) + (arr_10 [1] [i_4] [i_4] [i_4] [i_1]))) : var_5));
                        arr_13 [i_3] [i_1] [i_3] [1] = (((((((max((arr_6 [i_1] [i_3]), (arr_4 [i_1 + 3] [i_1])))) ? (max(var_14, 81)) : ((min(var_0, var_2)))))) && (-2147483647 - 1)));
                        var_20 = (min(var_20, var_0));
                    }
                    for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_1] = (188 | 708555348);
                        var_21 = ((((!((max(188, (arr_7 [i_1])))))) ? ((((((arr_4 [i_3] [i_5]) ? var_8 : var_11))) ? -99 : var_12)) : (((((arr_8 [i_1] [0] [0] [i_1]) >= (~var_2)))))));
                        var_22 = ((((!(arr_5 [i_1] [i_1])))) - ((((((arr_7 [i_1 + 2]) <= (arr_16 [i_5] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5] [i_1])))) - var_3)));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_23 = (~964463602);
                        var_24 = ((!(var_13 - var_8)));
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        arr_22 [i_1] [i_1] [i_7 - 3] [i_1] [i_2] [i_1] = ((var_4 <= ((((arr_6 [i_2 + 2] [i_7 + 1]) - (arr_19 [i_1] [i_2] [i_3]))))));
                        var_25 = (max(var_25, (arr_11 [i_1 - 1])));
                        arr_23 [i_7] [i_1] [i_1] [i_2] [i_1] = (((arr_19 [i_1] [i_1 + 3] [i_1]) ^ (arr_19 [i_1] [13] [i_1])));
                        arr_24 [11] [i_2] [i_1] [14] = var_8;
                    }
                }
            }
        }
        var_26 = (min(var_26, (((((arr_9 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1]) % (arr_14 [i_1 + 4] [i_1] [i_1] [i_1] [2] [i_1])))))));
    }
    var_27 = ((((var_9 == (((var_6 ? 91 : var_0))))) ? 654 : var_8));
    #pragma endscop
}
