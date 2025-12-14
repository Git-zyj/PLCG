/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_1 [i_0]) - (arr_3 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (arr_2 [i_1 + 2])));
                    arr_11 [i_0] [11] [i_0] [i_2] = (134 & 155);
                    arr_12 [i_0] [i_0] [8] [i_0] = ((((max((arr_9 [i_0] [i_0] [i_2]), var_15))) ? ((var_3 ? 15530521108423376891 : var_7)) : ((max(2456889932735441867, -566753744240741566)))));
                }
            }
        }
        var_18 += (((var_1 << (((((~var_14) + 25966)) - 47)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    arr_19 [i_0] [i_3] [10] [i_0] = var_15;
                    arr_20 [i_0] = var_1;
                }
            }
        }
    }
    var_19 = (max((min(-566753744240741566, var_9)), var_0));
    var_20 = (9223372028264841216 + var_14);
    var_21 = min((var_5 + var_4), var_9);
    #pragma endscop
}
