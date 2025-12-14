/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 += 19;
                            arr_10 [i_2] = (var_0 ? 3884 : var_11);
                            var_14 = 9223372036854775807;
                            var_15 = (min(var_15, 1));
                            var_16 = ((((((arr_7 [i_2] [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 1] [i_0]) == (arr_7 [i_0] [i_0 - 2] [i_0] [i_0 - 3] [i_0 - 1] [i_0 - 2])))) >> (((9223372036854775807 <= (arr_7 [i_0 + 1] [i_0 - 3] [i_0] [i_0] [i_0 - 2] [i_0 - 2]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_17 |= (min((min(3843621291791914148, (arr_2 [i_0 - 3]))), var_3));
                            var_18 = (min(var_18, (((arr_1 [i_0]) % var_7))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 12;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_19 = (9223372036854775807 - 1073741823);
                            var_20 += var_3;
                            var_21 = (max(var_21, var_8));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_22 &= min((-1073741823 | -3843621291791914148), -3843621291791914148);
                            arr_30 [i_11] [i_11] [i_10] [i_11] = var_10;
                            var_23 = (max((((((max(23575, 23575))) * -0))), (arr_25 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1])));
                            var_24 = 13942215815770240136;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {
                        {
                            arr_36 [i_6 - 1] [i_6 - 1] [i_7] [i_13] [i_13] = arr_22 [i_6] [i_6] [i_12];
                            arr_37 [i_12] [i_12] [i_13] = (arr_20 [i_13 + 1] [i_6 - 1]);
                            var_25 = (((((0 + 65535) - 9881357242466721566)) + 42723));
                            arr_38 [i_6 - 1] [i_7 + 1] [i_12] [i_13] = (((min((arr_14 [i_13 + 1] [i_13] [i_13] [i_13 + 1] [i_6]), (min((arr_22 [i_6] [i_7] [i_12]), var_1)))) * ((((!(arr_19 [i_6 - 1] [i_13 + 1])))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 11;i_15 += 1)
                    {
                        {
                            arr_45 [i_15] [i_15] [i_15] [i_15] = ((var_8 ? var_1 : var_10));
                            var_26 |= ((((61127 % (min(65535, -929838611880715606)))) == (min(-929838611880715606, 58963))));
                            var_27 = (min(var_27, ((max(9223372036854775807, 3202433755)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_16 = 1; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 9;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 13;i_18 += 1)
                        {
                            {
                                arr_53 [i_18] [i_6 - 1] [i_6 - 1] |= 4408;
                                var_28 = ((-((((arr_13 [i_7 - 3] [i_6 - 1] [i_6]) > 9223372036854775807)))));
                                var_29 = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
