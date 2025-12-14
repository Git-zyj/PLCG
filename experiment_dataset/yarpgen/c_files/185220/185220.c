/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        var_20 = 6;
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((((arr_3 [i_1 - 3] [i_1 - 3]) || ((((-127 - 1) ? var_8 : (arr_1 [i_1])))))) ? (arr_1 [i_1]) : var_15));
        arr_6 [i_1] = ((var_11 ? (arr_0 [i_1] [i_1]) : 45292));
        var_21 = var_7;
        arr_7 [i_1] [i_1] = ((((((arr_3 [i_1 + 2] [i_1 - 3]) ? var_11 : (arr_3 [i_1 + 1] [i_1 + 2])))) ? ((((arr_4 [i_1 + 2]) ? var_17 : (((arr_0 [i_1] [i_1]) ? 121 : var_2))))) : ((-5846903044851698339 ? var_5 : (arr_4 [i_1 + 2])))));
        arr_8 [i_1 - 2] = var_1;
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = (max(var_10, (arr_3 [i_2 - 2] [i_2 + 2])));
        arr_12 [i_2] = ((!((((arr_10 [i_2 - 2] [i_2 + 2]) ? (arr_10 [i_2] [i_2 + 1]) : (arr_10 [i_2 + 2] [i_2 - 3]))))));

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_15 [i_2] [17] [i_2] = 1;

            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                var_22 = var_15;

                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_21 [i_2] = (arr_14 [i_2] [i_2]);
                    arr_22 [12] [12] [i_2] [12] [i_4] = (((arr_4 [i_3]) ? ((var_12 ? var_13 : 795553591)) : -var_2));
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {

            for (int i_7 = 3; i_7 < 18;i_7 += 1)
            {

                for (int i_8 = 2; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    var_23 = (((arr_19 [i_2] [i_2] [i_2] [19] [i_2]) && (arr_14 [i_7] [i_8])));
                    arr_30 [i_2] [i_2] [i_2] [i_2] = ((21131 ? (arr_16 [3]) : (~var_17)));
                }
                for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    var_24 = (((arr_32 [i_9] [i_7] [i_6] [i_2] [i_2]) ? (((arr_18 [i_9] [i_7] [i_6] [0] [0]) ? var_3 : 2097151)) : var_5));
                    var_25 = (arr_18 [i_2] [i_6] [i_7] [6] [i_9]);
                }
                arr_34 [0] [0] [i_7] [i_2] = var_1;

                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_26 = (max(var_26, (arr_26 [i_2 + 1] [i_2 + 2])));
                    arr_38 [i_2] = (((((5846903044851698336 ? var_19 : (arr_36 [i_2] [i_6] [i_7] [i_10])))) ? (((arr_29 [i_10] [i_7] [i_6]) ? var_9 : (arr_29 [4] [i_6] [i_6]))) : (((var_18 ? (arr_31 [i_2] [i_2] [i_2 + 1] [i_2]) : (arr_32 [i_10] [16] [i_6] [16] [16]))))));
                }
                arr_39 [i_2] [i_7] = ((var_16 ? -820884671 : -352977119));
            }
            arr_40 [i_2] = (((arr_1 [i_6]) ? (arr_1 [i_2 - 1]) : (arr_16 [i_2 - 2])));
            var_27 -= var_6;
        }
        /* vectorizable */
        for (int i_11 = 3; i_11 < 17;i_11 += 1)
        {
            var_28 &= (((arr_19 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [8]) ? (arr_41 [i_11 - 3] [i_11 - 3] [i_11 + 3]) : (((var_5 ? var_10 : var_14)))));
            arr_45 [i_2] [i_11] = (((arr_43 [i_11 + 2] [i_2 + 1]) + (arr_1 [i_2 - 1])));
            var_29 = (((arr_9 [i_2] [i_11]) ? ((var_3 ? (arr_17 [i_2] [i_2] [13]) : 11)) : (arr_36 [i_2] [i_2] [i_11 + 3] [i_11])));
            arr_46 [i_2] [i_2] [i_2] = (arr_29 [i_2] [i_2] [i_2]);
        }
        arr_47 [i_2] = var_14;
    }
    var_30 ^= var_3;
    #pragma endscop
}
