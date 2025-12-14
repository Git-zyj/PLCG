/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 1020511704;
        var_18 = (((((!(arr_0 [i_0])))) <= ((-(arr_2 [i_0])))));
        arr_4 [i_0] = 121;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_19 = ((((arr_5 [i_1 + 2]) ? (!-2728495187798949057) : (arr_7 [i_1 - 1]))));
        arr_8 [i_1] = (!-1020511700);
        var_20 = (min(var_20, 14));
        var_21 = (!(((arr_5 [i_1 - 1]) == 1)));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = arr_0 [18];
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            var_22 *= (((arr_17 [i_4]) ? ((max(85, (arr_21 [1] [1] [1] [i_5])))) : (((-(arr_11 [i_6 - 1] [i_6 + 2]))))));
                            arr_24 [i_2] [1] [i_3] [1] [i_2] |= ((-((2031616 ? ((-4181568040048973119 ? 8644586882257234742 : 58)) : (arr_7 [i_2])))));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_29 [i_2] [i_2] [i_4] [i_2] [i_2] [i_2] = (min(27, (-2147483647 - 1)));
                            arr_30 [i_2] [i_4] [i_4] [i_2] [1] = (219 * 240);
                            arr_31 [i_4] [i_2] [i_4] = -12;
                            var_23 -= (max((((arr_20 [i_2] [i_3] [i_3] [i_7]) << (149 - 145))), ((~((128 | (arr_0 [i_3])))))));
                        }
                        var_24 = (((1 << (((arr_10 [i_4]) + 1913915426)))));
                        var_25 = (!0);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 8;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_26 = (min(var_26, -28));
                                arr_42 [i_9] [i_10] [i_2] [i_2] [i_9] = (--200);
                                arr_43 [i_9] [i_10] [4] [i_10] [i_11 + 1] [5] = ((((~((-(arr_25 [i_11] [i_9] [i_10] [i_9 + 1] [i_9] [i_9] [i_2])))))) ? (~178) : ((-(((173 || (arr_37 [i_9] [i_8] [i_9] [i_10])))))));
                            }
                        }
                    }

                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        var_27 = -299408275;
                        arr_47 [i_2] [i_2] [i_2] [i_9] = (arr_35 [i_2] [i_8] [i_9]);
                    }
                }
            }
        }
        var_28 = (max((arr_5 [i_2]), (arr_5 [i_2])));
    }
    var_29 &= 631983869;
    var_30 = ((!((((((var_15 ? -154953361 : var_1))) ? (~1) : (!var_2))))));
    var_31 = (((~(max(-726743509, (-9223372036854775807 - 1))))));
    var_32 = ((((var_2 ? var_15 : var_4)) >= (171 + 1)));
    #pragma endscop
}
