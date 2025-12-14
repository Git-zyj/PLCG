/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = 7;
        var_14 += (((~24) ? var_12 : (((((arr_3 [i_0] [i_0]) + 9223372036854775807)) >> (((arr_3 [i_0] [i_0]) + 168197135223828390))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        var_15 *= 240892932445185089;

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_1] [i_3] [i_4 + 2] = var_12;
                            arr_18 [i_0] [i_1] [18] [i_2] [i_1] [18] = (((arr_13 [i_4 - 1] [i_4] [i_4] [i_4] [i_1]) >> (187 - 163)));
                        }
                    }
                }
            }
            arr_19 [i_0] [i_1] = (arr_8 [i_1] [i_0] [i_0]);
        }
        arr_20 [i_0] [i_0] = ((-7 ? var_5 : (((((arr_2 [i_0]) ? -5277472359926628822 : (arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_16 *= ((((((max(var_0, var_0))) ? (((arr_10 [i_0] [i_5]) ? var_4 : var_11)) : -65535)) > (((9223372036854775807 ? 22 : (max(-16941, 13)))))));
                                arr_34 [i_5] [i_5] [i_5] [i_5] [1] [i_5] = (+-3357999317397881889);
                            }
                        }
                    }
                    var_17 = (max(var_17, (((((!((((arr_24 [i_0] [i_0]) ? var_12 : 3398))))) && (((0 ? 0 : 1))))))));
                }
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
