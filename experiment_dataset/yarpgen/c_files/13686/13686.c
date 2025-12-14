/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [10] = -0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, ((((arr_0 [i_0]) != (arr_0 [i_0]))))));
                        arr_12 [11] [i_2] [15] [i_3] [i_3] = var_3;
                    }
                }
            }
        }
    }
    var_17 -= 20434;
    #pragma endscop
}
