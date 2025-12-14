/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((var_7 ? (var_10 | var_0) : (var_5 == var_5))), ((((((var_5 + 2147483647) >> (var_13 - 1394116945606632777)))) | ((var_16 ? var_8 : var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = ((~((((min(-725442810875158249, (arr_6 [i_1] [i_3 + 1] [i_4 + 1]))) == (arr_0 [i_0]))))));
                                var_20 = ((((((108899864 ? 370026807 : 783083451))) ? var_15 : (((var_5 ? var_11 : var_13))))) == var_1);
                                var_21 = 1;
                                var_22 = (!var_16);
                            }
                        }
                    }
                    arr_16 [i_2] [i_1] [i_2] = var_15;
                    arr_17 [i_0] [i_2] [i_2] = var_12;
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    var_23 = (min(((((min(18446744073709551615, 1)) > (((3924940499 ? 2147483647 : 3128720204)))))), ((var_14 ? var_8 : var_12))));
                    var_24 = ((((((arr_5 [i_1] [i_5]) << (((arr_13 [i_5] [i_5] [i_5] [i_0]) * var_2))))) ? ((((((arr_8 [i_0] [i_1] [i_5]) ? var_15 : (-9223372036854775807 - 1)))) ? var_5 : var_13)) : ((((!((var_3 == (arr_3 [i_0] [i_0])))))))));
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_25 = (max(var_25, (((var_16 ? ((max((arr_0 [i_7]), (var_17 >= var_16)))) : (((((var_17 ? var_3 : var_7))) ? (((((-9223372036854775807 - 1) || var_8)))) : ((var_2 ? (arr_5 [i_0] [i_7]) : var_10)))))))));
                        var_26 = 7144604560009391461;
                        arr_25 [i_0] [i_1] [i_6] [i_7] [i_1] [i_0] = (min((max((((3924940499 ? 1 : 110))), (((arr_3 [i_0] [i_1]) ? (arr_21 [i_0] [i_1]) : var_13)))), (((!((!(arr_1 [i_7]))))))));
                    }
                    arr_26 [i_0] [i_0] [i_6] |= ((!(((var_9 ? 3924940476 : -101)))));

                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        var_27 = var_14;
                        var_28 = (((((var_7 ? -9223372036854775793 : -65))) ? (((((arr_4 [i_1]) >= (arr_18 [i_0]))))) : (arr_13 [i_0] [i_0] [i_6] [i_0])));
                        var_29 = ((min(var_4, var_14)));
                        var_30 = (((max((((var_16 >= (arr_12 [i_0] [i_6] [i_1] [i_0] [i_8 + 1])))), var_10)) << ((((((-(arr_19 [i_8 - 1] [i_6] [i_0] [i_0]))))) - 58068))));
                    }
                    var_31 -= ((((arr_0 [i_0]) ? -var_11 : var_7)) ^ ((~((min(1, var_6))))));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_32 = (((((((max(1, 84))) ? (min(var_10, var_5)) : var_17))) ? ((((!(((230 << (-12838 + 12851)))))))) : var_3));
                    var_33 = ((max((arr_29 [i_9] [i_0] [i_0] [i_0]), (arr_9 [i_9] [i_1] [i_0] [i_9]))));
                }
                var_34 = (min(var_34, (((((max(-5171804217655805376, -8891618732750923185))) ? ((var_4 << (((arr_12 [i_0] [1] [i_0] [i_0] [i_0]) - 79333055654088713)))) : ((((arr_18 [i_0]) ? (((var_15 ? var_0 : var_8))) : (min(var_7, var_5))))))))));
            }
        }
    }
    var_35 = ((var_16 ? ((-var_17 ? ((var_9 ? var_9 : var_12)) : var_12)) : (((!6527102873239044297) >> (((~var_14) - 1952992692))))));
    var_36 = 2761268428;
    var_37 = ((~(((((max(var_14, var_9))) || (var_2 + var_12))))));
    #pragma endscop
}
