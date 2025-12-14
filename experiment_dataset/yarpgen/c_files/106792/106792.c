/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(((var_9 ? var_4 : var_11), var_9))));
    var_15 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = var_3;
        var_17 = var_12;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_18 = -var_2;
            var_19 = (((((((arr_1 [i_2] [i_2]) ? (arr_2 [i_1]) : (arr_1 [i_2] [i_2]))) + 2147483647)) << ((((8388606 & (arr_2 [i_1]))) - 5847300))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_20 = (max(var_20, (((((((77 ^ var_13) ^ 77))) == (((~77) ? (arr_11 [i_1]) : ((max(var_4, 2417109817))))))))));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_21 |= ((((!(var_6 && 2417109817)))));
                    var_22 = ((!(arr_4 [i_5])));
                }
                var_23 = var_4;
                var_24 = ((-(max((arr_13 [i_1] [i_3] [i_4]), 19667))));
            }
            var_25 = ((+(((~-4940813347476449233) ? ((-(arr_11 [i_3]))) : var_0))));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_20 [i_6] [i_6] [9] = ((var_3 >= ((var_1 / ((var_6 ? -6198 : 1877857478))))));
            var_26 = (i_6 % 2 == 0) ? ((min((((!1877857478) ? (!19667) : var_8)), (((max(-13, (arr_10 [i_1]))) << (((arr_2 [i_6]) + 1940309764))))))) : ((min((((!1877857478) ? (!19667) : var_8)), (((max(-13, (arr_10 [i_1]))) << (((((arr_2 [i_6]) - 1940309764)) + 528868582)))))));
            var_27 = ((arr_4 [i_6]) ? (arr_1 [i_6] [i_6]) : (arr_15 [i_1] [7] [i_1] [i_1] [i_6]));
            var_28 = (~var_7);
            var_29 = (max((max(var_8, var_9)), (arr_13 [i_1] [i_6] [i_6])));
        }
        var_30 = ((-((var_4 ? var_10 : (arr_4 [i_1])))));
        var_31 = (max((((((126 * (arr_4 [i_1])))) ? (var_8 * var_6) : (var_13 / var_1))), 505141963));
        var_32 ^= ((!(((+((min((arr_16 [8] [8] [3]), 126))))))));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_33 = 62917;
        var_34 = (max(var_34, ((max(((-(((arr_2 [0]) + var_1)))), -508)))));
        var_35 = arr_0 [12] [i_7];
        var_36 = max(-var_2, ((((arr_21 [i_7]) && (arr_21 [i_7])))));
        var_37 += (max((((arr_2 [14]) || (arr_2 [12]))), ((!(arr_2 [6])))));
    }
    var_38 = (max(var_8, (max(2417109817, (((37633 >> (var_7 + 9789))))))));
    #pragma endscop
}
