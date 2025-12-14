/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (min(var_4, ((281474968322048 ? (34902897112121344 + var_13) : var_10))));
        var_16 = ((((max(4294967295, (max(508, (arr_0 [i_0])))))) + ((((max(2097151, var_1)) > var_14)))));
        arr_5 [i_0] [i_0] = (max((((-1 ? -1152921504606846976 : (!13)))), (max((((0 ? (arr_3 [i_0] [i_0]) : var_9))), (max(-1, var_7))))));
        var_17 = (max(var_13, ((((4294967295 ? var_6 : var_1)) + ((var_15 ? var_6 : -25))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = ((((((arr_7 [i_1] [i_1]) & var_6))) ? ((var_14 ? var_1 : var_14)) : -1));
        arr_11 [i_1] [i_1] = ((-((3025148104 ? 1 : 366072235))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_14 [i_2] [i_2] = ((!(!var_3)));
        var_18 = (max(var_18, ((((var_11 + 4292870129) || (8589934591 >= -48))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 14;i_5 += 1)
            {
                {
                    var_19 = (min((!var_2), ((-32742 ? var_11 : (arr_2 [i_4])))));
                    arr_21 [i_4] = 2097136;
                    arr_22 [i_3] [i_4] [i_5] [i_5] |= (--var_6);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_29 [i_3] [i_4] [i_5 - 2] [i_5] [i_6] [i_4] = ((!(((2097128 + (min(32767, 2578741263)))))));
                                var_20 = ((-((max((arr_25 [i_3] [i_3] [i_3 - 1] [i_3] [i_3]), (arr_25 [i_3] [i_3] [i_3 + 1] [i_5] [i_6]))))));
                                var_21 = (min((~var_13), var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
