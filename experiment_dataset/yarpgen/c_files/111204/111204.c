/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = arr_1 [i_0] [i_0];
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_2] [i_0] [i_0] [1] = arr_4 [i_1] [i_2];
                        arr_10 [i_3] [i_3] [i_2] [i_3] [i_3] = (((((var_11 || (~0)))) - (arr_1 [i_1] [i_2])));
                    }
                }
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
