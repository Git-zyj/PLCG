/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [9] [i_1] [i_2] [i_3] = (((((60 >> (-64 + 84)))) == -388260259));
                        var_18 = ((((min((arr_5 [i_0 + 1] [i_1 + 2] [i_2] [i_3]), -61))) ? (450859924 ^ var_13) : ((32 ? -5 : 1609428539))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [1] [i_2] [4] = (60 % 53);
                        var_19 = 576460752303423488;
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        arr_17 [6] [i_1] [i_2] = (((-(arr_13 [i_0 + 1]))));
                        var_20 = (min(var_20, var_2));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_21 += ((((3765783934100449707 ? 214 : 3630590174)) >> ((((max(16137, (arr_16 [i_1 + 1] [i_1 - 1] [i_0 + 2])))) - 16135))));
                        var_22 = (max(((var_1 ? (arr_16 [i_0 + 1] [4] [i_0 + 2]) : var_1)), var_7));
                        var_23 = (min(var_23, (((!((max(112, var_0))))))));
                        arr_20 [7] [5] [i_2] [i_6] [0] = (64 > 8440002324814463229);
                        arr_21 [i_0] [i_1 + 2] [7] [i_2] [8] |= ((37 ? -66584576 : 2705399651206494159));
                    }
                    var_24 = var_6;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_28 [0] = ((!(((var_6 ? var_12 : var_0)))));
                                var_25 = (min((arr_11 [i_0] [i_1 - 1] [7] [i_7] [i_8]), ((-1 ? (min(1, (arr_25 [i_0 + 2] [i_1 + 2] [i_1] [i_2] [5] [10] [8]))) : var_1))));
                            }
                        }
                    }
                    var_26 ^= (max((!49399), (((16124 > 16146) ? (-31 && -104) : 59447))));
                }
            }
        }
    }
    var_27 = (!var_3);
    var_28 = var_8;
    #pragma endscop
}
