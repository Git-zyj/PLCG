/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (arr_5 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_21 = (arr_5 [i_2] [11]);

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_22 = ((((((101 >= 0) ? (arr_6 [i_0] [i_3] [i_3] [12]) : ((306673452 ? (arr_1 [i_4]) : 3279391069486764025))))) ? var_16 : ((-((var_14 ? 252 : var_5))))));
                                var_23 = 1;
                                arr_13 [i_0] [i_0] [i_4] = min((var_19 && -1), ((max((arr_0 [i_3] [i_0]), 2025021752))));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_24 = (((arr_16 [13] [13] [13] [1] [i_5] [i_3]) <= ((var_12 | (arr_6 [i_0] [i_0] [i_0] [i_0])))));
                                var_25 = (min(var_25, (arr_6 [i_0] [i_0 - 1] [i_3 - 1] [i_3 + 1])));
                            }
                            for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                            {
                                var_26 = ((1 ^ ((((1 >> (var_14 + 142)))))));
                                var_27 = var_8;
                                var_28 = ((!((-3279391069486764025 <= ((-1751798369 ? (arr_2 [11] [i_1]) : var_4))))));
                            }
                            for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                            {
                                arr_24 [i_1] [i_0] = var_15;
                                var_29 = (min((((arr_12 [10] [i_0] [i_2] [i_2] [i_0]) ? (!var_18) : var_1)), (0 && -3279391069486764026)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = (max(7785, ((1 ? 4294967295 : 0))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_31 = 26;

                            /* vectorizable */
                            for (int i_12 = 0; i_12 < 18;i_12 += 1)
                            {
                                arr_41 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = (((arr_36 [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1]) ? var_12 : (arr_36 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])));
                                var_32 = 0;
                                var_33 &= var_15;
                            }
                        }
                    }
                }
                var_34 = ((var_5 && var_11) ? ((((max(52843, (arr_28 [i_8])))) ? ((1270552558 / (arr_31 [1]))) : (((749 ? 29 : 1265))))) : (((((((arr_30 [i_8] [i_8] [i_9]) & (arr_33 [1] [i_9]))) >= ((min(6, 42091))))))));
            }
        }
    }
    #pragma endscop
}
