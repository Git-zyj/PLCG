/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_17 ^ var_14) << (3304142567 - 3304142567));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        var_20 = (~-277533487);
                        arr_10 [i_0] [i_0] = (arr_9 [i_1 + 1] [i_1]);
                        var_21 = (min(var_21, ((!(((min(var_7, (arr_6 [i_0] [i_1] [i_0] [0])))))))));
                    }
                }
            }
        }
        var_22 = ((min((max(1479526488, var_11)), var_3)));
    }
    var_23 = var_15;
    #pragma endscop
}
