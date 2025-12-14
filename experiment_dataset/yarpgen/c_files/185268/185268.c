/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((arr_1 [i_0]) | (arr_1 [i_0])));
        arr_5 [i_0] = ((!(arr_0 [4])));
        arr_6 [i_0] = (arr_3 [i_0] [i_0]);

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            var_12 += (((!1) == var_5));
            var_13 = (((arr_10 [i_1 + 3] [i_1 + 2]) ? var_9 : var_11));
            var_14 -= var_2;
            arr_11 [i_1] = var_4;
            var_15 = (min(var_15, var_11));
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_16 = ((4202060916863894186 ? 14244683156845657434 : (arr_1 [i_2 - 2])));
            arr_15 [i_0] [i_0] = 1;

            for (int i_3 = 2; i_3 < 7;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_23 [i_0] [i_0] [i_5] [i_0] [i_3 + 2] [i_3 + 2] [i_0] = (var_3 ^ var_5);
                            var_17 = (min(var_17, ((((arr_13 [i_3 + 3]) && (((arr_18 [i_3 - 1] [i_3 - 1]) > var_6)))))));
                            var_18 = ((!((((arr_22 [i_5] [2] [i_2 + 2] [i_0]) + (arr_16 [i_4 - 4] [3] [i_0]))))));
                            arr_24 [i_5] [i_2 + 2] = (((((-63 ? var_2 : (arr_10 [3] [i_2])))) ? (arr_13 [i_2 + 1]) : 65535));
                        }
                    }
                }
                var_19 -= ((var_5 ? -15 : var_1));
            }
        }
        var_20 -= ((~(var_8 * var_2)));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_38 [i_6] [i_7] [i_8] [i_9] [i_6] [i_6] = (arr_12 [i_6] [i_7] [5]);
                        var_21 -= (!65505);
                        arr_39 [i_7] = (max(((((arr_36 [i_8 + 2] [i_7] [i_8 + 2]) <= 1))), 0));
                    }
                }
            }
        }
        var_22 = (arr_2 [i_6]);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
    {
        var_23 -= (3943413692 % (arr_27 [i_10]));
        arr_42 [i_10] = (arr_40 [i_10] [i_10]);
        var_24 = (!3943413678);
    }
    var_25 += (((3453075816 <= 3567796243) || ((!((min(var_10, var_5)))))));

    for (int i_11 = 2; i_11 < 8;i_11 += 1) /* same iter space */
    {
        var_26 = 1785816470;
        arr_46 [i_11] = (max(var_9, ((524288 & (3943413678 / var_9)))));
    }
    for (int i_12 = 2; i_12 < 8;i_12 += 1) /* same iter space */
    {
        var_27 -= var_10;

        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {

            /* vectorizable */
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                var_28 += ((((((arr_18 [i_13] [i_14]) ? (arr_20 [i_14] [2] [i_13] [i_13] [3]) : (arr_28 [i_12] [i_13] [i_14])))) ? (2039214053 * 0) : (4294967295 + 0)));
                arr_57 [i_14] [i_12] [i_12] [i_12] = var_6;
                var_29 = (arr_51 [i_13]);
            }
            for (int i_15 = 3; i_15 < 8;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 7;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 9;i_17 += 1)
                    {
                        {
                            arr_68 [i_12 + 1] [1] [i_15 - 1] [i_16] [i_12 + 1] = (((arr_12 [i_12 + 1] [i_15] [i_15]) >> (((arr_34 [i_12] [i_12 + 1] [i_16 + 2] [i_16]) ? 15 : 14244683156845657429))));
                            arr_69 [i_12] [i_12] [7] [i_16 + 2] [i_17] = ((((min((arr_35 [i_15 + 1] [i_12 + 2]), (((-127 - 1) ? (arr_35 [i_12] [i_12]) : var_1))))) / ((var_7 ? (((arr_48 [i_15 + 2] [i_16]) / 21432)) : (!129024)))));
                            var_30 = (min(var_30, -2147483392));
                            arr_70 [i_12] [4] [i_15 - 1] [i_16 + 1] [i_17] = (arr_21 [i_17]);
                        }
                    }
                }
                arr_71 [i_12] [i_12 - 1] = (min(((max(((15 ? var_1 : -8)), (((!(arr_8 [i_12] [i_13] [i_15]))))))), (max(var_4, var_5))));
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                arr_74 [i_12] [i_13] [i_12] [2] = ((-78 ? 5 : ((((arr_66 [i_12] [i_12 - 1] [4] [i_13] [i_12 - 1]) + var_6)))));
                var_31 += (((arr_44 [i_12 - 1]) ? (arr_44 [i_12 - 1]) : var_4));
                var_32 = (arr_29 [i_13]);
            }
            arr_75 [i_12 - 2] = (min(3210264914, -129024));
        }
        for (int i_19 = 1; i_19 < 9;i_19 += 1)
        {
            arr_79 [3] = (arr_32 [4] [4] [i_12 - 1]);
            var_33 += arr_26 [i_12 + 1] [i_19];
        }
        for (int i_20 = 4; i_20 < 8;i_20 += 1)
        {
            arr_82 [i_12] = ((38 ? (((21432 * (!-87)))) : (max(1146092411, 6829598163625391668))));
            var_34 += (arr_21 [i_20]);
        }
        for (int i_21 = 0; i_21 < 10;i_21 += 1)
        {
            var_35 = (min(var_35, 1));
            var_36 -= ((((((((var_10 ? -22673 : var_0))) ? (!4294967291) : (min(8910, var_6))))) ? ((((max(var_11, 3967322851882110955)) == (((min((arr_26 [i_12 + 2] [i_21]), var_4))))))) : ((max(87, 65535)))));
        }
        arr_86 [i_12] = ((((var_8 | ((min(var_3, 3110786592))))) > ((((arr_40 [i_12 + 1] [i_12]) % (arr_58 [i_12] [6] [5] [i_12 + 1]))))));
        var_37 = (min(9223372036854775807, 1));
    }
    #pragma endscop
}
