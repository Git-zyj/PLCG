/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(14504474125278827230, 14504474125278827230));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_2] [2] [i_0] = var_15;
                    var_21 = (min((min(1645223527, 1)), (((arr_0 [i_0]) >> (59908 - 59879)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [3] [i_4] = ((59908 ? var_15 : -8));
                            var_22 -= var_15;
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_5] = (((var_17 <= 65535) ? -var_9 : (arr_7 [i_0 + 1])));
                            arr_23 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] |= arr_7 [i_0];
                            var_23 = ((-(var_14 & 14504474125278827230)));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, (36345 | -12914)));
                            var_25 = (((arr_7 [i_0 - 1]) || (arr_8 [i_0 + 2] [i_0 + 2] [i_0 - 1])));
                        }
                        var_26 = ((var_9 << (60523 - 60515)));
                        arr_26 [i_1] [i_2] = 65535;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_2] [i_7] = ((!(((var_15 ? var_13 : (arr_8 [i_0] [1] [4]))))));
                        var_27 = (((((3942269948430724373 ? 3942269948430724376 : 92))) ? 5318285092913715025 : 29949));
                        arr_32 [i_0 + 2] [i_0] [16] [i_0] = 75;

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_28 = (min(var_28, ((-85 - ((var_0 ? 5318285092913715025 : 14504474125278827230))))));
                            var_29 -= ((!(arr_1 [i_0 + 1] [i_0 - 1])));
                            var_30 = (min(var_30, 1));
                        }

                        for (int i_9 = 2; i_9 < 14;i_9 += 1)
                        {
                            var_31 = (min(var_31, (((9533990346973339780 ? ((253 ? 28797 : var_12)) : 0)))));
                            var_32 = ((0 ? (arr_29 [i_0] [i_9]) : (arr_36 [i_0] [i_0 + 2] [i_9 - 2])));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_33 *= 1;
                            var_34 *= (((65535 == 0) || 3942269948430724373));
                            var_35 = var_18;
                            arr_42 [i_0] [i_2] [i_0] |= (((arr_17 [12] [12] [i_2] [i_7] [i_10]) % -1259010847));
                            var_36 = ((4064 ? -2 : 1));
                        }
                        for (int i_11 = 2; i_11 < 14;i_11 += 1)
                        {
                            arr_45 [i_11] [i_2] [i_1] = 9533990346973339786;
                            var_37 -= var_12;
                            var_38 = ((-((-15074 ? 9864 : var_11))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
