/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (max(var_19, 625585860));
                arr_5 [i_0 + 1] [i_1 - 1] = (arr_2 [i_1 - 1]);
                var_20 = ((!(arr_3 [i_0])));
            }
        }
    }
    var_21 = ((-(~var_6)));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_22 = (min(var_22, ((min((arr_14 [i_3]), (arr_13 [i_2] [i_2] [i_2] [i_2]))))));
                        arr_18 [i_2] [i_2] [i_2] [2] = 0;
                        var_23 = (max(var_23, ((((9243085183044489546 < 32651) >> (((((((var_1 ^ (arr_2 [13])))) ? -var_11 : ((~(arr_4 [i_2] [1] [17]))))) + 64419)))))));

                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_21 [9] [i_3] [i_3] [i_2] = (arr_3 [i_2]);
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_5 + 1] [i_2] = (arr_12 [i_2]);
                            var_24 = (min(var_24, (((((((((514004813 ? var_3 : 3780962480)))) + 2147483647)) >> ((((((var_2 | (arr_1 [1]))) >> (var_0 + 122))) - 1048562)))))));
                            var_25 = 2058940448326795536;
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_26 = var_10;
                            var_27 = (min(var_27, ((((2147483647 % 2147483647) <= ((3780962482 ? (arr_26 [i_2] [7] [i_4] [i_5 + 1] [i_7] [i_2] [i_5 + 1]) : 1109)))))));
                            var_28 = ((26823 > 26823) == ((18446744073709551615 ? (-9223372036854775807 - 1) : 97)));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            var_29 = ((((((68 ? -12 : var_11))) > 9223372036854775807)));
                            var_30 = var_14;
                        }
                        arr_29 [7] [i_2] = var_16;
                    }
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        var_31 = (((((!(arr_27 [i_2] [i_2] [i_3] [i_2] [i_9 + 1])))) >= ((max(-12, 70)))));
                        arr_32 [8] [i_9] [i_3] |= var_14;
                    }

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_36 [i_2] [i_2] [i_2] = ((~(((arr_24 [10] [i_3] [i_4] [i_3] [i_10] [i_3] [10]) ? var_1 : -var_14))));
                        var_32 = (min(var_32, 7));
                        var_33 += ((-var_14 + ((max(514004813, 0)))));
                        var_34 = ((-(109 < 2058940448326795536)));
                    }
                }
            }
        }
    }
    var_35 = ((-((min((43 <= var_15), var_17)))));
    #pragma endscop
}
