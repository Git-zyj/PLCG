/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 = ((min((arr_1 [i_0]), var_11)));
                            var_14 = (((207 ? (((arr_2 [i_1]) * 500661057)) : (~var_5))));
                            var_15 += arr_6 [i_0] [i_1] [i_1];
                            var_16 = (min((arr_5 [3] [7] [i_0] [3]), (arr_9 [5] [i_3] [i_0] [i_0] [i_0])));
                        }
                    }
                }
                var_17 = ((((((0 && (arr_6 [4] [i_0] [i_1]))) ? ((max(14, var_0))) : ((50878 ? 65535 : 50878))))) ^ (((((arr_8 [i_1] [i_0]) ? var_2 : (arr_8 [i_0] [i_0]))) - 3794306239)));
                var_18 ^= (((~31) ? 0 : (max((min((arr_0 [i_0]), var_11)), (var_2 > 26915)))));
                var_19 = (max((arr_9 [16] [0] [0] [9] [i_0]), (((min((arr_0 [i_0]), 2908728515))))));
                var_20 = (max(var_20, 6285758799979967231));
            }
        }
    }
    var_21 = (max(var_6, (min(var_3, (var_7 | var_9)))));
    #pragma endscop
}
