/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((var_8 ? var_8 : ((var_7 ? var_5 : var_7)))), (((var_9 ? (var_0 || var_9) : var_1)))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_13 += ((!(((~(arr_0 [i_0 + 2]))))));
        var_14 ^= ((var_4 ? var_9 : var_6));
        arr_2 [i_0 - 1] [i_0] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_15 |= ((+(((arr_5 [i_3] [i_2] [i_0 + 2]) ? var_0 : (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                        arr_11 [i_0] [i_3] [i_0] [i_3] [i_2] [i_3] = (((((34213 >> var_8) <= 2561036742)) ? var_10 : ((((min(var_0, var_11)))))));
                        arr_12 [i_3] [i_3] [i_3] [i_0] = var_0;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_16 *= (max((arr_4 [i_4]), (arr_14 [i_4])));
        var_17 = (min(var_17, (arr_5 [i_4] [i_4] [i_4])));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_20 [i_5] = (arr_18 [i_5]);
        var_18 = (min(var_18, (((var_11 / (var_4 != var_2))))));
    }
    for (int i_6 = 1; i_6 < 23;i_6 += 1)
    {
        arr_23 [8] &= var_9;
        var_19 *= ((+(min((var_7 | var_11), var_2))));

        /* vectorizable */
        for (int i_7 = 4; i_7 < 22;i_7 += 1)
        {
            var_20 = (arr_24 [i_7 - 4]);
            arr_26 [i_6] = ((var_2 ? (arr_25 [i_6] [i_6] [i_7]) : var_8));
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_21 = (max(var_21, (arr_22 [4])));
            arr_29 [i_6] [i_6] = var_4;
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {

            for (int i_10 = 2; i_10 < 23;i_10 += 1)
            {

                for (int i_11 = 1; i_11 < 24;i_11 += 1)
                {
                    arr_38 [i_6] [i_9] [i_9] [i_10 - 2] [i_6] [i_9] &= var_8;
                    var_22 = (((arr_30 [i_6] [i_6] [i_11 + 1]) ? (((max(var_10, (arr_27 [i_6] [i_9] [i_11 - 1]))))) : ((max((!var_5), (arr_37 [i_11 + 1] [i_9] [i_11 + 1]))))));
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    arr_42 [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_6] = var_7;
                    var_23 = (min(var_23, ((!((!((((arr_27 [i_9] [i_9] [i_9]) ? var_5 : var_1)))))))));
                    var_24 = ((var_0 ? (arr_24 [i_9]) : ((((!(arr_21 [i_6]))) ? (var_10 && var_1) : ((((arr_36 [i_6] [i_6 + 2] [i_6] [i_6] [i_6 + 1]) || (arr_27 [i_9] [i_9] [i_6 - 1]))))))));
                    arr_43 [i_9] &= (max((((127 ? var_0 : var_7))), var_2));
                }
                var_25 *= (arr_21 [i_6]);
            }
            var_26 |= 0;
            var_27 *= (((((~(arr_30 [i_9] [i_9] [i_6])))) ? ((((max(var_8, 4294967290)) <= var_1))) : (arr_28 [i_6 - 1] [i_9])));
        }
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        arr_46 [i_13] [i_13] = ((!(arr_40 [i_13] [i_13] [i_13] [i_13])));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                {
                    var_28 = (max(var_28, (((~(((arr_50 [i_14]) / (arr_50 [i_14]))))))));

                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        var_29 += var_8;
                        arr_55 [i_13] [i_14] [i_15] [i_13] = var_11;
                        arr_56 [i_13] [i_13] [i_13] [i_13] = 32766;
                    }
                }
            }
        }
        var_30 = (arr_25 [i_13] [i_13] [i_13]);
        var_31 = (var_9 ^ var_8);
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 25;i_18 += 1)
            {
                {
                    arr_61 [i_17] = ((!(7684838314704818365 ^ var_9)));
                    var_32 = (max(var_32, var_11));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        for (int i_20 = 3; i_20 < 24;i_20 += 1)
                        {
                            {
                                var_33 ^= (arr_27 [i_19] [i_19] [i_19]);
                                arr_67 [i_13] [i_17] [i_18] [i_18] [i_13] [i_18] = (((((arr_65 [i_17] [i_17] [i_17] [i_20 + 1] [i_20]) ? (arr_65 [i_18] [i_19] [i_19] [i_20 + 1] [i_19]) : (arr_65 [i_13] [i_13] [i_18] [i_20 - 1] [i_20]))) % (((arr_65 [i_20] [i_20] [i_20 - 2] [i_20 + 1] [i_20 + 1]) ? (arr_65 [i_17] [i_17] [i_20 - 1] [i_20 + 1] [i_20 - 3]) : (arr_65 [i_19] [i_19] [i_20 - 1] [i_19] [i_19])))));
                            }
                        }
                    }
                    var_34 = (!var_1);
                    arr_68 [i_13] [i_13] [i_17] [i_17] = 10761905759004733248;
                }
            }
        }
    }
    var_35 &= (((((-((max(var_1, var_3)))))) != ((((var_0 ? var_11 : var_10)) * (min(var_9, var_5))))));
    #pragma endscop
}
