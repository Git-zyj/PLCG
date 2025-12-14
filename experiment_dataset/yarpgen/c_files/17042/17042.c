/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) + ((var_15 ? var_9 : var_4))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_21 = ((((arr_4 [0] [i_0]) ? var_5 : 5842110274491479792)));
            var_22 = 15206284690168193032;
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_23 = (((var_17 + ((((arr_1 [i_0]) + -120))))) - ((min((35615 - var_12), -var_11))));
            var_24 = (min(var_24, (arr_6 [i_2 + 1] [0])));
        }
        arr_7 [i_0] [i_0] = ((((((arr_4 [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : var_11))) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0])));
        var_25 = var_13;
    }
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        arr_10 [7] = (((arr_1 [i_3]) <= (((arr_1 [i_3 - 1]) ? (arr_5 [i_3 - 1] [i_3 - 1] [i_3]) : (arr_1 [1])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_26 = arr_14 [i_3] [i_4] [1] [i_5];
                    var_27 = var_8;
                    var_28 = arr_3 [i_5];
                }
            }
        }
    }
    var_29 += ((((1081488608361408350 * var_4) * (var_9 * var_17))));
    #pragma endscop
}
