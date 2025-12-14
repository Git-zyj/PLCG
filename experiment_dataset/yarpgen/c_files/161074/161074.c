/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max((((min(var_15, var_2)))), (max(0, 51252)));
    var_19 = ((((((!((max(4294967290, 2147483647))))))) + var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((!((max((arr_2 [i_2 - 1]), (arr_2 [i_2 + 1])))))))));
                    var_21 = (arr_8 [i_2] [11] [i_2]);
                    arr_9 [i_2] [i_2] [i_0] = (((1822932727 <= 51233) ? (max(((var_2 ? var_11 : (arr_7 [i_2] [i_2] [i_1] [i_2]))), var_17)) : var_0));
                    var_22 = (arr_1 [i_1 - 1] [i_2 - 2]);

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_23 = (min(var_23, ((min(var_8, var_10)))));
                        var_24 = (((((arr_7 [i_2] [i_2] [i_2] [i_1 - 1]) > (arr_7 [i_2] [i_1] [i_2] [i_3]))) ? (((min((arr_10 [i_1 - 1] [i_1] [i_2] [i_0] [i_2] [i_2 - 1]), (arr_10 [i_1 - 2] [i_2] [i_2] [i_3] [i_1 - 2] [i_2 + 1]))))) : (((-32767 - 1) - 18446744073709551615))));
                        arr_12 [i_0] [i_0] [i_2] [i_2] |= (arr_8 [i_3] [i_1 - 2] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_25 = (((((max((arr_10 [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 2]), (arr_10 [i_1] [i_2] [i_2] [6] [i_2] [i_2 - 1]))))) & (arr_7 [i_2] [i_1] [11] [i_4])));

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_26 = (min((max((((arr_15 [i_0] [i_1 + 1] [i_2] [i_0] [i_0] [i_1 + 1] [i_4]) ? (arr_1 [i_0] [i_0]) : (arr_8 [i_2] [i_2] [i_2]))), (arr_6 [i_0] [i_2] [i_2]))), ((((min((arr_10 [i_0] [i_1 + 1] [i_2] [i_2] [i_4] [i_4]), (arr_5 [i_0]))) != (((arr_5 [i_5]) ? var_17 : (arr_14 [i_2]))))))));
                            var_27 -= ((min(18446744073709551600, 3464296738400007902)));
                            arr_17 [i_2] [i_1 - 2] = (((min((arr_11 [i_0] [i_2 + 1] [i_2] [i_0]), ((((arr_13 [i_5] [i_2] [i_2] [i_1]) ? (arr_7 [i_2] [i_1] [i_2] [i_4]) : (arr_7 [i_2] [i_1] [i_2 - 1] [i_4])))))) & (arr_7 [i_2] [i_1] [i_1] [i_4])));
                            arr_18 [i_2] [i_2] [i_1] [i_2] = (((max(((14 >> (262144 - 262128))), var_8)) / (max(var_13, (arr_8 [i_2] [i_2] [i_2])))));
                        }
                        arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = (((!(arr_11 [14] [i_1 - 2] [9] [i_2 - 2]))));
                        arr_20 [i_0] [i_1 + 1] [i_2] = (+((((arr_15 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_4] [3] [i_1] [i_2 + 1]) && (arr_10 [i_1 - 1] [i_1 - 2] [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                    }
                }
            }
        }
    }
    var_28 = ((var_13 && ((max(((var_16 ? var_17 : var_8)), (2472034568 <= 1822932703))))));
    #pragma endscop
}
