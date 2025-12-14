/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_9;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = ((-((~(arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_0] = ((!(((~(!-122))))));
            arr_7 [i_1] &= (!(~-122));
            var_16 = ((!(!18446744073709551615)));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_17 |= ((-(((!(~2147483642))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_18 = (!-var_2);
                        arr_17 [i_0] = ((-(!-2147483642)));
                        var_19 = (max(var_19, (((-(((!(!1)))))))));
                    }
                }
            }
            var_20 = ((~((~((~(arr_4 [i_0] [i_0])))))));
            var_21 = ((!(((-((-(arr_9 [i_2] [7]))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_21 [9] [i_0] = (~-9223372036854775807);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    {
                        var_22 = 65535;
                        var_23 = (~7);
                        var_24 = (max(var_24, (((!(((-(arr_23 [i_5] [i_5])))))))));
                        arr_27 [i_0] [i_0] = -1;
                    }
                }
            }
        }
    }
    var_25 = -var_3;
    #pragma endscop
}
