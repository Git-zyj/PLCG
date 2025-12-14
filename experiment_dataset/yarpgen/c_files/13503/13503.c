/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = var_3;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [11] [i_2] [i_1] = ((-(min(5501669093477791176, ((min(16777212, var_6)))))));
                        var_17 = ((-(((arr_4 [i_3 + 1] [i_1 + 1] [i_1 + 1]) ? (arr_4 [i_3 - 1] [i_1 - 1] [i_1 + 1]) : (arr_9 [i_1 + 1] [i_1 + 1] [i_3 - 1] [i_3])))));
                    }
                }
            }
        }
    }
    var_18 -= var_10;
    var_19 = (max(var_19, var_5));
    #pragma endscop
}
