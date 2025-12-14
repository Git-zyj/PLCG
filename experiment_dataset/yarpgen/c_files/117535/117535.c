/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = 9089;
                arr_6 [i_0] [i_0] [i_0] = (max(720554213, ((((-127 + 2147483647) >> (-552049140 + 552049147))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_19 [1] [i_2] [i_0] [i_2] [i_0] = ((~(max(((var_5 ? (arr_16 [i_4] [i_2] [9] [i_2 + 1] [i_1] [i_2] [i_0]) : 127)), ((((arr_16 [i_0] [i_2] [7] [i_3] [i_4] [i_2] [12]) ? (arr_8 [i_0] [i_2] [10]) : (arr_8 [i_4 - 1] [i_3] [i_1]))))))));
                                var_16 *= ((((((var_14 ? 5558691201809081293 : 312525877482097564)))) || (((((var_6 ? var_5 : var_3))) || ((max(2150291759, var_7)))))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_17 = 1;
                            var_18 = (arr_29 [i_5] [i_8] [i_5] [i_5]);
                            var_19 = ((~(var_14 + var_6)));
                        }
                    }
                }
                arr_32 [i_6] [i_6] [i_6] [13] = -5558691201809081294;
            }
            var_20 = (arr_30 [8] [8]);
            var_21 = -var_0;
            arr_33 [i_6] [i_5] = var_14;
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 13;i_11 += 1)
                {
                    {
                        var_22 = var_10;
                        var_23 = ((((!(arr_36 [i_11 + 1] [i_5] [i_5] [i_5])))));
                    }
                }
            }
        }
        var_24 = (max(var_24, (((~((var_9 ? var_5 : var_11)))))));
        var_25 &= (((~(arr_20 [i_5]))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 14;i_15 += 1)
                {
                    {
                        var_26 = (arr_29 [i_15 - 2] [i_13] [i_15 - 2] [i_15 - 1]);
                        var_27 = (min(var_27, ((-(arr_37 [i_13] [i_14] [i_13])))));
                        arr_50 [i_12] [i_13] [i_14] [i_15 + 1] = ((~(~9115)));
                        arr_51 [14] [i_14] [8] [i_12] = ((128 + (arr_28 [i_15 + 1] [i_15] [i_15 - 2] [i_15] [i_15])));
                    }
                }
            }
        }
        var_28 = (((arr_37 [i_12] [i_12] [i_12]) >> (((arr_36 [i_12] [i_12] [i_12] [12]) - 3944639818577294742))));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    {
                        var_29 |= var_13;
                        arr_62 [i_18] [i_17] [i_16] [i_12] [i_12] = var_13;
                    }
                }
            }
        }
    }
    var_30 = (((var_6 + 21154) + 9127));
    var_31 = var_10;
    var_32 = (max(var_32, ((((!var_7) + ((min(var_2, var_10))))))));
    #pragma endscop
}
