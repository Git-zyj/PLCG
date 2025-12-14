/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_20 += ((((65517 ? ((((arr_1 [i_0]) * (arr_1 [i_0])))) : var_13)) | var_14));
        var_21 = (((((-109131698 - (var_19 + 65532)))) == 18446744073709551615));
    }
    var_22 = -var_15;

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_23 += (((arr_7 [i_1]) % var_9));
            var_24 = (((((arr_8 [i_1] [i_1]) && 1127488143728720614)) ? 65534 : var_7));
            var_25 = -var_6;
            arr_9 [i_1] [i_1] = (arr_5 [i_1] [i_1] [4]);
            var_26 = (((arr_8 [i_1] [i_1]) ? (var_6 + 65514) : (!var_18)));
        }
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            var_27 -= var_13;
            arr_12 [i_3] [i_3] [i_1] = (i_3 % 2 == zero) ? (((((((((arr_8 [i_3] [i_1]) && (arr_11 [i_3] [7] [i_3])))) > 1082494658)) || (((var_5 << (((arr_11 [i_3] [i_1] [i_3 - 3]) - 415295077776649869)))))))) : (((((((((arr_8 [i_3] [i_1]) && (arr_11 [i_3] [7] [i_3])))) > 1082494658)) || (((var_5 << (((((arr_11 [i_3] [i_1] [i_3 - 3]) - 415295077776649869)) - 3767143567068172788))))))));
            var_28 = (max(var_28, (-5 + 1428236934)));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_29 = (min(var_29, (((-(arr_10 [i_1] [i_4] [i_4]))))));

            for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
            {
                var_30 = ((min((arr_13 [i_1] [5]), var_8)));
                arr_19 [i_5] [i_4] = var_15;
                arr_20 [i_1] [i_4] [i_5] = ((!(((arr_17 [i_5]) > (var_13 || var_2)))));

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_31 = (min(var_31, ((((min((arr_23 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]), (arr_23 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_7] [i_7]))) / ((var_13 ? (arr_23 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_7]) : -8505628210586976742)))))));
                        var_32 = ((~((min((arr_1 [i_4]), (var_1 || 65519))))));
                        var_33 = ((((var_10 % ((var_18 % (arr_24 [i_1]))))) + (1 % 65516)));
                        var_34 = (arr_10 [i_4] [i_6] [i_7]);
                    }
                    var_35 = (~46623);
                    var_36 = var_8;
                }
            }
            for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
            {
                var_37 = ((~((-(arr_10 [i_1] [i_1] [i_8])))));
                var_38 -= ((!(18446744073709551615 - 11)));
                var_39 = ((var_6 != (((((!(arr_6 [i_8] [i_4] [i_1]))) && (var_14 % 26554))))));
                var_40 *= var_12;
            }
            for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
            {
                var_41 = ((-109131716 != ((((20894 || 160) && 11)))));
                var_42 = (((!var_8) > (~241692628043373903)));
            }
            arr_30 [i_1] = var_12;
        }
        var_43 = arr_22 [4] [4] [4];
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_44 = 1;
        var_45 = ((((((arr_32 [i_10]) / (((arr_32 [i_10]) * 2820421246))))) || ((((~var_7) ? 86 : ((((arr_34 [i_10]) > var_11))))))));

        for (int i_11 = 1; i_11 < 13;i_11 += 1)
        {
            arr_38 [9] [i_11] [i_10] = (var_0 * var_7);
            arr_39 [i_10] [i_10] = (arr_35 [i_11 - 1] [i_10]);
        }
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 11;i_12 += 1) /* same iter space */
    {
        var_46 = (-var_16 && 203474321);
        arr_42 [i_12] [i_12] = (((arr_33 [i_12 + 1] [i_12 + 1]) >> (arr_31 [i_12])));
    }
    for (int i_13 = 1; i_13 < 11;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            arr_49 [i_13] [i_13] [i_13] = ((-((0 ? (arr_32 [i_14]) : (arr_47 [i_13 + 3] [i_13 + 3])))));
            var_47 = var_7;
        }
        arr_50 [i_13] [i_13] = (((((19728 & (arr_33 [i_13] [i_13]))) << ((((max(var_15, var_15))) - 23195)))));
        arr_51 [i_13] [i_13] = (((min(((((var_19 + 2147483647) >> (var_8 + 622340905)))), (arr_40 [0]))) * var_0));
    }
    #pragma endscop
}
