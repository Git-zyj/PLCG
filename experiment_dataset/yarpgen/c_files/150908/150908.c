/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (arr_0 [i_0] [6])));
        var_15 = var_10;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_0] = (((-2147483636 + 2147483647) << ((((((var_2 ? var_7 : (arr_0 [13] [i_0]))) + 1475206772)) - 21))));
            arr_6 [i_0] [i_0] [i_1] = (var_0 - -2147483641);
            arr_7 [i_0] [i_1] = ((var_7 || (arr_0 [i_0] [i_0])));
            arr_8 [i_0] [i_0] [i_0] = (arr_2 [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_2] = var_8;
            arr_12 [3] [i_0] = ((var_4 ? 2147483635 : ((((arr_10 [i_0] [i_0] [6]) || var_2)))));
            arr_13 [i_0] [3] [i_0] = ((-(~255)));

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_16 *= (((arr_10 [1] [6] [i_0]) | (arr_10 [i_3] [i_2] [i_2])));
                    arr_18 [i_0] [i_0] = ((-(arr_17 [i_3] [i_3])));
                    var_17 = (min(var_17, (arr_16 [20] [i_3] [i_0] [i_4] [20])));
                    var_18 *= 44;
                    arr_19 [i_2] [i_2] [i_0] [i_2] [i_2] [1] = (((arr_1 [i_0] [i_0]) ? (arr_4 [i_0]) : (arr_1 [i_0] [i_0])));
                }
                arr_20 [i_0] [2] [i_0] = (((var_10 ? 65082 : (arr_9 [i_0] [i_2]))));
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_19 = (min(var_19, (arr_9 [24] [i_5])));

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    arr_25 [i_2] [i_0] = -var_10;
                    arr_26 [8] [i_0] [i_5] [i_0] [i_0] = (arr_14 [7] [11]);

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_5] [24] [i_0] = ((arr_17 [i_0] [i_2]) ? (arr_10 [i_0] [i_2] [i_5]) : 5845);
                        var_20 = 212;
                        arr_30 [i_0] [i_6] [i_5] [1] [i_0] [i_0] = (((arr_2 [i_0]) % (arr_2 [i_6])));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_34 [1] [i_2] [i_2] [i_2] [i_0] = (0 | 44556651);
                        var_21 = (max(var_21, (((!(arr_4 [i_8]))))));
                    }
                    for (int i_9 = 2; i_9 < 24;i_9 += 1)
                    {
                        arr_37 [i_0] [i_6] [8] [i_2] [10] [24] [i_0] = (((arr_27 [10] [8] [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 - 2]) ? 248 : (arr_28 [i_9] [i_0] [i_9 + 1] [i_9 - 1] [i_0] [i_9 - 2])));
                        arr_38 [20] [i_2] [i_0] [i_6] [i_9] = (arr_0 [i_0] [i_0]);
                        var_22 = (((-131072 + 0) ? (arr_35 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 - 1]) : (arr_15 [i_9 - 1] [i_9 - 2] [i_9 + 1])));
                    }
                    arr_39 [i_0] = var_11;
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    arr_43 [i_0] [i_0] [i_0] [3] = (311766856151369761 || 53);
                    arr_44 [i_0] [i_0] [i_2] [i_10] [i_0] [i_0] = ((var_2 ? (arr_27 [i_5] [19] [i_10] [i_10] [i_10] [15]) : var_11));
                    var_23 = (max(var_23, ((840388511 && (arr_2 [i_0])))));
                }
            }
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
        {
            arr_48 [i_0] = ((1 ? var_10 : (min((arr_46 [i_0] [i_0]), (arr_3 [i_0] [4])))));
            arr_49 [i_0] [i_0] [i_0] = 1;
        }
        arr_50 [i_0] [i_0] = (((((min(var_9, var_10)))) * (arr_14 [i_0] [i_0])));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            arr_55 [1] [i_12] [i_13] = (((((((min(var_2, var_8))) ? (arr_32 [5] [i_12] [i_12] [21] [i_13] [1] [i_13]) : (!var_4)))) || ((!(7622 - 3708940456)))));
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 24;i_16 += 1)
                    {
                        {
                            arr_64 [i_12] [i_12] [i_13] [24] [i_15] [13] [i_16] = (((max(var_0, ((((arr_52 [5] [i_13]) ? var_2 : var_10))))) >= (arr_45 [i_16 - 2] [i_16 - 1])));
                            arr_65 [i_12] [i_13] [i_14] [16] = ((((-7745265826558013807 ? 5554 : 17268079359545327915)) / (((1 ? -118 : (arr_60 [i_16 - 1] [i_16 - 2] [i_16 - 2] [i_16] [i_16]))))));
                        }
                    }
                }
            }
            var_24 = (((arr_59 [9] [i_12] [i_13] [i_13]) % (min(var_12, 2147483636))));
        }
        for (int i_17 = 0; i_17 < 25;i_17 += 1) /* same iter space */
        {
            var_25 = (max((arr_47 [i_17] [i_12]), ((-((max((arr_1 [4] [i_12]), var_8)))))));
            arr_68 [i_12] [i_12] = ((~((~((min(1, 1)))))));
        }
        for (int i_18 = 0; i_18 < 25;i_18 += 1) /* same iter space */
        {
            arr_71 [21] [i_12] = (3298433622790378006 ^ 8191);
            var_26 = (max(var_26, ((((arr_70 [i_18]) * (((arr_70 [i_18]) / (arr_27 [21] [i_18] [i_18] [i_12] [i_12] [i_12]))))))));
        }
        arr_72 [i_12] = ((((((arr_58 [i_12] [i_12]) | (arr_24 [i_12] [i_12])))) ? (arr_58 [i_12] [i_12]) : (arr_24 [i_12] [i_12])));
    }
    #pragma endscop
}
