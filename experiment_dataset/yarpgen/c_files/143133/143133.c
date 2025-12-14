/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 3116779189015000520));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = (min(((var_11 ? var_0 : 2)), var_8));
                                var_14 = var_7;
                                var_15 += (!9761);
                            }
                        }
                    }
                }
                var_16 = -0;
                var_17 = (var_2 << ((((var_3 ? (max(-41, var_4)) : -28)) - 4294967243)));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        arr_17 [i_5] [i_5 - 2] = ((!18446744073709551609) || 15279533289772795512);
        arr_18 [i_5] = var_6;
    }
    #pragma endscop
}
