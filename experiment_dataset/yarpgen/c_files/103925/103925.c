/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_13 = (min(var_13, (((var_5 ? (arr_2 [i_0 + 1] [i_0 - 3]) : (arr_4 [i_2 + 2]))))));
                    var_14 = ((1 ? (arr_6 [i_2 + 3] [i_0 + 1]) : (arr_0 [i_0 - 1])));
                    var_15 = -var_5;
                }
                var_16 = -98;
            }
        }
    }
    var_17 -= var_3;
    #pragma endscop
}
