/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((((~var_2) < (min(-6825192668171277279, -4)))))));
                    arr_8 [i_0] [i_1 + 1] [i_2] [i_2] &= ((-(var_14 + var_4)));
                    var_16 = (((((arr_4 [i_0]) + (arr_4 [i_0]))) + 4));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [8] [i_0] [i_3] [1] = ((-((max(19, -4)))));
                        var_17 = (min(var_17, ((((((arr_10 [i_0] [i_1] [i_1] [i_0] [i_3]) | (-232043119 ^ var_4))) + ((((var_10 || 96) ? (max(var_12, (arr_5 [i_1] [i_1 + 2] [i_1 + 2]))) : 232043119))))))));
                    }
                }
            }
        }
    }
    var_18 = (((((var_8 - (var_0 - var_9)))) ? ((((var_1 - var_13) + 1980430199))) : 8));
    var_19 = (~-var_12);
    #pragma endscop
}
