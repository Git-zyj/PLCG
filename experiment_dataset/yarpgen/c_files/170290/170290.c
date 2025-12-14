/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((var_3 ? var_1 : var_9))))));
    var_11 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 -= (arr_3 [i_0] [i_0]);
        arr_4 [i_0] = (-518035477 / 5097);
        arr_5 [i_0] = (((arr_3 [i_0] [i_0]) == (arr_3 [i_0] [i_0])));
        var_13 = ((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_10 [i_2] = (((arr_1 [i_1]) ? var_0 : (arr_1 [i_2])));

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_13 [i_1] [i_1] [i_3] [i_3] = (((~227) ? var_6 : (((arr_12 [i_3] [i_2] [i_1]) ? 14063302546348163696 : (arr_8 [i_1] [i_2] [14])))));

                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    arr_18 [i_1] [i_3] [i_2] [i_1] = 214;
                    arr_19 [i_1] [i_2] [i_3] [i_4 + 1] [i_4 + 1] = (((((arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1]) | (arr_0 [i_4 - 1]))) | (arr_2 [i_4 - 1] [i_4 - 1])));
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_24 [16] [16] &= ((!(arr_3 [i_1] [i_1])));
                    arr_25 [i_1] = ((~(arr_2 [i_5] [i_3])));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {
                    var_14 -= 3957791338;

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_15 = (min(var_15, ((((arr_23 [i_1]) % ((((arr_14 [i_1] [1] [i_3] [i_3] [1]) ? 3093231127 : -4089))))))));
                        arr_31 [i_6] [i_6] [i_6] [i_2] [i_1] = ((~(((229 || (arr_2 [i_1] [i_2]))))));
                        arr_32 [i_6] [i_6] [i_6] = ((((((arr_15 [i_1] [i_1] [i_1] [i_1]) + (arr_15 [i_7] [7] [i_1] [i_1])))) ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]) : (var_0 * 130560)));
                        arr_33 [i_6] [i_2] [i_3] [i_2] [i_6] = (arr_29 [i_1] [i_1] [i_3] [i_3] [i_1]);
                    }
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        arr_38 [i_1] [i_2] [i_8] [i_8] [i_9 + 1] = 3957791343;
                        arr_39 [i_1] [i_1] [i_1] [i_8] [i_8] [i_9 + 1] [i_9 + 1] = arr_20 [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9] [i_2];
                        arr_40 [3] [i_8] [i_8] [4] = 9;
                    }
                    arr_41 [i_1] [i_8] [i_8] = ((((arr_7 [i_2]) | var_3)));
                    arr_42 [i_8] = (arr_27 [i_2] [i_2] [i_2] [1]);
                }

                for (int i_10 = 3; i_10 < 22;i_10 += 1)
                {
                    var_16 ^= (!var_9);
                    arr_46 [i_10] = (arr_6 [i_2] [i_3]);
                    arr_47 [i_10] [i_10] [i_10] [i_10] [6] = 3093231117;
                }
                var_17 = (arr_1 [i_1]);
                arr_48 [i_3] [7] [i_2] [i_1] = ((!(((var_9 ? 337175955 : (arr_2 [i_1] [i_1]))))));
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                var_18 = 7853497660742945886;
                var_19 *= var_3;
                arr_51 [i_1] [i_1] [i_1] [i_1] = 337175965;
            }
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                arr_54 [i_1] [i_1] [i_1] = (arr_20 [i_1] [i_1] [i_12] [i_1] [i_1] [i_1]);
                arr_55 [i_12] [i_12] [4] [i_1] = ((arr_37 [i_12] [i_2]) ? (((arr_44 [i_2] [i_2] [i_12] [i_12] [22]) ? var_4 : 1201736178)) : (1201736151 && 201));
                arr_56 [i_1] [23] = 65535;
            }
            var_20 ^= ((-557883062 ? (arr_50 [i_1] [i_2]) : (arr_17 [i_2] [i_2] [i_1] [i_1] [i_1])));
            var_21 ^= 1335041030;
            arr_57 [i_1] = 1;
        }

        for (int i_13 = 3; i_13 < 23;i_13 += 1)
        {
            arr_61 [11] [i_13] [i_13] = (arr_6 [i_13 + 1] [i_13 - 3]);
            var_22 = ((14 ? ((((arr_20 [i_1] [i_1] [i_1] [i_1] [14] [i_13 - 3]) ? 1201736146 : -557883061))) : ((var_3 ? (arr_21 [19] [2] [i_1]) : (arr_37 [14] [i_13])))));
            arr_62 [4] [4] = (!var_6);
        }
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            arr_67 [18] |= (((((arr_65 [i_1] [i_14] [i_1]) >= 4884))) % 2667619039);
            arr_68 [i_1] [i_14] [i_14] = (((arr_43 [i_1] [i_1] [i_1] [i_1]) ? (arr_15 [21] [i_14] [i_14] [i_14]) : (arr_20 [i_1] [i_14] [i_1] [i_14] [i_14] [i_1])));
        }
    }
    #pragma endscop
}
