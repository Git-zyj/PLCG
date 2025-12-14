/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_15 = ((+((((((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : var_4)) < (arr_3 [i_0] [i_0]))))));
            var_16 = (+-247);
        }

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_17 = ((var_9 ^ (((arr_0 [i_4]) ? (arr_12 [i_0] [i_0] [i_3] [i_0] [i_5]) : (arr_11 [i_5] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            arr_16 [i_0] [i_0] [i_2] |= ((var_10 ? ((var_7 ? var_13 : var_0)) : (((~(arr_15 [i_0] [i_2] [i_0] [i_4 - 1] [i_2]))))));
                            arr_17 [i_0] [i_0] [i_3] [i_4 + 1] [i_0] = (~17592169267200);
                            arr_18 [i_0] [i_3] [i_0] [i_0] [i_0] [i_3] [i_4] = (arr_14 [i_0]);
                        }
                        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_2] [i_0] [i_4] [i_6 - 1] [i_6 + 2] = (max(44867, 175));
                            var_18 = ((~(arr_10 [i_3] [i_0] [i_4 + 4] [i_3] [i_6 + 1])));
                        }
                        var_19 *= var_6;
                    }
                }
            }

            /* vectorizable */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {

                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {
                    var_20 -= (arr_4 [i_8 - 2] [i_8 + 2] [i_8 - 2]);

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_28 [i_0] [i_2] [i_2] [i_8] [i_9] [i_2] |= (arr_14 [i_8 - 1]);
                        var_21 -= (arr_13 [i_0] [i_0] [i_0] [i_7] [i_2] [i_0] [i_9]);
                        arr_29 [i_0] [i_2] [i_7] [i_0] [i_9] = (!var_12);
                        var_22 = ((~(arr_10 [i_8 + 3] [i_0] [i_7] [i_0] [i_0])));
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_23 += (5 && 4359);
                        var_24 += ((~(arr_1 [i_0] [i_2])));
                        var_25 -= var_5;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_26 -= var_3;
                        var_27 = var_6;
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        var_28 -= (((!var_0) ? (((!(arr_35 [i_0])))) : ((((arr_34 [i_2] [i_2] [i_2] [i_2] [i_2]) > var_7)))));
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_15 [i_0] [i_8 - 1] [i_7] [i_8 + 2] [i_8 + 2];
                    }
                }
                var_29 = (((arr_6 [i_0] [i_0] [i_0]) ^ (arr_11 [i_0] [i_2] [i_0] [i_2] [i_7] [i_7])));
            }
            var_30 = ((((((arr_33 [i_0] [i_0] [i_2] [i_2]) && (arr_33 [i_0] [i_0] [i_0] [i_2])))) + 9));
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    {

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            arr_47 [i_0] [i_13 - 3] [i_0] = ((~((~(arr_33 [i_13] [i_0] [i_13 - 3] [i_13 + 1])))));
                            var_31 = (((arr_12 [i_14] [i_0] [i_13 + 1] [i_0] [i_2]) | (arr_33 [i_15] [i_0] [i_0] [i_13])));
                        }
                        var_32 = (min(-var_3, (arr_7 [i_0] [i_13 + 2] [i_13 - 3] [i_0])));
                        var_33 |= ((((((~(arr_2 [i_14] [i_14]))))) ? ((max(1, 0))) : (var_1 - var_11)));
                        var_34 -= (((~(arr_10 [i_0] [i_2] [i_0] [i_13 - 2] [i_2]))));
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {

            /* vectorizable */
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                var_35 -= ((!(((var_2 ? (arr_10 [i_0] [i_17] [i_16] [i_17] [i_17]) : (arr_38 [i_0] [i_0] [i_17]))))));
                var_36 += (~-var_3);
                arr_52 [i_0] [i_0] [i_16] [i_17] = (~var_8);
            }
            var_37 += ((-(((max((arr_31 [i_0] [i_0] [i_0] [i_16] [i_0]), (arr_4 [i_0] [i_0] [i_0]))) << (((arr_9 [i_16] [i_16] [8]) - 3340395120))))));
        }
        var_38 = (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_39 = ((0 ? 4294967295 : 0));
    }
    var_40 = ((~(((var_5 + var_1) ? ((min(var_0, var_12))) : (var_7 & var_13)))));
    var_41 = (((var_9 <= var_2) << (var_0 - 4786475791655168285)));
    #pragma endscop
}
