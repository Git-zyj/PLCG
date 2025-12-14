/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((~(arr_0 [i_0])));
                arr_5 [i_1] [i_1] [i_1] = (min(((var_7 % (arr_0 [i_0]))), var_7));
            }
        }
    }

    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                {
                    var_15 = (max(var_15, var_12));
                    arr_13 [i_2] [i_2] [i_4] = (((((-(arr_10 [i_2 - 1] [i_4 - 1])))) && ((((arr_10 [i_2 - 1] [i_4 - 1]) ? (arr_10 [i_2 - 1] [i_4 - 1]) : (arr_10 [i_2 - 1] [i_4 - 1]))))));
                    var_16 = ((((max((arr_11 [i_2] [i_4]), (arr_6 [i_2 - 1])))) ? (((!((max(-1822849554, 1822849553)))))) : (var_10 > var_10)));
                    arr_14 [i_2] [i_2] [i_2] [i_2] = ((((~(((arr_10 [i_4] [i_4]) >> (var_7 - 4139802485))))) > ((var_12 ? 28672 : ((var_5 ? var_12 : var_9))))));
                }
            }
        }
        var_17 = (((((~(arr_11 [i_2] [i_2])))) ? var_5 : (min(((((arr_7 [i_2]) / var_9))), ((var_9 ? var_12 : var_6))))));
        arr_15 [i_2] = (((((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2]))) & (arr_7 [i_2])));
    }
    for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
    {
        var_18 = ((max((((arr_11 [i_5] [i_5]) ? (arr_11 [i_5] [i_5]) : (arr_9 [i_5] [i_5]))), (arr_12 [i_5] [i_5] [i_5]))));
        var_19 = ((!((((var_1 ? var_3 : var_6))))));

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            var_20 = (max((~var_6), (((-(~var_8))))));
            var_21 = (min(((-(arr_3 [i_5 + 1]))), (arr_0 [i_6])));
            var_22 = ((((((arr_16 [i_5]) ? var_3 : ((((arr_19 [i_5] [10] [i_6]) ^ (arr_7 [i_5]))))))) ? (max(-460662711, ((max(var_9, 112))))) : (((((((arr_7 [i_5]) ? var_3 : var_5))) ? (arr_6 [16]) : var_3)))));
            var_23 ^= min(((-(var_3 * var_1))), (((((arr_2 [i_5]) ? var_3 : var_3)))));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_24 = (max(var_24, (((~(((arr_12 [4] [6] [4]) * ((min(32759, 25))))))))));
            arr_22 [i_5] = (min((((arr_6 [i_5 - 1]) ? var_0 : (((-28673 ? 2115029082 : 1822849541))))), (((var_7 % (var_6 - 1822849549))))));
        }
        var_25 = ((((((-((max(48674, -23416))))) + 2147483647)) >> (((!(arr_11 [i_5] [i_5]))))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 8;i_8 += 1) /* same iter space */
    {
        arr_26 [i_8] = (((arr_21 [i_8 + 2]) ? (var_3 % var_11) : (((28432 ? var_10 : var_11)))));

        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            var_26 = (((((var_7 / (arr_23 [i_8])))) ? -31 : var_3));
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 8;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    {
                        arr_35 [i_9] = -3106075299;
                        var_27 = (var_1 ? (arr_33 [i_8 + 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]) : (arr_33 [i_8 + 1] [i_9 - 1] [i_9 - 1] [i_9]));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 9;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        {
                            arr_43 [i_8] [i_9] [i_12] [i_13] [0] [i_14] = (arr_9 [i_8 - 1] [i_9 - 1]);
                            arr_44 [i_8] [i_8] [i_9] [i_9] [i_8] [i_8] = ((var_4 ? (arr_11 [i_9] [i_8 + 3]) : var_5));
                            var_28 = (((arr_34 [i_8 + 3] [i_12 + 2]) ? (arr_10 [i_9 + 1] [i_14]) : 0));
                            var_29 -= (arr_40 [i_8] [i_8] [i_8] [i_8]);
                        }
                    }
                }
            }
            arr_45 [i_8 + 3] [i_9] [i_9] = ((-(((arr_9 [i_8] [i_9]) ? var_8 : var_10))));
            var_30 = ((-(((!(arr_4 [i_8] [i_8] [i_8]))))));
        }
        var_31 = ((!(arr_39 [i_8] [i_8 - 1] [i_8] [i_8 + 2])));
    }
    var_32 = ((((var_12 ? var_8 : (min(var_6, var_9))))) ? (var_10 - var_5) : -var_10);
    #pragma endscop
}
