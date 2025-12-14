/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -31732;

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_1] = (min(((~((max(65535, -127))))), (~var_5)));
            arr_6 [i_1] = min(117, (max((min(52246, 65535)), 9)));
        }

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_16 = 0;
            arr_11 [i_0] [i_2] = (min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 2])));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_17 = max((arr_3 [i_2] [i_2] [i_3]), ((max(var_6, (arr_4 [i_0 - 1] [i_0 + 1])))));
                var_18 ^= var_3;
                arr_14 [i_2] = min((-127 - 1), -87);
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_19 = var_12;
                            arr_23 [i_6] [i_6] [i_2] [i_4] [i_2] [i_2] [18] = ((((max((!18657), 107))) ? (((!((max(127, (arr_17 [i_0] [i_2] [i_4] [i_2]))))))) : ((max((max((arr_3 [i_2] [i_2] [i_2]), (arr_0 [i_0]))), (max((arr_9 [i_4]), var_0)))))));
                        }
                        var_20 = ((9 & (arr_22 [i_4] [i_2] [i_4] [i_2])));
                    }
                }
            }
        }
        var_21 = max((arr_2 [i_0]), (~52246));

        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                arr_30 [i_7] [i_7] [i_7 - 1] [i_7] = arr_21 [i_7] [14] [i_7] [i_7] [i_7 - 1];
                arr_31 [i_7] = (((~90) & ((var_3 >> (65535 - 65520)))));
                var_22 = (arr_7 [i_0 + 2] [i_7] [i_0 + 1]);
            }
            var_23 = (max(var_23, 0));
            arr_32 [i_7] = ((((min((~var_0), -8))) ? ((min((arr_3 [i_7] [i_0] [i_7 + 1]), (arr_26 [i_0 + 1])))) : ((~(arr_21 [15] [i_0 + 1] [i_0] [15] [i_7 - 2])))));
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_24 ^= (((~65535) / ((max(46322, -25)))));

            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                var_25 = var_1;
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            arr_45 [i_0] [i_0] [i_9] [i_10] [i_11] [i_12] [i_12] &= ((~((max(-7, var_1)))));
                            arr_46 [i_0] [i_9] = (((arr_25 [i_9] [i_9]) | 2));
                        }
                    }
                }
                var_26 = ((((max((arr_28 [i_0] [i_0 + 3] [i_0 + 3] [i_0]), (arr_17 [0] [0] [i_10] [i_0])))) ? (arr_18 [i_10] [i_10] [i_0] [i_0]) : ((max(3, var_5)))));
                var_27 ^= (2653 + 47090);
            }
            var_28 += ((((min(((-27 ? var_13 : var_2)), ((max((arr_18 [i_0] [i_9] [i_0] [i_0]), var_10)))))) && 10767));
        }
    }
    for (int i_13 = 1; i_13 < 19;i_13 += 1) /* same iter space */
    {
        var_29 = (arr_24 [2] [i_13]);
        var_30 = (min(((((min(0, var_6))) ? var_7 : (((arr_28 [i_13] [i_13] [i_13 + 1] [i_13 - 1]) ? 7971 : 17)))), (104 % var_9)));
    }
    var_31 = ((!(((((min(var_2, 6033))) ? var_12 : ((max(var_14, var_14))))))));
    #pragma endscop
}
