/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [15] [i_0]) - ((((!(arr_1 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_15 ^= (max(147, (min((10591294599830089522 != 7099782703717858969), var_2))));
                        var_16 ^= (arr_12 [14] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3] [i_3]);
                    }
                }
            }
        }
    }
    var_17 |= (min(var_8, var_12));
    var_18 = (min(-var_1, var_9));
    #pragma endscop
}
