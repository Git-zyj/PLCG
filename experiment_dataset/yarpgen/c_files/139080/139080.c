/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((~(~4276795590)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (max((~-var_7), ((((max(18446744073709551615, 3605406954505177830)) <= (arr_1 [i_0]))))));
        var_16 = 3605406954505177857;
        arr_5 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] &= (5248 / var_12);
        var_17 = (min(var_17, (arr_7 [i_1 - 1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                {
                    var_18 = (min(var_10, (max(((31185 ? (arr_10 [i_1 + 1] [i_3 - 2]) : var_3)), -16))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_19 -= (((arr_13 [i_1] [i_4]) + ((1 ? 3605406954505177858 : (arr_10 [4] [i_2])))));
                                var_20 = (min(var_20, ((min(((max(-88, 1))), (((arr_12 [i_4 + 3] [i_1] [i_4 + 2]) ? (arr_15 [i_4] [i_4 + 3] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 2]) : var_11)))))));
                                var_21 = (((!var_1) ? ((((arr_13 [i_3 - 3] [i_1 - 2]) > (arr_13 [i_3 + 1] [i_1 - 1])))) : (~0)));
                                var_22 = (arr_11 [i_2]);
                            }
                        }
                    }

                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        arr_23 [i_3] [6] [3] [i_3] = (min((!var_8), 31));
                        var_23 = (0 - 48684607);
                    }
                }
            }
        }
        arr_24 [i_1] = ((-((min((arr_20 [i_1 + 3] [i_1] [i_1]), 18853)))));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        arr_27 [i_7] = (min(((((min(var_2, 0))) ? (arr_16 [i_7] [i_7] [10] [i_7] [i_7] [i_7]) : (arr_20 [i_7] [i_7] [i_7]))), ((-12641 ? 3958991329057124001 : 26993))));

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_24 = (arr_11 [i_7]);
            var_25 = ((-120 ? ((var_8 ? (arr_11 [i_7]) : 1)) : 3275434756));
        }
        var_26 = (max(17, (-127 - 1)));
        var_27 -= (max((!var_9), (~var_11)));
    }
    #pragma endscop
}
