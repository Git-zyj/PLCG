/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = ((((min((arr_3 [i_1 - 1] [i_1 + 1]), 1))) ? ((((arr_0 [i_1 + 1]) ? (80 != 4294967274) : 190))) : (min(4294967271, 4037195751))));
                var_18 = (min(var_18, (((-(!4037195748))))));
                var_19 = (min(var_19, (((((((arr_3 [i_1 + 1] [i_1 - 1]) * 39))) ? ((1 * (-9223372036854775807 - 1))) : -var_13)))));
                arr_4 [i_0] [i_0] [i_1] = (((4194304 % 4294967251) & (((((arr_0 [i_0]) >= (arr_0 [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = (min((((arr_11 [i_0]) ? (-9223372036854775807 - 1) : (arr_11 [i_0]))), ((min((arr_11 [i_0]), (arr_11 [i_0]))))));
                                var_21 *= (max((arr_3 [i_0] [i_0]), (((arr_8 [i_0] [i_3 - 1] [i_4 + 1] [i_4]) * (arr_10 [i_2] [i_2] [i_2] [i_3])))));
                                var_22 = ((((((min(4037195747, 14))) ? (arr_9 [i_4] [i_0] [i_0] [i_0] [i_0] [i_0]) : (min((arr_12 [i_0] [i_0] [i_0] [i_0]), 4294967271)))) <= 257771547));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
