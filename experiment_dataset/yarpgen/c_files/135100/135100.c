/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((0 ? 0 : var_2)) - ((max(var_3, 65535)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((!(arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_14 = (max(var_14, ((((0 & 630) & (((arr_3 [i_0]) ? 0 : (arr_3 [17]))))))));
                        arr_10 [i_3] [20] = (arr_0 [i_2]);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_15 = (-124 + 65535);
                            arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = (((~65535) / (arr_7 [i_0] [i_1] [i_2] [i_4])));
                            arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] [i_1] = var_9;
                            var_16 = var_7;
                        }
                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_2] [i_3] = ((!(0 && var_11)));
                            arr_18 [i_3] [i_1] [i_1] [i_3] [i_5 - 3] = (((((-((0 ? 57931 : 1405526214))))) ? 9665674348982059424 : ((((arr_5 [i_3]) ? 0 : (arr_5 [i_0]))))));
                            var_17 = 232;
                            var_18 = ((((~(arr_2 [i_3] [i_3]))) & (((((~18446744073709551615) < (((max((arr_0 [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_22 [i_6] [i_3] [i_1] [i_3] [i_0] = (arr_5 [i_2]);
                            var_19 = max(var_11, var_2);
                            arr_23 [i_0] [8] [i_1] [i_2] [i_3] [8] = 1614342194;
                            var_20 = (arr_21 [i_3]);
                            arr_24 [i_0] [i_1] [i_0] [8] |= 2147483647;
                        }
                        var_21 = (max(var_21, ((((((~(~65535)))) - (max(0, 1949956884)))))));
                    }
                }
            }
            arr_25 [5] = (arr_11 [i_0] [i_1]);
        }
    }
    var_22 = ((~(max(4294967295, 30513))));
    #pragma endscop
}
