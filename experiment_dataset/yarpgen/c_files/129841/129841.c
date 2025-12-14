/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_12, -1));
    var_14 = (max(var_6, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (arr_0 [i_0] [i_1]);

                /* vectorizable */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_15 = (arr_1 [i_2 + 1]);
                    var_16 = -var_9;
                    arr_9 [i_0] [i_0] [i_2] = -var_12;
                    arr_10 [i_2] = 59;
                }
            }
        }
    }
    var_17 = 65535;
    #pragma endscop
}
