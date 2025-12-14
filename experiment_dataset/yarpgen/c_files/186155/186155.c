/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -7912070958560299941;
    var_20 = var_8;
    var_21 = (min(-var_0, 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_22 |= ((var_9 ? 0 : 1));
                    var_23 = ((-((((((max(0, -16438)))) > (arr_4 [i_0] [i_2 + 2] [i_2 + 2] [i_1]))))));
                    var_24 = (((arr_4 [i_1] [i_1] [i_2 - 1] [i_2 - 1]) / (arr_4 [i_0] [i_1] [i_2 + 1] [i_2 + 1])));
                    var_25 &= (((arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (~2413608759039058566) : (!2921589060)));
                }
            }
        }
    }
    var_26 &= (min(var_0, var_13));
    #pragma endscop
}
