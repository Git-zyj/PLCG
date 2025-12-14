/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((~var_11), ((((var_0 ? var_3 : var_0)) | ((252 << (var_14 - 55874)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_17 = (max((~6), (19168 / -58757)));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_18 = (~var_0);
                    var_19 = (min(var_19, 42907));
                    arr_11 [i_3] [i_2] [i_1] [i_0] = ((~(arr_7 [i_3] [i_2] [i_1] [i_0])));
                }
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    var_20 = ((var_3 ? -19168 : ((min((min((arr_14 [i_0] [i_1] [i_2] [i_4]), (arr_1 [i_4]))), var_2)))));
                    var_21 = ((~(arr_12 [i_0])));
                    arr_15 [i_4] [i_2] [i_1] [i_0] [i_0] = (((arr_1 [i_4 + 1]) ? (arr_1 [i_4 - 3]) : (((arr_1 [i_4 - 1]) ? (arr_1 [i_4 + 2]) : (arr_1 [i_4 + 1])))));
                }
                var_22 = ((55850 < ((min((arr_1 [i_2]), var_6)))));
            }
            var_23 = ((((((9685 ? (arr_9 [i_0]) : var_2)) ^ (~var_4))) < (((!(65535 >= var_12))))));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            arr_18 [i_5] = ((-((((var_9 ? var_11 : var_13)) & ((48877 ? (arr_9 [i_0]) : 15637))))));
            arr_19 [i_0] [i_0] [i_0] = (!var_1);
        }
        arr_20 [i_0] = (arr_16 [i_0] [i_0]);
        var_24 = (max(var_24, var_8));
    }
    for (int i_6 = 3; i_6 < 12;i_6 += 1)
    {
        var_25 = (arr_23 [i_6 + 3]);
        arr_24 [i_6] = (((var_15 | var_8) ? var_7 : (((16667 ? 16640 : 0)))));
        var_26 = (max(var_26, ((max((((((48805 ? 31352 : 41972))) ? ((var_7 ? 32767 : var_15)) : (~0))), ((var_6 ^ ((min((arr_22 [10]), 0))))))))));
        arr_25 [i_6] = ((65535 | (var_10 ^ 59549)));
    }
    #pragma endscop
}
