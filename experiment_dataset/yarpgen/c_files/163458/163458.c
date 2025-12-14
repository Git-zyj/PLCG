/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((((((min(var_2, -1)) | var_9))) ? var_1 : ((((var_0 != var_8) * (1 | var_0))))));
    var_11 = -22369;
    var_12 = var_7;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (((!9223372036854775807) ? ((var_6 / (arr_0 [i_0 - 1]))) : (arr_1 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = (((((arr_2 [i_0]) != (arr_1 [6] [6])))));
    }

    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = (((((-(min(-1765020995, 53))))) ? (arr_6 [i_1 + 2]) : ((min(1, (!var_4))))));
        var_13 = (arr_0 [i_1]);
        arr_8 [i_1] = ((-((min((arr_1 [i_1] [5]), (arr_0 [i_1]))))));
        arr_9 [i_1] = ((((var_2 * var_4) ? var_3 : (((arr_6 [i_1]) / (arr_0 [i_1]))))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = (!5);

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_14 = (max(var_14, ((((-12 || -1324573812) + ((((((((arr_6 [i_2]) >= 157))) != (arr_11 [i_2]))))))))));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_19 [i_2 - 1] [i_4] [i_4] = (arr_0 [i_2]);
                var_15 = (var_7 ? (~109) : ((~(var_4 ^ 573005026741108602))));

                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    var_16 = ((!((min((arr_14 [i_3] [i_3]), -var_0)))));

                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        var_17 = min((arr_10 [i_4] [i_4]), (((arr_10 [i_3] [i_3]) / (arr_10 [i_4] [i_2]))));
                        arr_27 [10] [i_4] [i_5] = (arr_11 [4]);
                        arr_28 [i_2] [i_3] [i_4] [i_4] [i_6] = var_3;
                    }
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        var_18 ^= (((max(-687130908, 3825141389))));
                        var_19 = var_7;
                        arr_32 [i_3] [i_4] [i_5] = ((var_8 > (min(((var_9 | (arr_10 [i_4] [i_5]))), (arr_16 [i_2 + 2] [i_5 - 1] [i_5 + 1] [i_7 + 3])))));
                        var_20 |= ((!(arr_12 [i_7])));
                    }
                    arr_33 [i_2] [i_4] [4] [i_4] [i_5] = ((((arr_16 [i_3] [i_3] [i_3] [i_3]) | 1890616687)));
                }
            }
            arr_34 [i_2] = ((var_9 ? ((~(arr_2 [i_2]))) : ((((arr_20 [i_2 - 2] [i_2] [8]) ? var_7 : (arr_20 [i_2 - 2] [i_2] [1]))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_38 [i_8] [i_8] [i_8] = (((arr_5 [i_2 + 2]) != var_8));
            arr_39 [i_8] = var_1;

            for (int i_9 = 2; i_9 < 13;i_9 += 1) /* same iter space */
            {
                arr_43 [i_8] [3] [i_9] [i_9 - 1] = ((var_4 ? (1 ^ var_1) : (arr_2 [i_9 + 1])));
                arr_44 [i_8] = (arr_16 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]);
            }
            for (int i_10 = 2; i_10 < 13;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 2; i_11 < 14;i_11 += 1) /* same iter space */
                {
                    var_21 -= ((26 ? (((var_1 ? 28221 : var_7))) : (((arr_45 [i_10]) ? (arr_49 [i_10] [0] [i_10] [i_11] [i_10]) : (arr_18 [i_2] [i_8])))));
                    arr_52 [i_2] [i_8] [i_2 - 2] [i_2 - 1] [6] [i_2] = (((arr_2 [i_8]) >= (arr_18 [i_2] [i_8])));
                    var_22 = (min(var_22, (arr_45 [i_10])));
                    var_23 = (((140737421246464 % var_6) ? (arr_20 [i_2] [i_8] [i_11]) : (arr_40 [i_10 + 1] [i_8] [i_10])));
                    arr_53 [i_2] [i_8] [i_2] [i_2] [1] = (arr_0 [i_2 + 2]);
                }
                for (int i_12 = 2; i_12 < 14;i_12 += 1) /* same iter space */
                {
                    var_24 = (((~3) || (arr_1 [i_10 - 2] [i_10])));
                    arr_56 [i_8] [i_8] [i_10] [i_12] = var_0;
                }
                for (int i_13 = 1; i_13 < 15;i_13 += 1)
                {
                    arr_59 [4] [i_2] [i_8] [i_10 - 2] [i_10] [i_13] = var_7;
                    arr_60 [i_2] [i_8] [i_8] [i_10] [i_13 - 1] = (((((-(arr_0 [i_13])))) > (arr_12 [i_2])));
                    arr_61 [i_2] [i_2] [i_2] [i_2] [i_8] = (arr_20 [i_13 - 1] [i_8] [i_8]);
                    var_25 = (min(var_25, ((((arr_21 [i_13] [i_10] [i_2] [i_10] [i_2]) << (((((arr_35 [i_2] [i_10] [i_2]) & (arr_16 [i_2] [i_8] [i_8] [i_8]))) - 118)))))));
                    var_26 *= var_9;
                }
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    var_27 -= var_8;
                    arr_64 [i_8] [i_8] [i_10] [i_14] [i_8] = (((arr_63 [i_2 + 1] [i_8] [i_2 + 1] [i_8] [i_10 + 2]) ? (arr_63 [i_2 - 1] [i_2 - 1] [i_10] [i_8] [i_10 + 3]) : (arr_63 [i_2 - 1] [10] [i_10 + 3] [i_8] [i_10 + 2])));
                    var_28 = ((~(arr_58 [i_2 + 2] [i_8] [i_8] [i_2] [3])));
                    var_29 = (min(var_29, var_5));

                    for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                    {
                        arr_67 [i_2] [i_2] [i_2] [i_2] [i_2 + 2] [i_8] = (arr_23 [i_14 - 1] [i_14] [i_8]);
                        arr_68 [i_8] [i_8] [i_10] [i_8] [i_15] [i_8] [i_8] = (arr_55 [i_10] [i_10] [i_10 + 2] [i_10 + 1] [i_8]);
                    }
                    for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
                    {
                        arr_71 [i_8] = (112 ^ 17769);
                        var_30 = (arr_11 [i_2 - 1]);
                    }
                    for (int i_17 = 2; i_17 < 15;i_17 += 1) /* same iter space */
                    {
                        arr_74 [i_8] [i_8] [i_10] [i_14] [i_17] [i_8] [2] = var_6;
                        arr_75 [i_17] [i_14] [i_8] [i_8] [0] = 0;
                        var_31 = ((arr_11 [i_17 - 1]) > (arr_50 [15]));
                    }
                    for (int i_18 = 2; i_18 < 15;i_18 += 1) /* same iter space */
                    {
                        arr_79 [i_8] = ((var_7 <= (((arr_15 [5]) + var_4))));
                        arr_80 [i_8] = ((-(arr_17 [i_2] [i_18 - 1] [i_10] [i_8])));
                        var_32 = (max(var_32, var_4));
                    }
                }
                arr_81 [i_10] [i_8] [i_10] = ((83 && (arr_6 [i_2 + 2])));
            }
        }
        for (int i_19 = 4; i_19 < 12;i_19 += 1)
        {
            arr_86 [i_2 + 1] = (arr_76 [i_2] [i_2] [i_2 - 1] [i_2] [0]);
            arr_87 [i_2] = var_9;
            var_33 = var_9;
            var_34 |= ((((arr_29 [i_2 + 1] [1] [i_19] [i_2]) ? var_8 : 1)) * (((arr_50 [i_2 + 2]) ? (arr_50 [i_2 - 1]) : var_7)));
        }
        arr_88 [i_2] = (min(((~(arr_42 [i_2 + 2] [i_2 + 2]))), var_4));
        var_35 -= 0;
    }
    for (int i_20 = 2; i_20 < 12;i_20 += 1)
    {
        arr_91 [i_20] = var_3;
        arr_92 [4] = (((min(((var_8 >> (242 - 225))), ((min(139, (arr_45 [8])))))) ^ ((((((arr_62 [i_20] [i_20] [i_20] [i_20] [2] [0]) > var_0))) | ((var_5 ? var_8 : var_9))))));
        arr_93 [i_20 + 1] = ((209 ? ((~((max(var_4, var_3))))) : ((~((~(arr_45 [10])))))));
    }
    #pragma endscop
}
