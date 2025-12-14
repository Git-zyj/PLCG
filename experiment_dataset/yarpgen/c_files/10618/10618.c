/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(var_0, -var_0))) ? var_1 : var_6));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (((min(1, (arr_2 [i_0] [i_2 + 1]))) + (!1)));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_10 [3] = (arr_7 [i_0 + 2] [19] [i_2] [i_3]);
                        var_12 = (min((((arr_5 [i_3] [i_0 - 1]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_1] [i_2 - 1]))), (((0 == (arr_5 [i_1] [i_2 + 1]))))));
                        arr_11 [2] [i_1] [i_1] [i_2] [1] [i_1] = (min((max((arr_5 [i_0 + 1] [i_0 - 1]), (arr_5 [i_0 + 2] [i_0 + 1]))), ((29298 - (arr_5 [i_0 + 1] [i_0 - 1])))));
                        var_13 = ((-(1 + -1)));
                    }
                    var_14 = ((~((min((arr_7 [i_0] [i_0] [i_0] [i_2 - 1]), 1)))));
                    var_15 *= (((((min((((-4773215747862103070 ? (arr_5 [i_0] [i_1]) : (arr_7 [i_0] [i_0] [i_0] [i_0])))), 541273667557208695)) + 9223372036854775807)) << ((((((22997276 ? 2899099235564675977 : (arr_7 [i_0] [i_2] [i_0] [i_0]))) + (arr_8 [i_2 - 1]))) - 2899099235564677658))));
                }
            }
        }
        var_16 = (min(var_16, ((min(((max((arr_0 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0 + 1] [i_0 + 2])))), (arr_0 [i_0 + 2] [i_0 + 2]))))));
        var_17 = min(((min((arr_2 [i_0 + 1] [i_0 + 2]), (arr_2 [i_0 - 1] [i_0 - 1])))), ((-(arr_2 [i_0 + 2] [i_0 + 2]))));
        var_18 = (max(var_18, ((min((arr_8 [i_0 + 2]), (min((arr_7 [i_0 - 1] [i_0] [i_0] [19]), (((arr_6 [i_0] [i_0] [i_0] [i_0 + 1]) << (arr_2 [i_0] [i_0]))))))))));
    }
    #pragma endscop
}
