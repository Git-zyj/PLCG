/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (max(14680064, ((~(max(4280287235, var_4))))));
                    var_13 = (arr_4 [i_0 + 1]);
                }
            }
        }
    }
    var_14 = ((14680064 ? 8279 : 114));

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_15 = (max(var_15, ((((~var_9) && (-8284 ^ 14680072))))));
        var_16 = -4280287229;
        var_17 = 112;
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_18 = (((((((min(var_6, 8046884731644214362))) ? var_9 : ((var_0 ? var_7 : -126))))) ? 11504289420051747770 : (((-var_2 ? -5301 : (var_7 / var_2))))));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_19 = (14680047 == -120);

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_20 = ((32640 < (~var_7)));
                            arr_29 [i_4] [i_5] [i_6] [i_5] = (46 * 193);
                            var_21 ^= ((min((((arr_1 [i_6] [i_6]) ? var_7 : var_3)), (!var_3))));
                        }
                        var_22 += (min(((-14336 ? var_11 : (123 / var_1))), (-8270 || 4280287199)));

                        for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            arr_32 [i_4] [i_5 - 2] [i_5] [i_7] [i_9 - 1] = (((((var_4 ? var_8 : 4280287234))) ? (((arr_11 [i_4] [i_5 - 2]) ? (arr_11 [i_4] [i_5 - 1]) : var_11)) : (arr_11 [i_7] [i_9 - 1])));
                            arr_33 [i_5] [i_5] [i_6] [i_7] [i_9 - 1] [i_4] [i_9 - 1] = 1363612584;
                        }
                        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_4] [i_5 + 2] [i_5] [i_7] [i_7] [i_10 - 1] = (((min((~144), var_6)) | 6));
                            arr_37 [i_4] [i_10 - 1] [i_6] [i_5 + 1] [i_5] = 8176;
                            var_23 = (arr_35 [i_5]);
                            var_24 = arr_2 [i_4];
                        }
                    }
                }
            }
        }
        var_25 = (arr_13 [i_4]);
    }
    for (int i_11 = 1; i_11 < 11;i_11 += 1)
    {
        var_26 = 18196882229150163210;
        var_27 -= (max(((((arr_9 [i_11 - 1]) > var_9))), (min((~126), -127))));
    }
    var_28 = (1 && 14680055);
    #pragma endscop
}
