/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_12 -= 1;

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2 + 1] = (max((max(1051, var_7)), ((var_8 ? (arr_6 [11] [11] [i_2 + 1]) : var_4))));

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_13 ^= var_3;
                        var_14 = 1743001691275222878;
                        var_15 = (max(var_15, var_10));
                    }
                }
                var_16 = (min(((((((arr_10 [i_0] [i_1] [i_1] [i_0]) / var_7))) ? -2147483642 : (arr_2 [i_0]))), ((((arr_1 [i_1 + 3] [i_1 + 2]) && -901015887)))));
                var_17 -= -1;
            }
        }
    }
    var_18 = min(((min((((2147483627 >> (var_9 - 16881126189276577439)))), var_1))), (min(-2147483622, var_9)));
    #pragma endscop
}
