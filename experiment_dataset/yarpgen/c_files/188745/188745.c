/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0 + 2] [i_0] = (max(18446744073709551615, 6515210417225494314));
        arr_4 [i_0] = arr_2 [i_0];
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_20 = (min(var_20, var_15));
        arr_7 [i_1 + 1] = (~(4494761344000048737 & 8464301917494225872));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_21 &= (!(((6515210417225494343 ? var_18 : 11931533656484057302))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                {
                    arr_18 [1] [i_3] [i_4] &= (11931533656484057267 * 54369);

                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_22 = (var_3 >= var_17);
                        arr_21 [i_3] [2] &= ((~(arr_17 [i_4 - 1] [i_4 - 2] [i_3])));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_23 = ((((((arr_2 [i_6]) ? (arr_0 [i_4]) : (arr_6 [i_4 - 2] [i_3])))) ? ((((11931533656484057273 || (arr_22 [11] [i_4]))))) : (((arr_20 [i_2] [i_4] [i_4 + 1]) ? var_17 : (arr_8 [i_2])))));

                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            arr_26 [i_2] [15] [i_3] [i_4] [i_4] [i_7 + 1] = var_12;
                            var_24 &= (((arr_13 [i_2 - 1]) ? (arr_13 [i_2 - 3]) : (arr_13 [i_2 - 1])));
                            var_25 = (((((arr_6 [i_4] [13]) ? var_13 : (arr_17 [i_2 - 1] [i_2 - 1] [i_4]))) >> ((((arr_1 [2] [i_3]) >= (arr_25 [i_7] [i_4 - 2] [i_2] [i_2]))))));
                            var_26 = (arr_8 [i_2]);
                            arr_27 [i_7] [i_3] [i_4 + 1] [4] [i_7 - 1] [i_3] [i_7] &= ((((-(arr_25 [i_3] [i_4 + 1] [i_3] [13]))) >> (((((arr_24 [i_7] [i_6] [i_3] [i_3] [i_3] [i_2]) ? (arr_11 [i_7]) : 12018007583547536878)) - 9029220090751341986))));
                        }
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            var_27 = 11931533656484057301;
                            var_28 = (min(var_28, ((((arr_30 [i_3] [i_8 + 2]) / (arr_23 [i_2 + 1] [i_3] [i_3] [i_4]))))));
                        }
                        arr_31 [i_2] [i_4] = ((12018007583547536878 || (((11931533656484057273 ? (arr_13 [i_3]) : (arr_14 [i_6]))))));
                        arr_32 [i_3] [i_4] [i_3] [1] [i_3] &= (((arr_1 [i_2 - 1] [i_2 - 1]) >= 1));
                    }
                    arr_33 [i_4] = (((12018007583547536878 ? (arr_14 [i_4]) : (arr_2 [i_4]))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_41 [i_2] [i_2] [i_11] [i_2 + 2] = ((var_13 ? 2611495544772640324 : (arr_29 [i_2 + 1] [i_9] [i_10] [i_9] [i_10] [10] [i_11])));

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            arr_44 [i_2] [i_12] &= 18446744073709551615;
                            var_29 = (arr_25 [i_9] [i_9 - 3] [i_12] [i_12]);
                        }
                    }
                }
            }
        }

        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            var_30 = (((arr_36 [i_2 - 2] [i_2 - 2]) ? 41 : (arr_36 [i_2 - 2] [i_2 - 3])));
            var_31 = (((arr_2 [i_2 + 2]) ? (arr_2 [i_2 + 1]) : (arr_2 [i_2 - 3])));
            var_32 = (max(var_32, (!5020882275886579532)));
        }
    }
    #pragma endscop
}
