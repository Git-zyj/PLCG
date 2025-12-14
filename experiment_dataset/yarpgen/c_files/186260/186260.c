/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = var_4;
                arr_6 [i_0] = ((var_12 ? (((((((arr_3 [i_0]) || 455262725))) + ((~(arr_5 [i_0] [i_1 - 2])))))) : 455262710));
                var_17 = (max((max((min(8115725634592009669, var_11)), 3839704571)), 91));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_3] [i_0] [i_1 - 1] [i_0] [i_2] = (((((~((2371219195 ? var_15 : (arr_5 [i_0] [12])))))) ? ((((min(63393114, 112))) ? var_9 : (455262725 ^ var_6))) : 63393119));
                                var_18 = (max((min(var_7, (min((arr_0 [15]), 25)))), ((max(83, -23)))));
                                var_19 = 3839704603;
                            }
                        }
                    }
                }
                var_20 = max((((var_5 ? 4231574184 : var_10))), (min(((min((arr_3 [i_1]), (arr_14 [i_1])))), 339918779)));
            }
        }
    }
    var_21 = (-4294967295 ? var_1 : ((min(17, -127))));
    #pragma endscop
}
