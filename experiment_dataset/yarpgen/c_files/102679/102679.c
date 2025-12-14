/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (((((var_2 ^ -4582208801376047231) ? 95 : ((~(arr_3 [i_2] [i_2 + 1] [i_2 - 1]))))) + ((((((((arr_2 [i_1]) != (arr_0 [i_0 + 1] [i_1])))) <= 95))))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 = (((((arr_7 [i_1] [i_1] [5] [i_1] [i_1]) - (arr_7 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? var_14 : (-95 + var_12));
                        var_21 = (((((min(var_17, var_2))) >> (((min(var_1, (arr_3 [i_0 + 1] [i_0 + 1] [1]))) - 47)))));
                    }
                    var_22 = arr_5 [14] [i_1] [i_2];
                }
            }
        }
        var_23 = (min((max(22002, 45646)), 19889));
    }
    var_24 = (max(var_24, (((~(~var_8))))));
    var_25 = ((((~(var_10 != var_14))) > var_5));
    var_26 = (max(var_26, (min(19890, 45646))));
    #pragma endscop
}
