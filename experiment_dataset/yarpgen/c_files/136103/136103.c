/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_13 = (((((~(238 | 238)))) != (min((var_12 * var_4), (arr_0 [16] [16])))));
        var_14 = (min(var_14, (arr_1 [1])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 = (min(var_15, ((max((max(3632130392263900533, (arr_3 [i_1]))), var_4)))));
        var_16 = var_8;
        arr_6 [i_1] = (arr_3 [i_1]);
    }
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    var_18 = 9441622062480412552;
                    var_19 = (max(var_19, 9669811487788477107));
                    var_20 = (min(var_20, var_11));

                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_21 = (min(var_21, ((((!((min(80, 230)))))))));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_22 &= ((max(((~(arr_14 [0] [i_2] [i_4 + 2] [i_2] [i_2] [0])), ((var_10 ? var_4 : 241))))));
                            var_23 ^= var_3;
                            arr_18 [i_4] = (((((!(arr_13 [i_2] [i_2]))) || (2147483640 && var_11))));
                            var_24 = (~var_12);
                            var_25 = var_12;
                        }
                    }
                    arr_19 [i_2] [i_4] [20] = arr_3 [i_4];
                }
            }
        }
    }
    #pragma endscop
}
