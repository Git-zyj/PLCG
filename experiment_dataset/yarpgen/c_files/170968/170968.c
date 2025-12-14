/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((~(~8192))))));
    var_11 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((arr_6 [i_2 - 2]) ? ((var_7 ? (arr_4 [i_2 - 1] [i_0 + 2]) : (arr_6 [i_2 - 2]))) : (arr_1 [i_2 - 1]))))));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_13 = ((((((~var_8) % var_6))) % ((~((-92 ? var_0 : var_5))))));
                        var_14 = (((((min(-1, 39)))) % (~var_4)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_15 = var_9;
                            arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] [i_5] [i_4] = ((~(~12215)));
                            var_16 = (max(var_16, 18446744073709551612));
                            arr_18 [i_4] [i_1] [2] [i_4] [i_5] [i_5 + 2] = var_2;
                            var_17 = 24939;
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_18 = (var_8 * 0);
                            var_19 = (min(var_19, 1));
                            var_20 = (((var_0 ? var_7 : -1598)));
                            var_21 = var_6;
                            var_22 = (min(var_22, 4080));
                        }
                        arr_22 [i_0] [i_1] [i_1] [i_4] = (~var_8);
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_23 = var_7;
                        var_24 = (((18010607354959776824 ? (max(-9178333113736224687, 103)) : -1205839746)));
                    }
                    var_25 = (min((((arr_12 [i_0 + 1] [i_0 + 2] [i_2 + 2] [i_0 + 1] [i_2 + 2]) ? 23527 : 0)), ((((arr_12 [i_0 + 3] [i_0 + 2] [i_2 - 2] [i_2 - 2] [8]) << (((arr_12 [i_0 + 2] [i_0 - 1] [i_2 + 2] [5] [i_2 - 2]) - 124)))))));
                }
            }
        }
    }
    var_26 = -3639043918146565575;
    #pragma endscop
}
