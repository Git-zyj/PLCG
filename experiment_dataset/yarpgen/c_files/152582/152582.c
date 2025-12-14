/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_17 = ((((max(((var_4 ? var_10 : var_4)), 1))) && -1));
                        var_18 = ((((max(32765, 5532164152189264065))) + (((~var_15) ? ((64 ? 205 : 33554431)) : 154))));

                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((~2290413723343236626) ^ (((max(var_13, 46836)))))) | (((~(106 & var_15))))));
                            var_19 = 62715;
                            arr_14 [i_0] [i_0] = max(((((!8589934591) - (!var_2)))), (max(var_9, var_1)));
                            arr_15 [i_2] [i_0] [i_2] = ((-var_14 ? (27691 * var_5) : (min(var_4, 18446744073709551615))));
                            var_20 = (((((var_14 % (max(1, var_10))))) - (min(var_5, (1 * 0)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_1] [10] [i_1] = 20;
                            arr_20 [i_0] [i_0] [16] = ((var_1 ? ((var_8 ? var_0 : var_7)) : var_0));
                            var_21 = (10 - 5);
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            arr_23 [i_0] [i_0] [i_2] [i_3] [i_0] = (((((var_3 ? var_10 : var_8))) ? -1 : 1));
                            var_22 = (var_10 ? var_3 : 30126);
                            arr_24 [12] [4] [4] [i_1] [i_6 + 1] [i_6 - 3] &= (var_3 + var_12);
                            arr_25 [i_1] [i_2] [i_2] [i_3] [i_0] [i_1] [i_6] = var_7;
                        }
                    }
                    arr_26 [i_0] [17] [i_0] [i_2] = (max((max(33, 1)), (((!((min(18446744073709551615, var_14))))))));
                    arr_27 [i_0] [i_1] [i_2] &= (min((var_4 % var_16), (var_8 + -24329)));
                    var_23 = (!var_13);
                }
            }
        }
    }
    var_24 = 10;
    #pragma endscop
}
