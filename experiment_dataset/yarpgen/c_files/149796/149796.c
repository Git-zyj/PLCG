/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((arr_2 [9] [i_1] [i_0 - 3]) >> (var_6 / var_4)));
                var_16 = var_11;

                /* vectorizable */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_17 = (min(var_17, ((((arr_2 [i_2 + 3] [i_0 - 3] [i_0 + 1]) / -var_13)))));
                    arr_9 [i_0] [i_0] = var_9;
                }
            }
        }
    }
    var_18 = (52351 / -1570183800);
    #pragma endscop
}
