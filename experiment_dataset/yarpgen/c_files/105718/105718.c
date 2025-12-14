/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 += var_1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
                            {
                                var_20 = (((arr_8 [i_0] [i_0] [i_3 + 2] [i_0]) * (arr_8 [i_0] [i_0] [i_3 + 2] [1])));
                                var_21 = (((((0 ? (arr_1 [14]) : var_1))) * ((598056636311458632 ? 1883969897 : (arr_7 [i_0] [3] [i_1])))));
                                var_22 = ((-(arr_11 [i_3] [i_1] [i_3] [i_3 - 1] [i_4 + 2])));
                                arr_12 [i_1] = (((arr_11 [i_4] [i_1] [i_4 - 3] [i_1] [i_3 + 2]) ? var_8 : (arr_11 [i_4 - 2] [i_1] [i_4 + 3] [i_1] [i_3 + 1])));
                            }
                            for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                var_23 ^= ((-25954 ? 17848687437398092983 : 4294967295));
                                arr_15 [i_1] [i_3] [i_2] [i_1] [i_1] = (((arr_13 [i_3] [i_3] [i_1] [i_5 - 3] [i_3]) ? 4294967295 : 15440584917457612071));
                                var_24 -= var_4;
                            }
                            arr_16 [i_1] [i_3] [i_3] = (min(((11853026224159714326 ? -1295206250 : (arr_2 [i_0] [i_1]))), ((31 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_3 - 1] [i_1])))));
                            arr_17 [i_1] [19] [i_1] [10] [20] = var_2;
                            var_25 = (min((((((((arr_6 [i_0] [i_1]) ? 1 : -20866))) ? var_11 : ((min(var_8, var_8)))))), 598056636311458632));
                        }
                    }
                }
                arr_18 [i_0] [4] [i_1] = (((!576460752303423487) ? (~17620) : -6230034603227016548));
            }
        }
    }
    var_26 = ((603843978 * ((var_10 ? var_5 : 4611686018427387903))));
    var_27 = (((var_11 > var_2) ? (~1295206250) : (((var_17 > var_5) * (!-1)))));
    #pragma endscop
}
