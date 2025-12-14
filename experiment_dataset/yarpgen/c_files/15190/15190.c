/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_16));
    var_18 = var_15;
    var_19 = ((((-210 | ((var_13 ? var_3 : 1)))) - (~var_7)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((2077817524 ? 123 : var_1)) | 253497258));
        var_20 = (min(var_20, ((((arr_0 [i_0 + 1]) >> (1203694952 - 1203694952))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_21 = ((!((((arr_0 [i_1]) ? 252 : 28412)))));

        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_22 = -123;
                            var_23 = (var_12 ? ((((!(arr_13 [i_2] [19] [19] [19] [i_2]))))) : (arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_4 - 2] [i_5]));
                            var_24 = (((arr_8 [i_4] [i_4 - 1] [i_4 - 2] [i_4]) ? (arr_17 [i_4] [13] [i_2] [i_4] [i_4]) : (arr_17 [i_4 - 2] [i_4] [i_2] [i_4] [i_4])));
                            var_25 = ((112 && (!0)));
                        }
                    }
                }
            }
            var_26 = var_11;
        }
        arr_18 [i_1 + 1] = ((var_12 << (50697 - 50696)));
    }
    #pragma endscop
}
