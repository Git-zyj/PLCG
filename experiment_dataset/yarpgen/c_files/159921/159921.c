/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 += (((max(14572422687908965080, (min((arr_0 [i_1]), 3874321385800586536)))) * 15));
                arr_4 [i_1] [i_1] = ((((-((3874321385800586536 ? var_1 : 3425310373045958363)))) - (-2147483647 - 1)));
                var_12 = ((+(((arr_3 [i_0 + 1] [i_0 + 1]) ? (min((arr_2 [i_0]), var_8)) : var_5))));
                arr_5 [i_0] [i_0 - 1] [i_0] = ((var_9 ? ((((((31 ? 14572422687908965066 : 1)) < (((65280 ? 1 : 1))))))) : ((var_6 ? 15 : (max(var_1, 170))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {

                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_5] = ((!(arr_15 [i_2 - 1] [i_3] [1] [9] [i_3])));
                        var_13 = var_7;

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_14 ^= (((arr_8 [i_3]) ? (arr_18 [i_6] [i_3] [i_3]) : 33));
                            var_15 = (max(var_15, (((arr_7 [i_5 + 1]) ? (((arr_11 [9] [i_4]) ? var_6 : var_0)) : (arr_17 [i_2] [i_3] [i_4] [4])))));
                            arr_22 [i_5 - 4] [i_6] [i_4] [3] [0] [i_4] [i_4] = -var_8;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_25 [1] [i_3] [i_3] [i_4] [i_3] [i_7] = var_3;
                            arr_26 [17] [i_3] [9] [9] [i_4] [i_7] = -16890691455189570533;
                            var_16 &= (((var_2 && var_10) ? (arr_21 [i_2 - 1] [14] [i_4] [i_5 + 2] [i_7] [i_2 + 2]) : (!18446744073709551615)));
                        }
                        var_17 = (max(var_17, 448));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_30 [i_4] [i_4] [i_3] [i_4] = (((arr_7 [i_2 + 1]) ^ (arr_7 [i_2 + 2])));
                        arr_31 [i_2 - 2] [i_3] [i_3] [i_3] [i_2] [i_8] &= var_4;
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_18 = ((!(!var_10)));

                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            var_19 = (((~6811391396899521544) ? (arr_21 [i_9 - 1] [i_3] [i_4] [i_9] [24] [22]) : (!1)));
                            var_20 = (min(var_20, (((65278 ? (arr_20 [i_9] [i_3] [i_4] [24] [i_2 - 1] [i_4] [i_9 - 1]) : (arr_20 [i_2 + 2] [i_3] [i_4] [19] [i_2 + 2] [19] [i_9 - 1]))))));
                        }
                        for (int i_11 = 3; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_2] [i_3] [i_4] [13] [i_11] [i_4] = ((-984364030 ? 14572422687908965091 : 0));
                            var_21 = (((arr_24 [i_2] [i_2] [i_2 + 2] [20] [i_2]) ? (arr_24 [i_2 + 2] [8] [i_4] [i_9] [i_11]) : var_8));
                        }
                        for (int i_12 = 3; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            arr_42 [i_2] [i_3] [16] [i_9] [i_4] = (arr_8 [i_2 - 1]);
                            arr_43 [i_4] = (((((~(arr_33 [i_12] [0] [i_3] [i_2])))) ? (!var_2) : (arr_34 [i_9 - 1])));
                        }
                    }
                    var_22 = 253;
                }
            }
        }

        for (int i_13 = 1; i_13 < 24;i_13 += 1)
        {
            var_23 = (((arr_21 [i_2 - 2] [i_2 - 2] [i_13 - 1] [i_13] [i_13] [i_13 - 1]) / (var_5 <= var_2)));
            arr_46 [i_2] [i_13 + 1] = (arr_15 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_13 - 1]);
        }
        arr_47 [i_2 - 1] &= (((arr_8 [i_2 + 2]) - (arr_8 [i_2])));
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 14;i_14 += 1)
    {
        var_24 ^= (((1812059166530037802 ? 4207148580326495637 : var_1)));
        var_25 = (((arr_12 [i_14 + 1] [i_14]) != (arr_48 [i_14 + 2])));
        arr_51 [i_14] = ((~(arr_21 [i_14] [i_14] [i_14 + 1] [i_14 + 1] [i_14] [i_14 + 2])));
        var_26 += ((!(var_1 == var_5)));
    }
    #pragma endscop
}
