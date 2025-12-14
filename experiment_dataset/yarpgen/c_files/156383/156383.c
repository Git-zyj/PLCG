/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = arr_7 [i_0] [i_0];
                                var_17 = min((((arr_10 [i_0] [i_1] [i_2] [i_3] [i_3 + 2] [i_4 - 1] [i_4]) ? (arr_10 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0]))), ((((min((arr_3 [4]), var_6))) ? ((max(0, -6903))) : (8096 / 43))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] = (-32767 - 1);
            }
        }
    }
    var_18 = (max((min(var_4, (~var_10))), var_3));
    var_19 ^= var_8;
    #pragma endscop
}
