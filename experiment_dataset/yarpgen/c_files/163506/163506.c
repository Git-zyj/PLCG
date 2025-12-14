/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_13;
    var_20 = 109;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_21 = ((-((((max(var_0, -67))) ? 4294967290 : 19759))));
        arr_4 [i_0] = (max((max((max(-1701166806, 58)), ((var_1 ? var_0 : var_1)))), (-110 < var_14)));
        arr_5 [i_0] = 18446744073709551615;
        arr_6 [i_0] [4] = (max((arr_2 [i_0]), (min((var_1 & var_12), (~var_11)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_12 [i_2] = ((~(arr_1 [i_2])));
            arr_13 [i_2] = 45777;
            arr_14 [i_2] = (((~var_12) <= (((arr_10 [i_2] [9] [i_1]) % 15484265889586384591))));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_22 |= (684302593 <= var_1);
                            arr_24 [i_1] [i_2] = var_15;
                            arr_25 [i_2] [i_3] [i_1] [i_2] = ((~(((arr_2 [5]) << (((var_3 + 95779070) - 11))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_31 [i_1] [i_2] [i_2] [11] = 109;
                        var_23 = (((((var_13 <= (arr_21 [i_2] [i_2] [3] [i_7])))) >= (arr_30 [9] [1] [i_6] [i_6] [i_6] [i_6])));
                        arr_32 [i_1] [i_2] [i_1] [i_2] [6] [i_2] = var_1;
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_24 = var_5;
            var_25 = (max(var_25, ((max(4294967291, 2634494023)))));
        }
        var_26 = ((((max(var_8, ((var_5 ? var_14 : var_12))))) ? (max((max((arr_3 [i_1] [1]), (arr_23 [i_1] [i_1] [8]))), ((max((arr_1 [0]), (arr_18 [i_1] [i_1] [4] [0] [i_1])))))) : -var_10));
        arr_35 [i_1] [i_1] = 13320;
        var_27 = (((max(((2029 ? 4294967289 : 1)), (arr_30 [8] [i_1] [6] [i_1] [6] [i_1])))) ? ((((max(4, 52215))) ? ((0 ? 0 : var_5)) : (arr_34 [i_1] [i_1]))) : (max(((min(var_18, (arr_34 [i_1] [i_1])))), (arr_16 [1] [8]))));
        var_28 = var_8;
    }
    var_29 = ((((var_14 ? ((max(var_2, var_18))) : (var_11 * var_17))) / ((((var_1 + var_10) >> (var_9 - 48829))))));
    #pragma endscop
}
