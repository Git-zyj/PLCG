/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((min((!var_9), (1 || 21186))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((1 ? (((var_13 ? (arr_3 [i_0]) : 50357))) : (((((-9223372036854775807 - 1) != var_10)) ? 4796742491338851300 : (1 / 1)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_19 = ((((((!1) ? (arr_1 [i_2] [i_1 - 1]) : -46))) ? (((((arr_10 [i_0] [0] [i_0] [3] [i_3] [10]) <= (arr_8 [i_0] [i_1] [i_2] [i_0]))) ? var_8 : (arr_11 [i_0] [i_0] [i_0] [7] [i_3]))) : (var_8 == var_14)));
                        var_20 = ((~(arr_9 [i_0] [i_0])));
                    }
                    var_21 = (max(var_21, (((((((1 >= var_4) != ((var_12 ? var_10 : var_2))))) < ((~(!var_15))))))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_22 = ((-((((max((-127 - 1), var_10))) * (arr_2 [i_1 + 1] [i_1 + 1])))));
                        var_23 = (((((arr_11 [i_0] [i_0] [i_1 + 1] [i_0] [i_4]) ? (arr_13 [i_0] [i_2] [i_0]) : var_1)) <= (((-127 - 1) - (-2147483647 - 1)))));
                        var_24 = (min(var_24, (((((((-9223372036854775807 - 1) % (arr_0 [i_1] [0])))) ? (((0 >= var_7) ? (max((arr_4 [1] [1]), (arr_3 [i_0]))) : (((-(arr_1 [i_2] [i_4])))))) : (((((((arr_9 [i_0] [2]) == var_6))) << (arr_5 [i_0] [3])))))))));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_25 = (min((((1662988886 ? 9223372036854775807 : var_13))), (-127 - 1)));
                            arr_18 [i_0] [i_1] [i_2] [i_0] [i_4] [i_5] = ((!(arr_3 [i_1 - 1])));
                            var_26 = (127 == 0);
                            var_27 = ((((((((arr_9 [0] [i_0]) * 0)) >> ((((1048575 % (arr_10 [1] [1] [i_0] [i_4] [i_5] [i_5]))) - 1048553))))) ? 1 : ((((((arr_2 [i_0] [i_0]) - (arr_12 [i_5] [i_4])))) ? 65535 : ((var_8 * (arr_2 [i_0] [9])))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_28 = ((((arr_4 [i_0] [i_0]) ? var_12 : var_15)) - ((((arr_3 [i_2]) ? var_15 : 1))));
                        var_29 |= (arr_15 [4] [i_2] [i_1] [i_0]);
                        var_30 = ((!(arr_1 [i_2] [i_6])));
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_31 = var_10;
                            arr_27 [i_0] [i_0] [i_0] [4] = ((-(arr_8 [i_0] [i_1] [4] [i_0])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
