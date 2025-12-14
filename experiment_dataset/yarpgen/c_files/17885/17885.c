/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_0 ? (min(var_11, var_5)) : 1)) & var_8));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (min(var_13, ((((arr_1 [i_0]) && ((max(-834, -260583313))))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_16 = min((arr_4 [i_2]), (((((var_5 ? 1 : 1948726531))) ? -72 : 1650115128518713998)));
                arr_8 [i_2] = (min((((-1343504607 ? 10351146462344220974 : 3))), ((((var_4 ? (arr_4 [i_0]) : var_3))))));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_17 = (max(var_17, ((((((arr_4 [i_3]) || (arr_4 [i_0]))) ? ((260583302 ? 1289896400 : 836)) : (((var_12 ? 1 : 0))))))));
                    var_18 |= ((((((max((arr_5 [i_1]), (arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1])))) == (arr_9 [i_0]))) && ((min(260583326, -78)))));
                    arr_13 [i_2] = (min((arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2]), (((((arr_11 [i_2]) ? (arr_11 [i_0]) : var_12)) - (min(var_5, var_12))))));
                    var_19 = min((((((arr_3 [i_3] [i_1] [i_1]) <= var_5)) ? ((var_7 ? var_2 : var_6)) : var_10)), ((((arr_6 [i_3] [21]) ? (arr_6 [i_3] [i_0]) : (arr_6 [i_1] [i_2])))));
                    var_20 = (((min(1, 15))));
                }
                arr_14 [i_0] [i_2] [i_0] = -42;
                var_21 &= max((((arr_9 [i_0]) ? (arr_9 [i_0]) : (arr_11 [i_0]))), (((1 ? -2063335930 : -860091731))));
            }
            var_22 = (max(var_22, (((var_11 ? var_2 : ((((1956211833 ? -58 : -260583313)) | var_5)))))));
            arr_15 [i_0] [i_1] [11] = ((((((arr_2 [i_0] [i_1]) >= -var_4))) ^ ((-((max(var_12, var_11)))))));
            var_23 = max((((((arr_0 [i_1]) / (arr_9 [i_0]))))), (((-(arr_6 [i_0] [i_1])))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    {
                        var_24 = ((((((var_3 ? (arr_3 [i_0] [i_0] [i_4]) : var_2))) ? (max((arr_20 [2] [i_4] [2] [15] [i_0] [i_0]), var_13)) : (((max(var_4, (arr_7 [i_0] [i_1] [i_1]))))))) == ((((183 / var_10) / var_2))));
                        var_25 = (min(var_25, ((((((((((arr_3 [i_4] [i_1] [i_0]) ? var_0 : (arr_7 [16] [i_1] [i_4])))) ? (((min((arr_3 [i_0] [i_0] [i_4]), var_8)))) : ((var_2 ? (arr_0 [i_0]) : (arr_10 [i_0] [i_1] [22] [i_4] [i_5])))))) ? (((((var_8 >> (var_4 + 20132)))) ? ((var_2 ? var_9 : (arr_20 [i_0] [i_0] [1] [i_0] [i_5] [i_5]))) : var_4)) : (((((((arr_11 [i_1]) ? (arr_0 [i_0]) : var_6))) ? var_1 : -var_9))))))));
                        arr_21 [i_0] [i_0] [19] [i_5] [11] [i_4] = (((max(-260583326, ((10721408156458704261 ? -45 : -80))))) * ((~(max(1038561026751096276, 134)))));
                        var_26 = (max((((arr_5 [i_0]) ? (var_12 < var_5) : var_1)), (arr_16 [i_5 + 2] [i_5 - 1] [i_5 + 1] [i_5 + 1])));
                        var_27 -= ((((((3406120901 ? 103 : var_10)) << (var_8 & var_0)))) ? ((((((arr_5 [i_0]) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [21]) : var_5))) ? (((((arr_20 [i_5] [i_1] [i_1] [i_5] [i_4] [i_5]) < var_5)))) : (arr_0 [i_5 + 2]))) : (min(var_3, var_0)));
                    }
                }
            }
        }
    }
    for (int i_6 = 4; i_6 < 21;i_6 += 1)
    {
        var_28 = (((var_1 ? (arr_9 [i_6 + 1]) : (arr_9 [i_6 + 1]))));
        arr_24 [i_6] [i_6] = (var_10 || var_13);
    }
    for (int i_7 = 4; i_7 < 9;i_7 += 1)
    {
        var_29 = (max(var_29, (((((((arr_5 [i_7]) ? (max(1038561026751096276, 833)) : (var_12 - var_1)))) ? (((((((var_6 ? var_5 : (arr_3 [i_7] [i_7] [i_7])))) >= ((1719392915 ? 6423588670535693475 : 51)))))) : (((arr_6 [i_7] [i_7]) ? (((arr_0 [13]) ? var_7 : var_3)) : (((var_12 ? var_2 : var_0))))))))));
        arr_28 [i_7] [i_7] = var_12;
        arr_29 [1] |= (((((var_11 / var_13) ? var_6 : (!var_8))) < (((((min(var_9, (arr_27 [i_7]))) < (((var_0 <= (arr_7 [i_7 + 2] [i_7 + 2] [i_7]))))))))));
    }
    var_30 -= var_8;
    #pragma endscop
}
