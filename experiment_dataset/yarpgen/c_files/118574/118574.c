/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_10, ((~(~var_7)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = (max((((-9223372036854775807 - 1) ? 9083988187243379550 : (arr_1 [i_0 - 1]))), (((9223372036854775798 > (arr_1 [i_0 + 1]))))));
        var_17 = (max(((((min(var_3, var_3)) ? (max(var_1, -21919)) : 1794765786))), ((var_2 ? ((var_9 ? (arr_1 [i_0 - 1]) : var_7)) : (var_3 > var_12)))));

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_18 += ((((max(var_4, (-70 | 17179869184)))) || var_3));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_19 = var_12;
                    var_20 = ((var_9 ? (((((2709646024 ? var_2 : -21914))) ? 4150811755847838685 : (248 | var_1))) : (var_12 / 1476638849)));
                }
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_21 = (max(var_21, ((((var_3 / var_14) * (arr_0 [i_4]))))));
                var_22 = ((((var_2 ? 21914 : (arr_1 [i_0]))) / var_2));
            }
            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {
                arr_16 [i_1] = max(9362755886466172063, 16808880668775357010);
                var_23 = (0 || 1631053896112605697);
            }
            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                arr_21 [i_1] [i_1] [i_1] [i_1] = (~-9223372036854775807);
                var_24 += var_14;
            }
            var_25 = -765571789940714306;
        }
        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            var_26 |= ((~(min(4294967295, (min(var_11, (arr_9 [6] [8] [8] [6])))))));
            var_27 = 3252780209;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_28 |= (~74);
            arr_26 [7] [i_8] [2] = 21913;
            arr_27 [i_0] [i_8] = (((arr_23 [6] [i_0] [i_0 + 1]) * (arr_8 [0] [i_0 - 1] [i_0] [0])));
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            arr_30 [i_0] = (((arr_15 [i_0] [i_0] [i_0]) ? (!222) : (((((var_7 ? var_7 : (arr_22 [i_0])))) ^ (arr_9 [i_0 - 1] [i_0] [i_9] [i_9])))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        var_29 = (min(var_29, (((-(((((-(arr_12 [i_0] [i_0] [i_0 - 1] [5])))) ? -83 : ((var_2 ? var_11 : var_5)))))))));
                        var_30 = (min((((4199813173 || (~2046)))), (((~var_12) ? (arr_2 [i_9] [i_10]) : (((((arr_20 [1]) > 3031476306))))))));
                    }
                }
            }
            arr_37 [6] [i_9] [1] = ((var_13 ? (5409602705312862834 || 2908979354) : (min((((-6 ? 173303709 : -1768694042))), -var_7))));
            arr_38 [i_0] = min(((var_14 / (arr_22 [i_0 - 1]))), (var_0 * 2908979349));
        }
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        var_31 = (((max(36764, 136))) ? ((~(arr_41 [i_12] [i_12]))) : ((((arr_40 [i_12]) / var_8))));
        var_32 = (-1986673172 || 11459133410192105024);
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 18;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            arr_48 [i_13] = (((arr_40 [i_13]) ? 97 : (!var_6)));
            var_33 &= var_0;
            var_34 = (((arr_43 [i_13 + 1]) ? (arr_43 [i_13 - 1]) : (arr_43 [i_13 + 1])));
        }
        var_35 = (((arr_41 [i_13 + 2] [i_13]) && -71));
    }
    var_36 = (((((70 ? 2046 : 51))) | var_7));
    #pragma endscop
}
