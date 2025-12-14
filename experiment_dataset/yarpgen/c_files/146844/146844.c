/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((((((min(var_13, var_2)))) * ((3308329000 ? var_8 : (arr_4 [i_0] [0]))))))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_22 = (((~3308329000) ? (((262112 % 3308329000) * (~-1420643593))) : -19017));
                    arr_9 [2] [4] [2] [i_2] = (~(((((arr_4 [i_1] [i_1]) < 986638306)) ? var_4 : (var_3 / 127))));
                    var_23 = (min((arr_5 [i_0] [i_1]), ((var_12 ? ((((!(arr_2 [i_0]))))) : ((var_5 ? 3308329000 : (arr_0 [i_1])))))));
                    var_24 = (!1543399629);
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        arr_13 [i_3] = ((+(((((arr_10 [8] [i_3]) ? var_10 : var_16))))));
        var_25 -= ((-(min((arr_11 [i_3 - 1]), var_3))));
        arr_14 [i_3] = (var_5 < 658093640);
        var_26 *= ((~((((~(arr_12 [6] [i_3 + 1])))))));
    }
    var_27 = var_11;
    #pragma endscop
}
