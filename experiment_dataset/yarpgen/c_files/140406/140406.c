/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 += ((-(((var_9 / 21812) / (var_12 / var_5)))));

        for (int i_1 = 4; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_14 = (min(var_14, ((((arr_0 [i_0] [2]) ? (~3) : var_9)))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_8 [i_0] = (((arr_1 [i_0]) / var_3));
                var_15 = (max(var_15, ((((!3753496484) ? (arr_7 [8] [i_1] [i_1]) : (!var_12))))));

                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    arr_12 [9] [i_0] = ((-524925731 ? 14 : 17381320739930148234));
                    arr_13 [i_1] [i_0] [i_1] = ((((arr_0 [i_0] [i_1]) & var_11)));

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_16 ^= ((-(arr_9 [i_3 + 2] [i_1 - 2] [i_1 - 3] [i_0 - 1] [i_0 + 2])));
                        arr_17 [i_0] [i_1] [i_1] [i_1 - 3] [i_1] [i_1] = (((((var_12 ? var_8 : var_3))) ? 16749 : (arr_16 [i_0 + 1] [i_2] [i_4] [12])));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_21 [i_5] [i_0] [i_2] [i_0] [i_0] = 4623958446129223417;
                        arr_22 [i_0] [i_3 + 1] [i_2] [i_1] [i_0] = (arr_1 [i_0]);
                        var_17 = (max(var_17, (arr_15 [6] [6] [7] [i_3] [1])));
                    }
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_18 = (arr_19 [i_0] [i_1] [i_2]);
                    var_19 = ((-((-103779562 ? -103779560 : 27027))));
                }
            }
            arr_26 [i_0] = (min(((~(((var_3 + 2147483647) >> 0)))), (max(((15125 ? (arr_6 [i_0] [i_0] [17]) : (arr_3 [i_0]))), (arr_3 [i_0])))));

            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                arr_29 [i_0] [i_0] [i_0] = (min((arr_6 [i_0] [i_0 + 1] [i_1 - 3]), ((-(arr_27 [i_0])))));
                var_20 *= (((((var_6 - (((max((arr_10 [i_7] [i_1]), (arr_1 [i_7])))))))) ? (arr_27 [i_7]) : (!9)));
            }
        }
        for (int i_8 = 4; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_21 = -103779562;
            arr_32 [i_0] = ((32741 <= (40230 / 173)));
            arr_33 [2] [i_0] [i_0] = (((min((arr_16 [i_0] [1] [i_8] [6]), (((arr_9 [i_0] [i_0] [i_8] [i_0] [21]) & 20)))) << (((((((~(arr_15 [1] [i_8] [i_8] [i_8] [i_0 + 2])))) ? ((max(var_12, (arr_0 [19] [i_0])))) : (min(var_6, -103779566)))) - 3996510476))));
            var_22 = (min(var_22, ((((arr_31 [i_8] [i_8] [i_8]) + ((((min(var_9, (arr_18 [i_8] [i_0] [i_0] [i_8])))) ? (min(var_2, var_4)) : (((var_7 * (arr_2 [i_0] [i_8])))))))))));
            arr_34 [i_0] [i_0] [10] = (max(47179, 103779561));
        }
        for (int i_9 = 4; i_9 < 21;i_9 += 1) /* same iter space */
        {
            var_23 -= -19370;
            arr_37 [12] [i_0] [i_9 - 3] = ((~(max(1, (-9223372036854775806 <= 7958862243863322393)))));
        }
    }
    var_24 = var_8;
    #pragma endscop
}
