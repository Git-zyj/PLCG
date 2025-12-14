/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_12);
    var_16 = max(var_7, (~var_0));
    var_17 = (var_9 | (1 | 1946965905));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (arr_4 [i_0] [i_0] [i_2]);
                    arr_8 [i_0] [i_0] [i_0] = (((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? 3937872996 : (arr_6 [i_1] [i_0] [i_0 + 1] [i_0])));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_18 = (min(var_18, (((-((((arr_3 [i_2]) > -2286198855))))))));
                        var_19 = (min(var_19, (arr_9 [1] [i_3] [i_1] [i_3] [i_0])));
                        var_20 = (((0 - 0) ? 3062192721 : -0));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = (((2369162409 == 1) ? 1 : var_0));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_21 = max(0, 541190222);
                        arr_15 [i_0] [i_1] [1] [i_2] [i_2] [i_0] = arr_14 [i_0] [i_0] [1] [i_2] [i_2] [i_0];
                        arr_16 [i_0 + 1] [i_1] [i_1] [i_0] = (((((arr_1 [i_4]) > (arr_10 [i_0])))) ? ((-(min((arr_1 [i_0 + 1]), 1)))) : (2958634530 || 1));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_22 = 3753777073;
                        arr_19 [i_0] [i_1] [i_1] [i_2] [i_2] = (((max(1, 0)) / ((1 / ((3577941539 ? 1 : 1232774574))))));
                        var_23 = ((~(((!1) * (!3)))));
                    }
                }
            }
        }
    }
    var_24 = var_5;
    #pragma endscop
}
