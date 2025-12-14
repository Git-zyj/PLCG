/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_13 = ((!(arr_4 [i_2] [i_3])));
                            var_14 = (((((3548675139428599217 ? ((var_6 >> (var_10 + 4034286301325070474))) : var_8))) > 18446744073709551600));
                            arr_12 [i_0] [i_1] [5] [i_0] = (((((!(!var_1)))) << var_8));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((!((((min(3548675139428599217, 65535)) * var_3)))));
                    var_15 = ((max(((min(var_8, (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))), (arr_3 [i_0]))));
                    arr_16 [i_0] [i_0] = (((((var_3 ? ((var_5 & (arr_0 [i_0]))) : (~96)))) ^ var_9));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_16 &= var_5;
                                arr_23 [i_5] [i_5] = ((-(max(((min((arr_21 [i_0] [12] [i_0] [i_5] [i_6]), var_4))), (3707221638224620183 * var_11)))));
                            }
                        }
                    }
                    arr_24 [i_0] [i_4] [i_1] [i_0] = 8387572476398192695;
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_28 [i_7] = (((!var_11) ? var_1 : (!18446744073709551615)));
                    var_17 = ((!(((3548675139428599217 ? 14553387030342005880 : 21)))));
                    var_18 |= (max((!var_10), ((-var_10 - (arr_4 [i_0] [i_0])))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_19 = (~((255 ? (arr_9 [i_7] [i_1] [i_0]) : var_11)));
                        var_20 = ((((((arr_0 [i_0]) ? var_1 : var_10))) % 3548675139428599209));
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_21 |= 6;
                        arr_35 [i_0] [i_7] [i_0] [i_0] = 748721716;
                        arr_36 [i_9] [i_7] [i_7] [i_7] [i_1] [i_0] = ((((((((~(arr_31 [i_7] [i_7] [i_0] [i_7])))) ? (arr_22 [i_7] [i_7] [i_1]) : 18446744073709551615))) ? (((var_12 | ((1 ? var_7 : var_2))))) : (((((var_11 ? var_5 : 671759477))) ? (var_9 <= var_5) : (min(var_1, 4194288))))));
                        var_22 -= ((((var_5 ? (((var_4 ? var_2 : 1237330318))) : (arr_3 [i_0])))) ? (max((((arr_29 [i_9] [i_9] [i_7] [i_9] [i_9] [i_9]) ^ var_5)), (((arr_10 [i_0] [i_1] [i_7] [i_1] [i_9]) ? var_12 : var_2)))) : (arr_26 [i_0] [i_0] [i_0] [i_1]));
                        var_23 &= (!11);
                    }
                }
                var_24 *= (((var_5 ? (var_7 ^ var_8) : ((var_6 ? var_11 : var_2)))));
                arr_37 [i_0] [i_1] [i_0] = (var_5 ^ var_2);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 0;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                arr_52 [i_10] [i_10] = 0;
                                var_25 = ((((max(-120, 3828411460))) & ((14898068934280952398 ? var_12 : 11))));
                                arr_53 [i_11] [i_10] = (!53234);
                                arr_54 [i_14] [i_11] [i_10] |= ((min((arr_42 [i_10] [i_10] [i_10 + 1]), var_4)));
                            }
                        }
                    }
                    var_26 &= (((!var_4) ? (((var_10 <= 65535) | 17527472629974345905)) : ((max(((min(231, 1))), var_4)))));

                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {

                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            var_27 = (max((arr_57 [i_10] [i_10 + 1] [i_10] [i_10] [i_10]), ((min(-158163152, var_10)))));
                            var_28 = ((arr_18 [i_10] [i_10] [i_12] [i_15] [i_11] [i_11]) ? var_7 : ((((var_11 ? var_1 : var_3)))));
                            var_29 = (!65534);
                        }
                        for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
                        {
                            var_30 = ((~((1 ^ (65535 ^ 0)))));
                            var_31 = var_4;
                            var_32 |= (((748721716 <= 0) && (((((min(0, var_0))) ^ (1 | 27))))));
                        }
                        for (int i_18 = 0; i_18 < 13;i_18 += 1) /* same iter space */
                        {
                            arr_65 [i_10 + 1] [i_11] [i_12] [4] [i_11] [i_18] [i_18] |= (((((((arr_21 [i_10 + 1] [i_11] [6] [i_18] [i_18]) ? var_9 : var_8)) >> ((((var_5 << (var_2 - 99))) - 349405137)))) >> (((!(((var_11 ? var_1 : var_3))))))));
                            var_33 = var_6;
                        }
                        arr_66 [i_10] [i_10] [i_12] [i_10 + 1] [i_12] [i_10 + 1] = var_12;
                    }
                }
            }
        }
    }
    #pragma endscop
}
