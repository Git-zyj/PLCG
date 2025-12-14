/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_17;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((((arr_1 [i_1 - 1]) | (((arr_1 [i_1 + 1]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 1]))))))));
                arr_8 [i_0] [12] &= (((arr_5 [i_1 + 1] [i_1 + 1]) || ((max(6647, (arr_5 [i_1 + 1] [i_1]))))));
                arr_9 [i_1] = (((((-125 == (-26293 >= var_6)))) << ((((min(26293, 49776))) - 26270))));
                var_22 = (((((arr_4 [i_1 - 1] [i_0]) & (arr_4 [i_1 + 1] [i_0 - 2]))) >> ((((~(arr_4 [i_0 - 2] [i_1 + 1]))) + 7008500960265643893))));
            }
        }
    }
    var_23 |= (max(((((7 ? var_3 : 161)))), ((((min(var_17, 49776))) ? (var_7 & var_15) : (237915445 & var_11)))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_20 [5] = var_5;
                        arr_21 [i_2] [i_3] [i_3] [i_4] [i_5] = arr_19 [8] [i_2] [i_3] [i_4] [i_5] [i_5];
                    }
                }
            }
        }
        arr_22 [i_2] [i_2] = ((((((arr_11 [i_2]) % 1907040968))) ? 25 : 1));
        arr_23 [i_2] = ((var_2 ? (((var_19 + 2147483647) >> (var_16 - 9837035716267816617))) : (arr_15 [i_2])));
        var_24 = (((arr_17 [i_2] [i_2] [i_2] [i_2]) ? var_11 : 1));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] [i_6] = 1841216609;

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_35 [i_9] [i_8] [i_9] = ((!((((max((arr_12 [5]), (arr_17 [i_6] [i_7] [i_8] [i_9]))) >> ((((arr_24 [i_7]) > var_11))))))));
                        var_25 = (((arr_19 [i_9] [i_8 - 1] [i_8 - 2] [i_8 + 1] [i_8] [i_7]) + ((((237915445 + -37) ? ((((arr_12 [i_6]) && -1717974680))) : (arr_29 [i_6] [i_7] [i_8]))))));
                        arr_36 [i_9] [i_9] [i_9] [i_9] = var_6;
                    }
                }
            }
            arr_37 [i_6] [i_7] [i_7] = min((arr_33 [i_7] [i_7] [i_6]), (((((!(arr_24 [i_7])))))));
            var_26 = (max(var_26, (((((((!(arr_31 [i_7] [i_7] [i_7] [i_6]))) ? ((var_1 ? (arr_31 [i_7] [i_7] [i_6] [i_6]) : (arr_28 [i_6]))) : var_13)) << (((min(((var_2 ? var_18 : var_12)), (arr_29 [i_7] [i_7] [i_6]))) - 179)))))));
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            arr_42 [i_6] [6] = ((-(((arr_29 [i_6] [i_6] [i_6]) / (((arr_39 [2]) ? (arr_41 [i_6]) : (arr_39 [i_6])))))));
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        arr_50 [i_6] [i_10] [i_6] [i_10] = (min((((((!(arr_15 [i_6]))) || ((min(1, 15802757458578746956)))))), (arr_48 [i_6] [i_10])));
                        arr_51 [i_12] [i_6] [i_11] [i_10] [i_6] [i_6] = (((((249 ? var_15 : 1))) ? (((!911374165) | 31352)) : (arr_10 [i_12])));
                        var_27 = (max(((7 >> (arr_44 [i_6] [i_11] [i_11 + 4] [i_11 + 3]))), (arr_24 [i_11 - 1])));
                    }
                }
            }
        }
        var_28 = var_1;
    }
    var_29 = ((((((var_1 >> var_1) / var_6))) ? ((((var_19 ? var_3 : 1)))) : (((((var_6 >> (var_13 - 8941637059393898860)))) ? ((max(var_15, var_4))) : var_19))));
    #pragma endscop
}
