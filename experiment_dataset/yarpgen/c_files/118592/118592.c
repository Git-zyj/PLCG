/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (var_0 && (((-(arr_2 [i_1])))));
                var_20 ^= (~0);
                var_21 = (min(var_21, (((~((min((arr_2 [i_0]), var_9))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            arr_11 [17] = ((125 ? (var_4 ^ 1) : -1));
            var_22 = (((1 ? 1 : (arr_4 [i_3]))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    {

                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_23 = (min(var_23, 209));
                            var_24 = ((~(127 != 124)));
                        }

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_25 = (min(var_25, var_17));
                            var_26 += var_0;
                            var_27 *= (arr_5 [i_2 + 1]);
                            arr_23 [i_2] [i_5] = (-7539107369321002449 != (((((arr_20 [i_2] [i_3] [i_5] [i_3] [1] [i_7]) || var_4)))));
                            var_28 *= 118;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_29 ^= ((~((var_4 ? 1031094841483710887 : 204))));
                            var_30 = 1;
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_5] = arr_26 [i_5] [i_5];
                            arr_31 [i_2] [i_5] [i_2] [i_9] [i_2] = (((arr_5 [i_2 + 1]) <= var_7));
                        }
                    }
                }
            }
        }
        arr_32 [15] [15] = (!((!(arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]))));
    }
    var_31 = var_16;
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            {
                arr_41 [i_10] = (!(((arr_26 [i_10] [i_11]) >= 38)));
                var_32 = (max((max((max((arr_27 [i_11] [i_10]), (arr_25 [i_10]))), (((~(arr_16 [i_10 - 1])))))), ((min(253, 0)))));
                var_33 *= ((!(arr_14 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])));
            }
        }
    }
    var_34 = ((var_7 ? 97 : var_5));
    #pragma endscop
}
