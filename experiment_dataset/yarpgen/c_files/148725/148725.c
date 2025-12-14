/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= 61;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_11 ^= (arr_3 [i_1] [i_1] [i_1]);
            var_12 = 18446744073709551614;
            var_13 = 255;
        }
        var_14 = ((var_6 + (3461233782 <= -1)));
        var_15 = (max(var_15, var_9));
        var_16 = (min(var_16, ((((arr_2 [i_0] [i_0] [i_0]) + (52 % var_0))))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_8 [18] = 576460748008456192;
        var_17 = (max(var_17, 130023424));
        arr_9 [i_2] = ((((~((1914670713 ? 0 : -9)))) - -1843156167));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_21 [i_3] = 5450377973270359936;
                        arr_22 [i_4 - 1] [i_5 - 1] [i_3] [i_3] [i_3] [i_3] = ((min((arr_5 [i_5 - 1] [i_5 - 1]), (((arr_15 [i_3] [i_4] [i_4] [i_3]) / var_2)))));
                        arr_23 [i_3] [i_4 - 1] [i_3] = (min(-108, ((65512 ? -45 : 7102484529395945985))));
                        arr_24 [i_3] [i_6] [i_5 - 1] [i_3] = -4018772460316319102;
                    }
                }
            }
            arr_25 [i_3] [i_3] = (max(9765188013042479155, 217));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_32 [i_3] = -2251799813685247;
                        var_18 = (min((var_4 / 120), (max((!var_6), 12120499872810636152))));
                        arr_33 [i_8 + 3] [i_3] [i_3] [15] [i_3] [i_3] = (max(-1983294087, (((((var_8 ? var_9 : (arr_10 [4])))) ? ((max((arr_16 [15] [i_7 + 1]), (arr_6 [4])))) : (!var_9)))));
                        var_19 -= var_2;
                        arr_34 [i_3] [4] [19] [i_8 - 1] = (min(var_9, ((127 << (-1843156167 + 1843156180)))));
                    }
                }
            }

            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_20 -= (max((arr_16 [i_4 + 1] [i_4]), (arr_0 [i_3])));
                arr_37 [i_3] = ((-(((~(arr_29 [i_3] [i_4 - 1] [i_3] [8]))))));
            }
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {

            /* vectorizable */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                var_21 = (var_3 % (~127));
                var_22 = var_1;
                var_23 = ((4294967295 < ((0 / (arr_31 [i_3] [i_3] [i_10] [i_11])))));
                arr_45 [i_3] = ((var_3 ? (((-313793207 ? 1 : -1))) : ((var_7 ? var_9 : (arr_7 [i_11])))));
                arr_46 [i_3] [i_3] [i_11] = var_2;
            }

            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                var_24 = (min(((max((max(var_9, (arr_18 [i_12] [i_3] [i_3] [i_10] [i_3]))), ((((arr_42 [i_3] [i_3]) > (arr_36 [i_3]))))))), (max(244, (arr_29 [i_3] [i_10] [1] [i_3])))));
                arr_51 [i_3] [i_10] = ((~((((((arr_7 [i_12]) > (arr_15 [i_3] [i_12] [i_10] [i_3])))) + 244))));
                arr_52 [i_3] [i_3] = var_8;
                arr_53 [i_3] [i_3] = 11;
            }
            var_25 -= var_0;
            var_26 = ((var_2 ? (max((((var_7 / (arr_14 [i_3] [i_10])))), var_5)) : (((arr_30 [i_3] [i_3] [i_3]) ? (arr_30 [i_3] [i_10] [8]) : (arr_30 [i_3] [i_10] [i_10])))));
        }
        arr_54 [i_3] = var_6;
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        var_27 = (min(var_27, ((max((min((((!(arr_3 [1] [i_13] [1])))), (((arr_39 [i_13] [2] [i_13]) + (arr_0 [8]))))), ((((2537544746279395026 ? 65512 : 55)))))))));
        var_28 = 18446744073709551603;
    }
    var_29 = ((var_6 ? 4294967278 : (max((max(4294967295, 1)), (((42584 ? -458077926 : 0)))))));
    #pragma endscop
}
