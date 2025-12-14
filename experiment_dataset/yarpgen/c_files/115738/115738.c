/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = 19064;
                arr_7 [0] [0] [i_1] |= (((((arr_2 [i_0]) > var_0))) >> (((min((arr_2 [i_0]), (arr_2 [i_1]))) - 12500104125355449044)));
                var_17 = (((min(var_7, (0 ^ 16632688944478016286))) << ((((max(((min(-1, 1))), (max((arr_6 [i_1] [i_1]), var_4))))) - 65474))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_1] [i_1] [13] = ((1814055129231535327 * ((max(var_14, var_5)))));
                            var_18 &= (max(((max(var_3, 2199023255544))), ((min((arr_3 [i_2] [i_3 + 3]), (arr_3 [i_2] [i_3 - 2]))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (((min(var_13, var_1)) >= ((max(var_12, var_12)))));
    var_20 = (min(((max(var_7, var_9))), (max((1 | var_5), (min(12968851848701591530, var_7))))));
    #pragma endscop
}
